#include <QApplication>

#include "MainWindow.h"
#include "Server_Poco.h"

int main(int argc, char *argv[]) {
  MyServerApp app;
  return app.run(argc, argv);
  //    QApplication a(argc, argv);
  //    MainWindow w;
  //    w.show();
  //    return a.exec();
}
