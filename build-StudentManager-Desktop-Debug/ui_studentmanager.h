/********************************************************************************
** Form generated from reading UI file 'studentmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMANAGER_H
#define UI_STUDENTMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentManager
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QPushButton *add_button;
    QPushButton *pushButton_2;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *name;
    QLabel *major;
    QLabel *id;
    QLabel *class_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StudentManager)
    {
        if (StudentManager->objectName().isEmpty())
            StudentManager->setObjectName(QString::fromUtf8("StudentManager"));
        StudentManager->resize(800, 600);
        centralwidget = new QWidget(StudentManager);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(40, 130, 711, 341));
        add_button = new QPushButton(centralwidget);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        add_button->setGeometry(QRect(510, 90, 80, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 90, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 20, 141, 51));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 90, 441, 18));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        name = new QLabel(widget);
        name->setObjectName(QString::fromUtf8("name"));

        gridLayout->addWidget(name, 0, 0, 1, 1);

        major = new QLabel(widget);
        major->setObjectName(QString::fromUtf8("major"));

        gridLayout->addWidget(major, 0, 1, 1, 1);

        id = new QLabel(widget);
        id->setObjectName(QString::fromUtf8("id"));

        gridLayout->addWidget(id, 0, 2, 1, 1);

        class_2 = new QLabel(widget);
        class_2->setObjectName(QString::fromUtf8("class_2"));

        gridLayout->addWidget(class_2, 0, 3, 1, 1);

        StudentManager->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StudentManager);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        StudentManager->setMenuBar(menubar);
        statusbar = new QStatusBar(StudentManager);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        StudentManager->setStatusBar(statusbar);

        retranslateUi(StudentManager);

        QMetaObject::connectSlotsByName(StudentManager);
    } // setupUi

    void retranslateUi(QMainWindow *StudentManager)
    {
        StudentManager->setWindowTitle(QApplication::translate("StudentManager", "StudentManager", nullptr));
        add_button->setText(QApplication::translate("StudentManager", "+", nullptr));
        pushButton_2->setText(QApplication::translate("StudentManager", "-", nullptr));
        label->setText(QApplication::translate("StudentManager", "       Student Manager", nullptr));
        name->setText(QApplication::translate("StudentManager", "Name", nullptr));
        major->setText(QApplication::translate("StudentManager", "Major", nullptr));
        id->setText(QApplication::translate("StudentManager", "Id", nullptr));
        class_2->setText(QApplication::translate("StudentManager", "Class", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentManager: public Ui_StudentManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGER_H
