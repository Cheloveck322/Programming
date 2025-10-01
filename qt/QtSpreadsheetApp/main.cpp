#include <QApplication>
#include "table.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Table w;
    w.show();
    return app.exec();
}
