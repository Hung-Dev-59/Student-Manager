#include "studentmanager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StudentManager w;
    w.addStudent("Nguyen Hung","AI","607588","21DTHC6");
    w.addStudent("Huy","Mobile","607500","21DTHC6");
    w.addStudent("Ngan","Web","607599","21DTHD1");
    w.addStudent("Trinh","Data","607590","21DTHD1");
    w.addStudent("Trang","Economic","607580","21DTHD1");
    w.show();
    return a.exec();
}
