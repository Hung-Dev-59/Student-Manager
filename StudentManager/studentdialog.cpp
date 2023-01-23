#include "studentdialog.h"
#include "ui_studentdialog.h"
#include"student.h"
#include<QString>
StudentDialog::StudentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentDialog)
{
    ui->setupUi(this);
    setWindowTitle(QString::fromUtf8("Information Of Students"));
}

void StudentDialog::Show(Student *student){
    QString s = QString::number(student->getId());
    ui->name->setText(student->getName());
    ui->major->setText(student->getMajor());
    ui->id->setText("Do not edit");
    ui->class_2->setText(student->getClass());
    list_Student = student;
    show();
}

StudentDialog::~StudentDialog()
{
    delete ui;
}

void StudentDialog::on_pushButton_released()
{
    list_Student->setName(ui->name->text());
    list_Student->setMajor(ui->major->text());
    list_Student->setClass(ui->class_2->text());
    hide();

}


void StudentDialog::on_pushButton_2_clicked()
{
    hide();
}

