#include <QApplication>
#include <QDebug>
#include "MainWindow.h"

int main( int argc, char ** argv )
{
    QApplication a( argc, argv );

    MainWindow mw;
    mw.show();

    return a.exec();
}

