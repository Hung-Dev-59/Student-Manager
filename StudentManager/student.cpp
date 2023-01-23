#include "student.h"
#include<QListWidgetItem>
Student::Student(QString name)
    :QListWidgetItem(name)
{

}

Student::Student(QString name,QString major,double id,QString Class)
    :QListWidgetItem(name), major(major),id(id),Class(Class)
{

}
