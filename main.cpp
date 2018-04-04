#include <QCoreApplication>
#include <QCursor>
#include <QGuiApplication>
#include <QMouseEvent>
#include <QPoint>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
   QGuiApplication qga(argc, argv);
   while (true)
   {
      std::cout << QCursor::pos().x() << std::endl << QCursor::pos().y() << std::endl;
   }

   return 0;
}
