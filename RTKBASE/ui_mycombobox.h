/********************************************************************************
** Form generated from reading UI file 'mycombobox.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCOMBOBOX_H
#define UI_MYCOMBOBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyComboBox
{
public:

    void setupUi(QWidget *MyComboBox)
    {
        if (MyComboBox->objectName().isEmpty())
            MyComboBox->setObjectName(QString::fromUtf8("MyComboBox"));
        MyComboBox->resize(400, 300);

        retranslateUi(MyComboBox);

        QMetaObject::connectSlotsByName(MyComboBox);
    } // setupUi

    void retranslateUi(QWidget *MyComboBox)
    {
        MyComboBox->setWindowTitle(QApplication::translate("MyComboBox", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyComboBox: public Ui_MyComboBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCOMBOBOX_H
