/********************************************************************************
** Form generated from reading UI file 'KursachNew.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KURSACHNEW_H
#define UI_KURSACHNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KursachNewClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KursachNewClass)
    {
        if (KursachNewClass->objectName().isEmpty())
            KursachNewClass->setObjectName("KursachNewClass");
        KursachNewClass->resize(600, 400);
        menuBar = new QMenuBar(KursachNewClass);
        menuBar->setObjectName("menuBar");
        KursachNewClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KursachNewClass);
        mainToolBar->setObjectName("mainToolBar");
        KursachNewClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(KursachNewClass);
        centralWidget->setObjectName("centralWidget");
        KursachNewClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(KursachNewClass);
        statusBar->setObjectName("statusBar");
        KursachNewClass->setStatusBar(statusBar);

        retranslateUi(KursachNewClass);

        QMetaObject::connectSlotsByName(KursachNewClass);
    } // setupUi

    void retranslateUi(QMainWindow *KursachNewClass)
    {
        KursachNewClass->setWindowTitle(QCoreApplication::translate("KursachNewClass", "KursachNew", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KursachNewClass: public Ui_KursachNewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KURSACHNEW_H
