// src/table.h
#ifndef TABLE_H
#define TABLE_H

#include <QMainWindow>

class Spreadsheet; // наследник QTableWidget с простыми функциями таблицы
class QAction;

QT_BEGIN_NAMESPACE
namespace Ui { class Table; }
QT_END_NAMESPACE

class Table : public QMainWindow
{
    Q_OBJECT
public:
    explicit Table(QWidget *parent = nullptr);
    ~Table();

private slots:
    void newFile();
    void open();
    bool save();
    bool saveAs();
    void find();
    void goToCell();
    void about();
    void sort();
    void toggleShowGrid(bool on);
    void toggleAutoRecalc(bool on);

private:
    Ui::Table *ui;
    Spreadsheet *spreadsheet;
    enum { maxRecentFile = 5 };
    QAction *recentFilesActions[maxRecentFile] = { nullptr, nullptr, nullptr, nullptr, nullptr };
    QAction *addSeparator = nullptr;

    void setupConnections();
};

#endif // TABLE_H
