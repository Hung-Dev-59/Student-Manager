#include "studentmanager.h"
#include "ui_studentmanager.h"
#include "student.h"
#include "QVector"
#include <QList>
#include"studentdialog.h"
StudentManager::StudentManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StudentManager)
{
    ui->setupUi(this);
    List_Student_Dialog = new StudentDialog;

}


void StudentManager::addStudent(Student *student){
    ui->listWidget->addItem((QListWidgetItem *) student);
    list_Student.push_back(student);
}

void StudentManager::addStudent(QString name)
{
    Student *student = new Student(name);
    addStudent(student);
}
void StudentManager::addStudent(QString name, QString major,QString id, QString Class){
    Student *student = new Student(name, major,id,Class);
    addStudent(student);
}

void StudentManager::removeStudent(Student *student){
    ui->listWidget->removeItemWidget((QListWidgetItem *) student);
    for(int i=0 ; i < list_Student.size() ; ++i ) {
        if(list_Student[i] == student){
            list_Student.remove(i);
            delete student;
//            delete List_Student_Dialog;
        }
    }
}

void StudentManager::on_listWidget_itemClicked(QListWidgetItem *item)
{
    Student *student = (Student *) item;

        ui->name->setText(student->getName());
        ui->major->setText(student->getMajor());
        ui->id->setText(student->getId());
        ui->class_2->setText(student->getClass());
}

void StudentManager::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    List_Student_Dialog->Show((Student *) item);

}

StudentManager::~StudentManager()
{
    for(int i=0;i<list_Student.size();++i){
        removeStudent(list_Student[i]);
    }

    delete ui;
}

void StudentManager::on_pushButton_2_clicked()
{
    removeStudent( (Student *) ui->listWidget->currentItem());
}


void StudentManager::on_add_button_clicked()
{
    addStudent("New Student");
}




