/********************************************************************************
** Form generated from reading UI file 'Form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionPreferences;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QString::fromUtf8("MyForm"));
        MyForm->resize(800, 600);
        actionNew = new QAction(MyForm);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MyForm);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MyForm);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionPreferences = new QAction(MyForm);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        centralwidget = new QWidget(MyForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MyForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyForm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MyForm->setMenuBar(menubar);
        statusbar = new QStatusBar(MyForm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MyForm->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuArchivo->addAction(actionNew);
        menuArchivo->addAction(actionOpen);
        menuArchivo->addAction(actionSave);
        menuEdit->addAction(actionPreferences);

        retranslateUi(MyForm);

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QMainWindow *MyForm)
    {
        MyForm->setWindowTitle(QCoreApplication::translate("MyForm", "FIBedit", nullptr));
        actionNew->setText(QCoreApplication::translate("MyForm", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MyForm", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MyForm", "Save", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MyForm", "Preferences", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MyForm", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MyForm", "Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MyForm", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
