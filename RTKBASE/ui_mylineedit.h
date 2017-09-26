/********************************************************************************
** Form generated from reading UI file 'mylineedit.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYLINEEDIT_H
#define UI_MYLINEEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyLineEdit
{
public:

    void setupUi(QWidget *MyLineEdit)
    {
        if (MyLineEdit->objectName().isEmpty())
            MyLineEdit->setObjectName(QString::fromUtf8("MyLineEdit"));
        MyLineEdit->resize(400, 300);

        retranslateUi(MyLineEdit);

        QMetaObject::connectSlotsByName(MyLineEdit);
    } // setupUi

    void retranslateUi(QWidget *MyLineEdit)
    {
        MyLineEdit->setWindowTitle(QApplication::translate("MyLineEdit", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyLineEdit: public Ui_MyLineEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYLINEEDIT_H
