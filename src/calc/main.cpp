#include "smart_calc.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Smart_Calc w;
    w.show();
    return a.exec();
}
