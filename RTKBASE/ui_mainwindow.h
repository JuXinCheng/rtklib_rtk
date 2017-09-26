/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *RoverButton;
    QPushButton *BasestationButton;
    QLineEdit *TimeEdit;
    QLineEdit *TimeRetourEdit;
    QPushButton *QuitterButton;
    QLabel *Rtkliblabel;
    QLabel *ensglabel;
    QLabel *ensgIconlabel;
    QPushButton *HelpButton;
    QPushButton *PowerOFFButton;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        RoverButton = new QPushButton(centralWidget);
        RoverButton->setObjectName(QString::fromUtf8("RoverButton"));
        RoverButton->setGeometry(QRect(20, 100, 261, 171));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        RoverButton->setFont(font);
        RoverButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border: 1px solid black;"));
        BasestationButton = new QPushButton(centralWidget);
        BasestationButton->setObjectName(QString::fromUtf8("BasestationButton"));
        BasestationButton->setGeometry(QRect(310, 100, 271, 171));
        BasestationButton->setFont(font);
        BasestationButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border: 1px solid black;"));
        TimeEdit = new QLineEdit(centralWidget);
        TimeEdit->setObjectName(QString::fromUtf8("TimeEdit"));
        TimeEdit->setEnabled(false);
        TimeEdit->setGeometry(QRect(290, -1, 71, 27));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        TimeEdit->setFont(font1);
        TimeEdit->setAlignment(Qt::AlignCenter);
        TimeRetourEdit = new QLineEdit(centralWidget);
        TimeRetourEdit->setObjectName(QString::fromUtf8("TimeRetourEdit"));
        TimeRetourEdit->setEnabled(false);
        TimeRetourEdit->setGeometry(QRect(380, -1, 171, 27));
        TimeRetourEdit->setFont(font1);
        TimeRetourEdit->setAcceptDrops(true);
        TimeRetourEdit->setAlignment(Qt::AlignCenter);
        QuitterButton = new QPushButton(centralWidget);
        QuitterButton->setObjectName(QString::fromUtf8("QuitterButton"));
        QuitterButton->setGeometry(QRect(610, 145, 151, 81));
        QuitterButton->setFont(font1);
        QuitterButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        Rtkliblabel = new QLabel(centralWidget);
        Rtkliblabel->setObjectName(QString::fromUtf8("Rtkliblabel"));
        Rtkliblabel->setGeometry(QRect(10, 280, 81, 71));
        ensglabel = new QLabel(centralWidget);
        ensglabel->setObjectName(QString::fromUtf8("ensglabel"));
        ensglabel->setGeometry(QRect(10, 337, 71, 81));
        ensgIconlabel = new QLabel(centralWidget);
        ensgIconlabel->setObjectName(QString::fromUtf8("ensgIconlabel"));
        ensgIconlabel->setGeometry(QRect(353, 38, 111, 61));
        HelpButton = new QPushButton(centralWidget);
        HelpButton->setObjectName(QString::fromUtf8("HelpButton"));
        HelpButton->setGeometry(QRect(610, 240, 151, 81));
        HelpButton->setFont(font1);
        HelpButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        PowerOFFButton = new QPushButton(centralWidget);
        PowerOFFButton->setObjectName(QString::fromUtf8("PowerOFFButton"));
        PowerOFFButton->setGeometry(QRect(610, 55, 151, 81));
        PowerOFFButton->setFont(font1);
        PowerOFFButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 30, 211, 51));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setWeight(75);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        RoverButton->raise();
        BasestationButton->raise();
        TimeRetourEdit->raise();
        QuitterButton->raise();
        Rtkliblabel->raise();
        ensglabel->raise();
        ensgIconlabel->raise();
        HelpButton->raise();
        PowerOFFButton->raise();
        TimeEdit->raise();
        lineEdit->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 30));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RTKLIB for Raspberry", 0, QApplication::UnicodeUTF8));
        RoverButton->setText(QApplication::translate("MainWindow", "ROVER", 0, QApplication::UnicodeUTF8));
        BasestationButton->setText(QApplication::translate("MainWindow", "BASESTATION", 0, QApplication::UnicodeUTF8));
        TimeEdit->setText(QApplication::translate("MainWindow", "TIME:", 0, QApplication::UnicodeUTF8));
        TimeRetourEdit->setText(QString());
        QuitterButton->setText(QApplication::translate("MainWindow", "CLOSE GUI", 0, QApplication::UnicodeUTF8));
        Rtkliblabel->setText(QString());
        ensglabel->setText(QString());
        ensgIconlabel->setText(QString());
        HelpButton->setText(QApplication::translate("MainWindow", "HELP", 0, QApplication::UnicodeUTF8));
        PowerOFFButton->setText(QApplication::translate("MainWindow", "POWER OFF", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("MainWindow", "RTKLIB", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
