/********************************************************************************
** Form generated from reading UI file 'affichestr2str.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFFICHESTR2STR_H
#define UI_AFFICHESTR2STR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AfficheStr2str
{
public:
    QLineEdit *lineEdit;
    QPushButton *FermeStr2strpushButton;
    QLineEdit *Msg1lineEdit;
    QLineEdit *Msg2lineEdit;
    QLineEdit *Msg3lineEdit;
    QLineEdit *Msg4lineEdit;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *AfficheStr2str)
    {
        if (AfficheStr2str->objectName().isEmpty())
            AfficheStr2str->setObjectName(QString::fromUtf8("AfficheStr2str"));
        AfficheStr2str->setEnabled(true);
        AfficheStr2str->resize(800, 480);
        lineEdit = new QLineEdit(AfficheStr2str);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(250, 10, 271, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
""));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        FermeStr2strpushButton = new QPushButton(AfficheStr2str);
        FermeStr2strpushButton->setObjectName(QString::fromUtf8("FermeStr2strpushButton"));
        FermeStr2strpushButton->setEnabled(true);
        FermeStr2strpushButton->setGeometry(QRect(650, 330, 99, 91));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        FermeStr2strpushButton->setFont(font1);
        FermeStr2strpushButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        Msg1lineEdit = new QLineEdit(AfficheStr2str);
        Msg1lineEdit->setObjectName(QString::fromUtf8("Msg1lineEdit"));
        Msg1lineEdit->setGeometry(QRect(50, 110, 701, 27));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        Msg1lineEdit->setFont(font2);
        Msg2lineEdit = new QLineEdit(AfficheStr2str);
        Msg2lineEdit->setObjectName(QString::fromUtf8("Msg2lineEdit"));
        Msg2lineEdit->setGeometry(QRect(50, 150, 701, 27));
        Msg2lineEdit->setFont(font2);
        Msg3lineEdit = new QLineEdit(AfficheStr2str);
        Msg3lineEdit->setObjectName(QString::fromUtf8("Msg3lineEdit"));
        Msg3lineEdit->setGeometry(QRect(50, 190, 701, 27));
        Msg3lineEdit->setFont(font2);
        Msg4lineEdit = new QLineEdit(AfficheStr2str);
        Msg4lineEdit->setObjectName(QString::fromUtf8("Msg4lineEdit"));
        Msg4lineEdit->setGeometry(QRect(50, 70, 701, 27));
        Msg4lineEdit->setFont(font2);
        textBrowser = new QTextBrowser(AfficheStr2str);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(50, 230, 381, 241));
        textBrowser->setFont(font2);

        retranslateUi(AfficheStr2str);

        QMetaObject::connectSlotsByName(AfficheStr2str);
    } // setupUi

    void retranslateUi(QDialog *AfficheStr2str)
    {
        AfficheStr2str->setWindowTitle(QApplication::translate("AfficheStr2str", "Base Station Status", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("AfficheStr2str", "BASE STATION STATUS", 0, QApplication::UnicodeUTF8));
        FermeStr2strpushButton->setText(QApplication::translate("AfficheStr2str", "CLOSE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AfficheStr2str: public Ui_AfficheStr2str {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFICHESTR2STR_H
