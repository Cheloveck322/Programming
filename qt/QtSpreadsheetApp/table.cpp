#include "table.h"
#include "ui_table.h"
#include "spreadsheet.h"

#include <QApplication>
#include <QFileDialog>
#include <QMessageBox>
#include <QClipboard>
#include <QInputDialog>
#include <QRegularExpression>

Table::Table(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Table)
    , spreadsheet(new Spreadsheet(this))
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/images/icon.png"));
    setCentralWidget(spreadsheet);

    setupConnections();
}

Table::~Table()
{
    delete ui;
}

void Table::setupConnections()
{
    // File
    connect(ui->actionNew, &QAction::triggered, this, &Table::newFile);
    connect(ui->actionOpen, &QAction::triggered, this, &Table::open);
    connect(ui->actionSave, &QAction::triggered, this, &Table::save);
    connect(ui->actionSave_As, &QAction::triggered, this, &Table::saveAs);
    connect(ui->actionExit, &QAction::triggered, qApp, &QApplication::quit);

    // Edit
    connect(ui->actionCut, &QAction::triggered, spreadsheet, &Spreadsheet::cutSelection);
    connect(ui->actionCopy, &QAction::triggered, spreadsheet, &Spreadsheet::copySelection);
    connect(ui->actionPaste, &QAction::triggered, spreadsheet, &Spreadsheet::pasteIntoSelection);
    connect(ui->actionDelete, &QAction::triggered, spreadsheet, &Spreadsheet::deleteSelection);
    connect(ui->actionFind, &QAction::triggered, this, &Table::find);
    connect(ui->actionGo_to_Cell, &QAction::triggered, this, &Table::goToCell);
    connect(ui->actionRow, &QAction::triggered, spreadsheet, &Spreadsheet::selectRowAction);
    connect(ui->actionColumn, &QAction::triggered, spreadsheet, &Spreadsheet::selectColumnAction);
    connect(ui->actionAll, &QAction::triggered, spreadsheet, &Spreadsheet::selectAllAction);

    // Tools
    connect(ui->actionRecalculate, &QAction::triggered, this, &Table::sort); // stub
    connect(ui->actionSort, &QAction::triggered, this, &Table::sort);

    // Options (checkable)
    connect(ui->actionShow_Grid, &QAction::toggled, this, &Table::toggleShowGrid);
    connect(ui->actionAuto_recalculate, &QAction::toggled, this, &Table::toggleAutoRecalc);

    // Help
    connect(ui->actionAbout, &QAction::triggered, this, &Table::about);
    connect(ui->actionAbout_Qt, &QAction::triggered, qApp, &QApplication::aboutQt);
}

void Table::newFile()
{
    spreadsheet->clear();
    spreadsheet->setRowCount(50);
    spreadsheet->setColumnCount(26);
    statusBar()->showMessage(tr("New file created"), 2000);
}

void Table::open()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open CSV"), QString(), tr("CSV Files (*.csv);;All Files (*.*)"));
    if (fileName.isEmpty()) return;

    QFile f(fileName);
    if (!f.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("Open"), tr("Cannot open file."));
        return;
    }
    spreadsheet->clear();
    int row = 0;
    while (!f.atEnd()) {
        QByteArray line = f.readLine();
        QStringList cols = QString::fromUtf8(line).split(',', Qt::KeepEmptyParts);
        if (row >= spreadsheet->rowCount()) spreadsheet->insertRow(spreadsheet->rowCount());
        for (int c = 0; c < cols.size(); ++c) {
            if (c >= spreadsheet->columnCount()) spreadsheet->insertColumn(spreadsheet->columnCount());
            auto *it = spreadsheet->item(row, c);
            if (!it) {
                it = new QTableWidgetItem;
                spreadsheet->setItem(row, c, it);
            }
            it->setText(cols[c].trimmed());
        }
        ++row;
    }
    statusBar()->showMessage(tr("Opened %1").arg(QFileInfo(fileName).fileName()), 2000);
}

bool Table::save()
{
    return saveAs();
}

bool Table::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save CSV As"), QString(), tr("CSV Files (*.csv)"));
    if (fileName.isEmpty()) return false;

    QFile f(fileName);
    if (!f.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("Save"), tr("Cannot save file."));
        return false;
    }

    for (int r = 0; r < spreadsheet->rowCount(); ++r) {
        QStringList cols;
        for (int c = 0; c < spreadsheet->columnCount(); ++c) {
            auto *it = spreadsheet->item(r, c);
            cols << (it ? it->text() : QString());
        }
        f.write(cols.join(',').toUtf8());
        f.write("\n");
    }
    statusBar()->showMessage(tr("Saved"), 2000);
    return true;
}

void Table::find()
{
    bool ok = false;
    QString pattern = QInputDialog::getText(this, tr("Find"), tr("Text:"), QLineEdit::Normal, QString(), &ok);
    if (!ok || pattern.isEmpty()) return;

    auto items = spreadsheet->findItems(pattern, Qt::MatchContains);
    if (!items.isEmpty()) {
        spreadsheet->setCurrentItem(items.first());
        statusBar()->showMessage(tr("Found"), 1500);
    } else {
        QMessageBox::information(this, tr("Find"), tr("No matches."));
    }
}

void Table::goToCell() {
    bool ok = false;
    QString addr = QInputDialog::getText(this, tr("Go to cell"),
                                         tr("Cell (e.g., A1):"),
                                         QLineEdit::Normal, QString(), &ok);
    if (!ok || addr.isEmpty()) return;

    QRegularExpression re("^([A-Za-z]+)(\\d+)$");
    auto m = re.match(addr);
    if (!m.hasMatch()) {
        QMessageBox::warning(this, tr("Go to cell"), tr("Invalid address."));
        return;
    }
    QString colStr = m.captured(1).toUpper();
    int row = m.captured(2).toInt() - 1;

    int col = 0;
    for (int i = 0; i < colStr.size(); ++i)
        col = col * 26 + (colStr[i].unicode() - 'A' + 1);
    col -= 1;

    if (row < 0 || col < 0) return;
    while (row >= spreadsheet->rowCount()) spreadsheet->insertRow(spreadsheet->rowCount());
    while (col >= spreadsheet->columnCount()) spreadsheet->insertColumn(spreadsheet->columnCount());
    spreadsheet->setCurrentCell(row, col);
}


void Table::about()
{
    QMessageBox::about(this, tr("About"), tr("<b>Electronic Table</b><br/>Qt demo for menus, toolbars, and actions."));
}

void Table::sort()
{
    // Simple sort: sort by current column
    spreadsheet->sortItems(spreadsheet->currentColumn());
    statusBar()->showMessage(tr("Sorted"), 1500);
}

void Table::toggleShowGrid(bool on)
{
    spreadsheet->setShowGrid(on);
}

void Table::toggleAutoRecalc(bool /*on*/)
{
    // Stub; in a real spreadsheet, this would control formula recomputation.
    statusBar()->showMessage(tr("Auto-recalculate toggled"), 1500);
}
