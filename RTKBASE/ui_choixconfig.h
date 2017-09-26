/********************************************************************************
** Form generated from reading UI file 'choixconfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOIXCONFIG_H
#define UI_CHOIXCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChoixConfig
{
public:
    QTabWidget *tabWidget;
    QWidget *Default_tab;
    QPushButton *SingleButton;
    QPushButton *DGPSButton;
    QPushButton *RTKButton;
    QPushButton *RTKButton_2;
    QPushButton *PPPButton;
    QPushButton *SBASButton;
    QWidget *Customized_tab;
    QPushButton *Custom3Button;
    QPushButton *Custom5Button;
    QPushButton *Custom6Button;
    QPushButton *Custom4Button;
    QPushButton *Custom2Button;
    QPushButton *Custom9Button;
    QPushButton *Custom11Button;
    QPushButton *Custom12Button;
    QPushButton *Custom10Button;
    QPushButton *Custom7Button;
    QPushButton *Custom8Button;
    QPushButton *Custom1Button;
    QPushButton *ReturnButton;
    QLineEdit *WindowTitleEdit;
    QPushButton *EditeButton;

    void setupUi(QDialog *ChoixConfig)
    {
        if (ChoixConfig->objectName().isEmpty())
            ChoixConfig->setObjectName(QString::fromUtf8("ChoixConfig"));
        ChoixConfig->resize(800, 480);
        tabWidget = new QTabWidget(ChoixConfig);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(5, 70, 790, 320));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        Default_tab = new QWidget();
        Default_tab->setObjectName(QString::fromUtf8("Default_tab"));
        SingleButton = new QPushButton(Default_tab);
        SingleButton->setObjectName(QString::fromUtf8("SingleButton"));
        SingleButton->setGeometry(QRect(10, 90, 120, 110));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        SingleButton->setFont(font);
        SingleButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        DGPSButton = new QPushButton(Default_tab);
        DGPSButton->setObjectName(QString::fromUtf8("DGPSButton"));
        DGPSButton->setGeometry(QRect(270, 90, 120, 110));
        DGPSButton->setFont(font);
        DGPSButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        RTKButton = new QPushButton(Default_tab);
        RTKButton->setObjectName(QString::fromUtf8("RTKButton"));
        RTKButton->setGeometry(QRect(530, 90, 120, 110));
        RTKButton->setFont(font);
        RTKButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        RTKButton_2 = new QPushButton(Default_tab);
        RTKButton_2->setObjectName(QString::fromUtf8("RTKButton_2"));
        RTKButton_2->setGeometry(QRect(660, 90, 120, 110));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        RTKButton_2->setFont(font1);
        RTKButton_2->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        PPPButton = new QPushButton(Default_tab);
        PPPButton->setObjectName(QString::fromUtf8("PPPButton"));
        PPPButton->setGeometry(QRect(400, 90, 120, 110));
        PPPButton->setFont(font);
        PPPButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        SBASButton = new QPushButton(Default_tab);
        SBASButton->setObjectName(QString::fromUtf8("SBASButton"));
        SBASButton->setGeometry(QRect(140, 90, 120, 110));
        SBASButton->setFont(font);
        SBASButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        tabWidget->addTab(Default_tab, QString());
        Customized_tab = new QWidget();
        Customized_tab->setObjectName(QString::fromUtf8("Customized_tab"));
        Custom3Button = new QPushButton(Customized_tab);
        Custom3Button->setObjectName(QString::fromUtf8("Custom3Button"));
        Custom3Button->setGeometry(QRect(270, 20, 120, 110));
        Custom3Button->setFont(font);
        Custom3Button->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        Custom5Button = new QPushButton(Customized_tab);
        Custom5Button->setObjectName(QString::fromUtf8("Custom5Button"));
        Custom5Button->setGeometry(QRect(530, 20, 120, 110));
        Custom5Button->setFont(font);
        Custom5Button->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        Custom6Button = new QPushButton(Customized_tab);
        Custom6Button->setObjectName(QString::fromUtf8("Custom6Button"));
        Custom6Button->setGeometry(QRect(660, 20, 120, 110));
        Custom6Button->setFont(font1);
        Custom6Button->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        Custom4Button = new QPushButton(Customized_tab);
        Custom4Button->setObjectName(QString::fromUtf8("Custom4Button"));
        Custom4Button->setGeometry(QRect(400, 20, 120, 110));
        Custom4Button->setFont(font);
        Custom4Button->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        Custom2Button = new QPushButton(Customized_tab);
        Custom2Button->setObjectName(QString::fromUtf8("Custom2Button"));
        Custom2Button->setGeometry(QRect(140, 20, 120, 110));
        Custom2Button->setFont(font);
        Custom2Button->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        Custom9Button = new QPushButton(Customized_tab);
        Custom9Button->setObjectName(QString::fromUtf8("Custom9Button"));
        Custom9Button->setGeometry(QRect(270, 160, 120, 110));
        Custom9Button->setFont(font);
        Custom9Button->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        Custom11Button = new QPushButton(Customized_tab);
        Custom11Button->setObjectName(QString::fromUtf8("Custom11Button"));
        Custom11Button->setGeometry(QRect(530, 160, 120, 110));
        Custom11Button->setFont(font);
        Custom11Button->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        Custom12Button = new QPushButton(Customized_tab);
        Custom12Button->setObjectName(QString::fromUtf8("Custom12Button"));
        Custom12Button->setGeometry(QRect(660, 160, 120, 110));
        Custom12Button->setFont(font1);
        Custom12Button->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        Custom10Button = new QPushButton(Customized_tab);
        Custom10Button->setObjectName(QString::fromUtf8("Custom10Button"));
        Custom10Button->setGeometry(QRect(400, 160, 120, 110));
        Custom10Button->setFont(font);
        Custom10Button->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        Custom7Button = new QPushButton(Customized_tab);
        Custom7Button->setObjectName(QString::fromUtf8("Custom7Button"));
        Custom7Button->setGeometry(QRect(10, 160, 120, 110));
        Custom7Button->setFont(font);
        Custom7Button->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        Custom8Button = new QPushButton(Customized_tab);
        Custom8Button->setObjectName(QString::fromUtf8("Custom8Button"));
        Custom8Button->setGeometry(QRect(140, 160, 120, 110));
        Custom8Button->setFont(font);
        Custom8Button->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        Custom1Button = new QPushButton(Customized_tab);
        Custom1Button->setObjectName(QString::fromUtf8("Custom1Button"));
        Custom1Button->setGeometry(QRect(10, 20, 120, 110));
        Custom1Button->setFont(font);
        Custom1Button->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        tabWidget->addTab(Customized_tab, QString());
        ReturnButton = new QPushButton(ChoixConfig);
        ReturnButton->setObjectName(QString::fromUtf8("ReturnButton"));
        ReturnButton->setGeometry(QRect(630, 410, 150, 50));
        ReturnButton->setFont(font);
        ReturnButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        WindowTitleEdit = new QLineEdit(ChoixConfig);
        WindowTitleEdit->setObjectName(QString::fromUtf8("WindowTitleEdit"));
        WindowTitleEdit->setGeometry(QRect(265, 10, 270, 40));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        WindowTitleEdit->setFont(font2);
        WindowTitleEdit->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
""));
        WindowTitleEdit->setAlignment(Qt::AlignCenter);
        WindowTitleEdit->setReadOnly(true);
        EditeButton = new QPushButton(ChoixConfig);
        EditeButton->setObjectName(QString::fromUtf8("EditeButton"));
        EditeButton->setGeometry(QRect(140, 410, 350, 50));
        EditeButton->setFont(font);
        EditeButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));

        retranslateUi(ChoixConfig);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ChoixConfig);
    } // setupUi

    void retranslateUi(QDialog *ChoixConfig)
    {
        ChoixConfig->setWindowTitle(QApplication::translate("ChoixConfig", "Dialog", 0, QApplication::UnicodeUTF8));
        SingleButton->setText(QApplication::translate("ChoixConfig", "SINGLE", 0, QApplication::UnicodeUTF8));
        DGPSButton->setText(QApplication::translate("ChoixConfig", "DGPS", 0, QApplication::UnicodeUTF8));
        RTKButton->setText(QApplication::translate("ChoixConfig", "RTK STATIC", 0, QApplication::UnicodeUTF8));
        RTKButton_2->setText(QApplication::translate("ChoixConfig", "RTK KINEMATIC", 0, QApplication::UnicodeUTF8));
        PPPButton->setText(QApplication::translate("ChoixConfig", "PPP STATIC", 0, QApplication::UnicodeUTF8));
        SBASButton->setText(QApplication::translate("ChoixConfig", "SBAS", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Default_tab), QApplication::translate("ChoixConfig", "DEFAULT CONFIGURATIONS", 0, QApplication::UnicodeUTF8));
        Custom3Button->setText(QApplication::translate("ChoixConfig", "CUSTOM 3", 0, QApplication::UnicodeUTF8));
        Custom5Button->setText(QApplication::translate("ChoixConfig", "CUSTOM 5", 0, QApplication::UnicodeUTF8));
        Custom6Button->setText(QApplication::translate("ChoixConfig", "CUSTOM 6", 0, QApplication::UnicodeUTF8));
        Custom4Button->setText(QApplication::translate("ChoixConfig", "CUSTOM 4", 0, QApplication::UnicodeUTF8));
        Custom2Button->setText(QApplication::translate("ChoixConfig", "CUSTOM  2", 0, QApplication::UnicodeUTF8));
        Custom9Button->setText(QApplication::translate("ChoixConfig", "CUSTOM 9", 0, QApplication::UnicodeUTF8));
        Custom11Button->setText(QApplication::translate("ChoixConfig", "CUSTOM 11", 0, QApplication::UnicodeUTF8));
        Custom12Button->setText(QApplication::translate("ChoixConfig", "CUSTOM 12", 0, QApplication::UnicodeUTF8));
        Custom10Button->setText(QApplication::translate("ChoixConfig", "CUSTOM 10", 0, QApplication::UnicodeUTF8));
        Custom7Button->setText(QApplication::translate("ChoixConfig", "CUSTOM 7", 0, QApplication::UnicodeUTF8));
        Custom8Button->setText(QApplication::translate("ChoixConfig", "CUSTOM 8", 0, QApplication::UnicodeUTF8));
        Custom1Button->setText(QApplication::translate("ChoixConfig", "CUSTOM  1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Customized_tab), QApplication::translate("ChoixConfig", "CUSTOMIZED CONFIGURATIONS", 0, QApplication::UnicodeUTF8));
        ReturnButton->setText(QApplication::translate("ChoixConfig", "RETURN", 0, QApplication::UnicodeUTF8));
        WindowTitleEdit->setText(QApplication::translate("ChoixConfig", "CONFIGURATION", 0, QApplication::UnicodeUTF8));
        EditeButton->setText(QApplication::translate("ChoixConfig", "CREATE/EDIT CONFIGURATION", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChoixConfig: public Ui_ChoixConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOIXCONFIG_H
