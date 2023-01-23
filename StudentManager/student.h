#ifndef STUDENT_H
#define STUDENT_H
#include<QListWidgetItem>
#include<QString>
class Student : public QListWidgetItem
{
public:
    Student() { }
    Student(QString name);
    Student(QString name, QString major, QString id, QString Class);
    ~Student(){}
    void setName(QString name);
    void setMajor(QString major);
    void setId(QString id);
    void setClass(QString Class);
    QString getName() const;
    QString getMajor() const;
    QString getId() const;
    QString getClass() const;
private:
    QString name;
    QString major;
    QString id;
    QString Class;
};

inline void Student::setName(QString name){
    QListWidgetItem::setText(name);
}

inline void Student::setMajor(QString major){
    this->major = major;
}

inline void Student::setId(QString id){
    this->id = id;
}

inline void Student::setClass(QString Class)
{
    this->Class = Class;
}

inline QString Student::getName() const
{
    return QListWidgetItem::text();
}

inline QString Student::getMajor() const
{
    return major;
}

inline QString Student::getId() const
{
    return id;
}

inline QString Student::getClass() const
{
    return Class;
}


#endif // STUDENT_H
