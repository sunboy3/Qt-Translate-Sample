#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QLocale>
int main(int argc, char *argv[])
{
//    QApplication::setStyle("fusion");
    QApplication a(argc, argv);
    // translate --->
      QTranslator translator;
      translator.load("trans_"+QLocale::system().name(),":translate");
      a.installTranslator(&translator);
      // <---
    MainWindow w;
    w.show();

    return a.exec();
}
