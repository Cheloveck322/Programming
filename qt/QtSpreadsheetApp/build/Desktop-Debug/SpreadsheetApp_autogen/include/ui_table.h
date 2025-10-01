/********************************************************************************
** Form generated from reading UI file 'table.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_H
#define UI_TABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_Table
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionExit;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionFind;
    QAction *actionGo_to_Cell;
    QAction *actionRow;
    QAction *actionColumn;
    QAction *actionAll;
    QAction *actionRecalculate;
    QAction *actionSort;
    QAction *actionShow_Grid;
    QAction *actionAuto_recalculate;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QMenu *menuSelect;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTools;
    QMenu *menuOptions;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Table)
    {
        if (Table->objectName().isEmpty())
            Table->setObjectName("Table");
        Table->resize(455, 342);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Table->setWindowIcon(icon);
        actionNew = new QAction(Table);
        actionNew->setObjectName("actionNew");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(Table);
        actionOpen->setObjectName("actionOpen");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(Table);
        actionSave->setObjectName("actionSave");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave_As = new QAction(Table);
        actionSave_As->setObjectName("actionSave_As");
        actionExit = new QAction(Table);
        actionExit->setObjectName("actionExit");
        actionCut = new QAction(Table);
        actionCut->setObjectName("actionCut");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon4);
        actionCopy = new QAction(Table);
        actionCopy->setObjectName("actionCopy");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionPaste = new QAction(Table);
        actionPaste->setObjectName("actionPaste");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionDelete = new QAction(Table);
        actionDelete->setObjectName("actionDelete");
        actionFind = new QAction(Table);
        actionFind->setObjectName("actionFind");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon7);
        actionGo_to_Cell = new QAction(Table);
        actionGo_to_Cell->setObjectName("actionGo_to_Cell");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/gotocell.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGo_to_Cell->setIcon(icon8);
        actionRow = new QAction(Table);
        actionRow->setObjectName("actionRow");
        actionColumn = new QAction(Table);
        actionColumn->setObjectName("actionColumn");
        actionAll = new QAction(Table);
        actionAll->setObjectName("actionAll");
        actionRecalculate = new QAction(Table);
        actionRecalculate->setObjectName("actionRecalculate");
        actionSort = new QAction(Table);
        actionSort->setObjectName("actionSort");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/sort.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSort->setIcon(icon9);
        actionShow_Grid = new QAction(Table);
        actionShow_Grid->setObjectName("actionShow_Grid");
        actionShow_Grid->setCheckable(true);
        actionAuto_recalculate = new QAction(Table);
        actionAuto_recalculate->setObjectName("actionAuto_recalculate");
        actionAuto_recalculate->setCheckable(true);
        actionAbout = new QAction(Table);
        actionAbout->setObjectName("actionAbout");
        actionAbout_Qt = new QAction(Table);
        actionAbout_Qt->setObjectName("actionAbout_Qt");
        menuSelect = new QMenu(Table);
        menuSelect->setObjectName("menuSelect");
        Table->setCentralWidget(menuSelect);
        menubar = new QMenuBar(Table);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 455, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName("menuOptions");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        Table->setMenuBar(menubar);
        mainToolBar = new QToolBar(Table);
        mainToolBar->setObjectName("mainToolBar");
        Table->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusbar = new QStatusBar(Table);
        statusbar->setObjectName("statusbar");
        Table->setStatusBar(statusbar);

        menuSelect->addAction(actionRow);
        menuSelect->addAction(actionColumn);
        menuSelect->addAction(actionAll);
        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionGo_to_Cell);
        menuTools->addAction(actionRecalculate);
        menuTools->addAction(actionSort);
        menuOptions->addAction(actionShow_Grid);
        menuOptions->addAction(actionAuto_recalculate);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionFind);
        mainToolBar->addAction(actionGo_to_Cell);
        mainToolBar->addAction(actionSort);

        retranslateUi(Table);

        QMetaObject::connectSlotsByName(Table);
    } // setupUi

    void retranslateUi(QMainWindow *Table)
    {
        Table->setWindowTitle(QCoreApplication::translate("Table", "Electronic Table", nullptr));
        actionNew->setText(QCoreApplication::translate("Table", "&New", nullptr));
#if QT_CONFIG(statustip)
        actionNew->setStatusTip(QCoreApplication::translate("Table", "Create a new file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("Table", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("Table", "&Open", nullptr));
#if QT_CONFIG(statustip)
        actionOpen->setStatusTip(QCoreApplication::translate("Table", "Open file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("Table", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("Table", "&Save", nullptr));
#if QT_CONFIG(statustip)
        actionSave->setStatusTip(QCoreApplication::translate("Table", "Save file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("Table", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("Table", "Save As", nullptr));
        actionExit->setText(QCoreApplication::translate("Table", "&Exit", nullptr));
#if QT_CONFIG(statustip)
        actionExit->setStatusTip(QCoreApplication::translate("Table", "Close app", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("Table", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("Table", "Cut", nullptr));
#if QT_CONFIG(statustip)
        actionCut->setStatusTip(QCoreApplication::translate("Table", "Cut", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("Table", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("Table", "&Copy", nullptr));
#if QT_CONFIG(statustip)
        actionCopy->setStatusTip(QCoreApplication::translate("Table", "Copy", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("Table", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("Table", "&Paste", nullptr));
#if QT_CONFIG(statustip)
        actionPaste->setStatusTip(QCoreApplication::translate("Table", "Paste", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("Table", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("Table", "&Delete", nullptr));
#if QT_CONFIG(statustip)
        actionDelete->setStatusTip(QCoreApplication::translate("Table", "Delete", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("Table", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("Table", "&Find", nullptr));
#if QT_CONFIG(statustip)
        actionFind->setStatusTip(QCoreApplication::translate("Table", "find", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("Table", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGo_to_Cell->setText(QCoreApplication::translate("Table", "Go to Cell", nullptr));
#if QT_CONFIG(statustip)
        actionGo_to_Cell->setStatusTip(QCoreApplication::translate("Table", "Go to cell", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionGo_to_Cell->setShortcut(QCoreApplication::translate("Table", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRow->setText(QCoreApplication::translate("Table", "Row", nullptr));
        actionColumn->setText(QCoreApplication::translate("Table", "Column", nullptr));
        actionAll->setText(QCoreApplication::translate("Table", "All", nullptr));
#if QT_CONFIG(shortcut)
        actionAll->setShortcut(QCoreApplication::translate("Table", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRecalculate->setText(QCoreApplication::translate("Table", "Recalculate", nullptr));
#if QT_CONFIG(shortcut)
        actionRecalculate->setShortcut(QCoreApplication::translate("Table", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSort->setText(QCoreApplication::translate("Table", "Sort", nullptr));
        actionShow_Grid->setText(QCoreApplication::translate("Table", "Show Grid", nullptr));
        actionAuto_recalculate->setText(QCoreApplication::translate("Table", "Auto-recalculate", nullptr));
        actionAbout->setText(QCoreApplication::translate("Table", "About", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("Table", "About Qt", nullptr));
        menuSelect->setTitle(QCoreApplication::translate("Table", "Select", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Table", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Table", "&Edit", nullptr));
        menuTools->setTitle(QCoreApplication::translate("Table", "&Tools", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("Table", "&Options", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Table", "&Help", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("Table", "Main Toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Table: public Ui_Table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_H
