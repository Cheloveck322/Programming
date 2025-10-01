#include "spreadsheet.h"
#include <QClipboard>
#include <QApplication>

Spreadsheet::Spreadsheet(QWidget *parent)
    : QTableWidget(50, 26, parent) // 50 rows, 26 cols (A..Z) as a simple sheet
{
    setSelectionMode(QAbstractItemView::ContiguousSelection);
    setShowGrid(true);
}

void Spreadsheet::cutSelection()
{
    copySelection();
    deleteSelection();
}

void Spreadsheet::copySelection()
{
    QString text;
    QList<QTableWidgetSelectionRange> ranges = selectedRanges();
    if (ranges.isEmpty()) return;
    auto r = ranges.first();
    for (int i = 0; i < r.rowCount(); ++i) {
        QStringList row;
        for (int j = 0; j < r.columnCount(); ++j) {
            QTableWidgetItem *it = item(r.topRow() + i, r.leftColumn() + j);
            row << (it ? it->text() : QString());
        }
        text += row.join('\t');
        text += '\n';
    }
    QApplication::clipboard()->setText(text);
}

void Spreadsheet::pasteIntoSelection()
{
    QString text = QApplication::clipboard()->text();
    if (text.isEmpty()) return;

    QList<QTableWidgetSelectionRange> ranges = selectedRanges();
    int startRow = 0, startCol = 0;
    if (!ranges.isEmpty()) {
        startRow = ranges.first().topRow();
        startCol = ranges.first().leftColumn();
    } else {
        startRow = currentRow();
        startCol = currentColumn();
    }

    const QStringList rows = text.split('\n', Qt::SkipEmptyParts);
    for (int i = 0; i < rows.size(); ++i) {
        const QStringList cols = rows[i].split('\t');
        for (int j = 0; j < cols.size(); ++j) {
            int r = startRow + i;
            int c = startCol + j;
            if (r >= rowCount()) insertRow(rowCount());
            if (c >= columnCount()) insertColumn(columnCount());
            QTableWidgetItem *it = item(r, c);
            if (!it) {
                it = new QTableWidgetItem;
                setItem(r, c, it);
            }
            it->setText(cols[j]);
        }
    }
}

void Spreadsheet::deleteSelection()
{
    for (auto r : selectedRanges()) {
        for (int i = r.topRow(); i <= r.bottomRow(); ++i) {
            for (int j = r.leftColumn(); j <= r.rightColumn(); ++j) {
                QTableWidgetItem *it = item(i, j);
                if (it) it->setText(QString());
            }
        }
    }
}

void Spreadsheet::selectRowAction()
{
    if (currentRow() >= 0) selectRow(currentRow());
}

void Spreadsheet::selectColumnAction()
{
    if (currentColumn() >= 0) selectColumn(currentColumn());
}

void Spreadsheet::selectAllAction()
{
    selectAll();
}
