#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel* label(new QLabel(QString::fromLocal8Bit("Привет, Qt!\n")));
    label->show();
    return a.exec();
}
