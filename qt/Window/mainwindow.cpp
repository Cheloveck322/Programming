#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(QString::fromLocal8Bit("Привет, Qt!\n"));
    resize(600, 400);
}

MainWindow::~MainWindow()
{
    delete ui;
}
