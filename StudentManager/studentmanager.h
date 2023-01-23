#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H
#include"student.h"
#include <QMainWindow>
#include<QString>
#include<QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class StudentManager; }
QT_END_NAMESPACE

class QListWidgetItem;
class StudentDialog;
class StudentManager : public QMainWindow
{
    Q_OBJECT

public:
    StudentManager(QWidget *parent = nullptr);
    ~StudentManager();
    void addStudent(Student *student);
    void addStudent(QString name);
    void addStudent(QString name,QString major,QString id,QString Class);
    void removeStudent(Student *student);
private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_add_button_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::StudentManager *ui;

    QVector<Student *>list_Student;

    StudentDialog *List_Student_Dialog;
};
#endif // STUDENTMANAGER_H
