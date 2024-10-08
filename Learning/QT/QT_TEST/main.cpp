#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[]) // program execution start
{
    // QApplication is the class that manages the GUI app CONTROL FLOW & Initialization
    QApplication a(argc, argv);
    // creating object of MainWindow class
    MainWindow w;
    // it will show the CUSTOM widgets
    w.show();
    // Keep our application running
    return a.exec();
}
