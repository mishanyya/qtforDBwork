#include "mainwindow.h"
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include "QtSql"
#include "QApplication"

int main(int argc, char *argv[])
{
QApplication a(argc, argv);

MainWindow w;
w.show();
return a.exec();
}
