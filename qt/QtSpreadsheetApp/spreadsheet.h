#ifndef SPREADSHEET_H
#define SPREADSHEET_H

#include <QTableWidget>

class Spreadsheet : public QTableWidget
{
    Q_OBJECT
public:
    explicit Spreadsheet(QWidget *parent = nullptr);

    // Simple helpers used by actions
    void cutSelection();
    void copySelection();
    void pasteIntoSelection();
    void deleteSelection();
    void selectRowAction();
    void selectColumnAction();
    void selectAllAction();
};

#endif // SPREADSHEET_H
