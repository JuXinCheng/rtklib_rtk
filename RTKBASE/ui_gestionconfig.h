/********************************************************************************
** Form generated from reading UI file 'gestionconfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONCONFIG_H
#define UI_GESTIONCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GestionConfig
{
public:
    QPushButton *EditButton;
    QPushButton *ReturnButton;
    QPushButton *NewButton;

    void setupUi(QDialog *GestionConfig)
    {
        if (GestionConfig->objectName().isEmpty())
            GestionConfig->setObjectName(QString::fromUtf8("GestionConfig"));
        GestionConfig->resize(800, 150);
        EditButton = new QPushButton(GestionConfig);
        EditButton->setObjectName(QString::fromUtf8("EditButton"));
        EditButton->setGeometry(QRect(320, 20, 250, 110));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        EditButton->setFont(font);
        EditButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        ReturnButton = new QPushButton(GestionConfig);
        ReturnButton->setObjectName(QString::fromUtf8("ReturnButton"));
        ReturnButton->setGeometry(QRect(650, 20, 120, 110));
        ReturnButton->setFont(font);
        ReturnButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        NewButton = new QPushButton(GestionConfig);
        NewButton->setObjectName(QString::fromUtf8("NewButton"));
        NewButton->setGeometry(QRect(30, 20, 250, 110));
        NewButton->setFont(font);
        NewButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));

        retranslateUi(GestionConfig);

        QMetaObject::connectSlotsByName(GestionConfig);
    } // setupUi

    void retranslateUi(QDialog *GestionConfig)
    {
        GestionConfig->setWindowTitle(QApplication::translate("GestionConfig", "Dialog", 0, QApplication::UnicodeUTF8));
        EditButton->setText(QApplication::translate("GestionConfig", "EDIT CONFIGURATION", 0, QApplication::UnicodeUTF8));
        ReturnButton->setText(QApplication::translate("GestionConfig", "Return", 0, QApplication::UnicodeUTF8));
        NewButton->setText(QApplication::translate("GestionConfig", "NEW CONFIGURATION", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GestionConfig: public Ui_GestionConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONCONFIG_H
