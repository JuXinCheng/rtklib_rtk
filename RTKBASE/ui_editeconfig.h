/********************************************************************************
** Form generated from reading UI file 'editeconfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITECONFIG_H
#define UI_EDITECONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include <mylineedit.h>
#include "mycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_EditeConfig
{
public:
    QLineEdit *lineEdit;
    QTabWidget *tabWidget;
    QWidget *Setting1Tab;
    QComboBox *PosmodeBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *FrequencyBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *DynamicsBox;
    QLabel *label_6;
    QComboBox *TidecorrBox;
    QLabel *label_7;
    QComboBox *IonooptBox;
    QLabel *label_8;
    QComboBox *TropoptBox;
    QComboBox *SatephBox;
    QLabel *label_9;
    QCheckBox *Posopt1CheckBox;
    QCheckBox *Posopt2CheckBox;
    QCheckBox *Posopt3CheckBox;
    QCheckBox *Posopt4CheckBox;
    QCheckBox *Posopt5CheckBox;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QCheckBox *NavsysGPSCheckBox;
    QCheckBox *NavsysGLONASSCheckBox;
    QCheckBox *NavsysGalileoCheckBox;
    QCheckBox *NavsysSBASCheckBox;
    QCheckBox *NavsysBeiDouCheckBox;
    QCheckBox *NavsysQZSSCheckBox;
    MyComboBox *ElmaskBox;
    MyLineEdit *SnrmaskLine;
    MyLineEdit *ExclsatsLine;
    QWidget *Setting2Tab;
    QLabel *label_13;
    QComboBox *ArmodeBox;
    QComboBox *GloarmodeBox;
    QLabel *label_15;
    MyComboBox *ArthresBox;
    QLabel *label_16;
    QLabel *label_17;
    MyComboBox *ArlockcntBox;
    MyComboBox *ArelmaskBox;
    MyComboBox *ElmaskholdBox_3;
    QLabel *label_18;
    MyComboBox *ArminfixBox;
    QLabel *label_19;
    QLabel *label_44;
    QWidget *Setting3Tab;
    QLabel *label_41;
    MyComboBox *MaxageBox;
    MyComboBox *SlipthresBox;
    MyComboBox *AroutcntBox;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_45;
    MyComboBox *RejionnoBox;
    QLabel *label_46;
    MyComboBox *RejgdopBox;
    QLabel *label_23;
    MyComboBox *NiterBox;
    QLabel *label_47;
    MyLineEdit *BaselenLine;
    QLabel *label_48;
    MyLineEdit *BasesigLine;
    QWidget *InputTab;
    MyComboBox *Inpstr1formatBox;
    MyComboBox *Baudrate1Box;
    MyComboBox *SerialPort1Box;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QComboBox *Inpstrtype2Box;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    MyComboBox *Inpstr2formatBox;
    MyComboBox *Baudrate2Box;
    QLabel *label_56;
    MyComboBox *SerialPort2Box;
    QLabel *label_57;
    QLabel *label_59;
    MyLineEdit *Impstr2PathBox;
    QPushButton *Impstr2PathButton;
    QComboBox *Inpstrtype1Box;
    QLabel *label_100;
    MyLineEdit *Impstr2StreamBox;
    QLabel *label_101;
    QPushButton *Impstr2StreamButton;
    QLabel *label_102;
    QLabel *label_103;
    QLabel *label_104;
    QLabel *label_105;
    QLabel *label_106;
    QLabel *label_107;
    QLabel *label_108;
    MyLineEdit *Impstr3StreamBox;
    QComboBox *Inpstrtype3Box;
    MyComboBox *SerialPort3Box;
    MyComboBox *Baudrate3Box;
    MyComboBox *Inpstr3formatBox;
    MyLineEdit *Impstr3PathBox;
    QPushButton *Impstr3PathButton;
    QPushButton *Impstr3StreamButton;
    QWidget *tab;
    QComboBox *Outstr1typeBox;
    MyComboBox *OutstrformatBox;
    QLabel *label_72;
    MyLineEdit *Outstr1PathBox;
    QLabel *label_92;
    QLabel *label_93;
    QLabel *label_94;
    QLabel *label_95;
    QPushButton *Outstr1PathButton;
    MyComboBox *BaudrateOutBox;
    QLabel *label_96;
    MyComboBox *SerialPortOutBox;
    QComboBox *Logstr1typeBox;
    QLabel *label_97;
    MyLineEdit *Logstr1PathBox;
    QLabel *label_98;
    QPushButton *Logstr1PathButton;
    QLabel *label_99;
    QComboBox *OutstrtypeBox2;
    MyComboBox *SerialPortOutBox2;
    MyComboBox *BaudrateOutBox2;
    MyComboBox *OutstrformatBox2;
    MyLineEdit *Outstr1PathBox2;
    QPushButton *Outstr1PathButton_2;
    QLabel *label_109;
    QLabel *label_110;
    QLabel *label_111;
    QLabel *label_112;
    QLabel *label_113;
    QComboBox *Logstr1typeBox2;
    MyLineEdit *Logstr1PathBox2;
    QLabel *label_114;
    QLabel *label_115;
    QPushButton *Logstr1PathButton2;
    MyLineEdit *Logstr1PathBox3;
    QPushButton *Logstr1PathButton3;
    QComboBox *Logstr1typeBox3;
    QLabel *label_116;
    QLabel *label_117;
    QWidget *OutputTab;
    QLabel *label_14;
    QComboBox *SolformatBox;
    QLabel *label_58;
    QComboBox *OutheadBox;
    QLabel *label_60;
    QLabel *label_61;
    MyComboBox *TimendecBox;
    QComboBox *TimesysBox;
    QLabel *label_62;
    QLabel *label_63;
    QComboBox *DegformBox;
    MyLineEdit *FieldsepBox;
    QLabel *label_64;
    QLabel *label_65;
    QLabel *label_67;
    QLabel *label_68;
    QLabel *label_69;
    MyComboBox *GeoidBox;
    QComboBox *OutstatBox;
    QComboBox *HeightBox;
    MyLineEdit *Nmeaintv1Box;
    MyLineEdit *Nmeaintv2Box;
    QWidget *StatsTab;
    QLabel *label_20;
    QLabel *label_28;
    MyComboBox *PrnbiasBox;
    QLabel *label_29;
    MyComboBox *PrnionoBox;
    MyComboBox *PrnaccelvBox;
    QLabel *label_31;
    MyComboBox *PrnaccelhBox;
    MyComboBox *PrntropBox;
    QLabel *label_30;
    QLabel *label_34;
    QLabel *label_33;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    MyComboBox *Eratio2Box;
    QLabel *label_26;
    MyComboBox *ErrdopplerBox;
    MyComboBox *ErrphaseblBox;
    MyComboBox *Eratio1Box;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_22;
    QLabel *label_21;
    MyComboBox *ErrphaseBox;
    QLabel *label_27;
    MyComboBox *ErrphaseelBox;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *line_11;
    QFrame *line_12;
    QLabel *label_35;
    MyComboBox *ClckstabBox;
    QWidget *FilesTab;
    QLabel *label_32;
    MyLineEdit *SatantfileBox;
    QPushButton *SatantfileButton;
    MyLineEdit *RcvantfileBox;
    QLabel *label_36;
    QPushButton *RcvantfileButton;
    QLabel *label_37;
    MyLineEdit *GeoidfileBox;
    QPushButton *GeoidfileButton;
    QLabel *label_38;
    MyLineEdit *DcbfileBox;
    QPushButton *DcbfileButton;
    QLabel *label_39;
    MyLineEdit *EopfileBox;
    QPushButton *EopfileButton;
    QLabel *label_40;
    MyLineEdit *BlqfileBox;
    QPushButton *BlqfileButton;
    QLabel *label_66;
    MyLineEdit *TempdirBox;
    QPushButton *TempdirButton;
    QWidget *PositionsTab;
    QLabel *label_70;
    QFrame *line_13;
    QFrame *line_14;
    QFrame *line_15;
    QFrame *line_16;
    QFrame *line_17;
    QLabel *label_71;
    QFrame *line_18;
    QFrame *line_19;
    QFrame *line_20;
    QFrame *line_21;
    QFrame *line_22;
    QComboBox *RovpostypeBox;
    MyLineEdit *Rovpos1Box;
    MyLineEdit *Rovpos2Box;
    MyLineEdit *Rovpos3Box;
    QLabel *label_73;
    QLabel *label_74;
    QCheckBox *RovantCheckBox;
    MyComboBox *RovanttypeBox;
    QLabel *label_75;
    MyLineEdit *RovantdeleBox;
    QLabel *label_76;
    MyLineEdit *RovantdeluBox;
    MyLineEdit *RovantdelnBox;
    QLabel *label_77;
    MyLineEdit *BsantdeleBox;
    QLabel *label_78;
    MyLineEdit *BsantdeluBox;
    QLabel *label_79;
    QLabel *label_80;
    MyLineEdit *BsantdelnBox;
    MyLineEdit *Bspos1Box;
    QComboBox *BspostypeBox;
    QLabel *label_81;
    MyLineEdit *Bspos3Box;
    QLabel *label_82;
    MyLineEdit *Bspos2Box;
    MyComboBox *BsanttypeBox;
    QCheckBox *BsantCheckBox;
    QWidget *MiscTab;
    MyComboBox *SvrcycleBox;
    QLabel *label_83;
    MyComboBox *NmeacycleBox;
    QLabel *label_84;
    QLabel *label_85;
    MyComboBox *TimeoutBox;
    MyComboBox *ReconnectBox;
    QLabel *label_86;
    QLabel *label_87;
    MyComboBox *BuffsizeBox;
    MyComboBox *FswapmarginBox;
    QLabel *label_88;
    QComboBox *NavmsgselBox;
    QLabel *label_89;
    QLabel *label_90;
    MyLineEdit *ProxyadrBox;
    MyLineEdit *SbasatselBox;
    QLabel *label_91;
    QPushButton *ReturnButton;
    QPushButton *SaveButton;

    void setupUi(QDialog *EditeConfig)
    {
        if (EditeConfig->objectName().isEmpty())
            EditeConfig->setObjectName(QString::fromUtf8("EditeConfig"));
        EditeConfig->resize(800, 480);
        lineEdit = new QLineEdit(EditeConfig);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(265, 10, 270, 31));
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
        tabWidget = new QTabWidget(EditeConfig);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 780, 381));
        Setting1Tab = new QWidget();
        Setting1Tab->setObjectName(QString::fromUtf8("Setting1Tab"));
        PosmodeBox = new QComboBox(Setting1Tab);
        PosmodeBox->setObjectName(QString::fromUtf8("PosmodeBox"));
        PosmodeBox->setGeometry(QRect(230, 10, 131, 40));
        PosmodeBox->setEditable(false);
        PosmodeBox->setFrame(true);
        label = new QLabel(Setting1Tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 131, 40));
        label_2 = new QLabel(Setting1Tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(480, 10, 131, 40));
        FrequencyBox = new QComboBox(Setting1Tab);
        FrequencyBox->setObjectName(QString::fromUtf8("FrequencyBox"));
        FrequencyBox->setEnabled(true);
        FrequencyBox->setGeometry(QRect(630, 10, 131, 40));
        FrequencyBox->setFrame(true);
        label_3 = new QLabel(Setting1Tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 60, 141, 40));
        label_4 = new QLabel(Setting1Tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(480, 60, 141, 40));
        label_5 = new QLabel(Setting1Tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 110, 141, 40));
        DynamicsBox = new QComboBox(Setting1Tab);
        DynamicsBox->setObjectName(QString::fromUtf8("DynamicsBox"));
        DynamicsBox->setGeometry(QRect(230, 110, 131, 40));
        DynamicsBox->setFrame(true);
        label_6 = new QLabel(Setting1Tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(480, 110, 121, 40));
        TidecorrBox = new QComboBox(Setting1Tab);
        TidecorrBox->setObjectName(QString::fromUtf8("TidecorrBox"));
        TidecorrBox->setGeometry(QRect(630, 110, 131, 40));
        TidecorrBox->setFrame(true);
        label_7 = new QLabel(Setting1Tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 160, 161, 40));
        IonooptBox = new QComboBox(Setting1Tab);
        IonooptBox->setObjectName(QString::fromUtf8("IonooptBox"));
        IonooptBox->setGeometry(QRect(190, 160, 171, 40));
        IonooptBox->setFrame(true);
        label_8 = new QLabel(Setting1Tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(420, 160, 171, 40));
        TropoptBox = new QComboBox(Setting1Tab);
        TropoptBox->setObjectName(QString::fromUtf8("TropoptBox"));
        TropoptBox->setGeometry(QRect(590, 160, 171, 40));
        TropoptBox->setFrame(true);
        SatephBox = new QComboBox(Setting1Tab);
        SatephBox->setObjectName(QString::fromUtf8("SatephBox"));
        SatephBox->setGeometry(QRect(195, 210, 165, 40));
        SatephBox->setFrame(true);
        label_9 = new QLabel(Setting1Tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 210, 181, 40));
        Posopt1CheckBox = new QCheckBox(Setting1Tab);
        Posopt1CheckBox->setObjectName(QString::fromUtf8("Posopt1CheckBox"));
        Posopt1CheckBox->setGeometry(QRect(420, 205, 97, 30));
        Posopt2CheckBox = new QCheckBox(Setting1Tab);
        Posopt2CheckBox->setObjectName(QString::fromUtf8("Posopt2CheckBox"));
        Posopt2CheckBox->setGeometry(QRect(540, 205, 91, 30));
        Posopt3CheckBox = new QCheckBox(Setting1Tab);
        Posopt3CheckBox->setObjectName(QString::fromUtf8("Posopt3CheckBox"));
        Posopt3CheckBox->setGeometry(QRect(660, 205, 101, 30));
        Posopt4CheckBox = new QCheckBox(Setting1Tab);
        Posopt4CheckBox->setObjectName(QString::fromUtf8("Posopt4CheckBox"));
        Posopt4CheckBox->setGeometry(QRect(460, 235, 97, 30));
        Posopt4CheckBox->setCheckable(true);
        Posopt4CheckBox->setChecked(false);
        Posopt5CheckBox = new QCheckBox(Setting1Tab);
        Posopt5CheckBox->setObjectName(QString::fromUtf8("Posopt5CheckBox"));
        Posopt5CheckBox->setGeometry(QRect(610, 235, 97, 30));
        label_10 = new QLabel(Setting1Tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 260, 141, 20));
        label_11 = new QLabel(Setting1Tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 280, 141, 20));
        label_12 = new QLabel(Setting1Tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(400, 280, 131, 40));
        NavsysGPSCheckBox = new QCheckBox(Setting1Tab);
        NavsysGPSCheckBox->setObjectName(QString::fromUtf8("NavsysGPSCheckBox"));
        NavsysGPSCheckBox->setGeometry(QRect(540, 275, 61, 20));
        NavsysGLONASSCheckBox = new QCheckBox(Setting1Tab);
        NavsysGLONASSCheckBox->setObjectName(QString::fromUtf8("NavsysGLONASSCheckBox"));
        NavsysGLONASSCheckBox->setGeometry(QRect(600, 275, 97, 20));
        NavsysGalileoCheckBox = new QCheckBox(Setting1Tab);
        NavsysGalileoCheckBox->setObjectName(QString::fromUtf8("NavsysGalileoCheckBox"));
        NavsysGalileoCheckBox->setGeometry(QRect(700, 275, 81, 20));
        NavsysSBASCheckBox = new QCheckBox(Setting1Tab);
        NavsysSBASCheckBox->setObjectName(QString::fromUtf8("NavsysSBASCheckBox"));
        NavsysSBASCheckBox->setGeometry(QRect(610, 305, 61, 20));
        NavsysBeiDouCheckBox = new QCheckBox(Setting1Tab);
        NavsysBeiDouCheckBox->setObjectName(QString::fromUtf8("NavsysBeiDouCheckBox"));
        NavsysBeiDouCheckBox->setGeometry(QRect(680, 305, 81, 20));
        NavsysQZSSCheckBox = new QCheckBox(Setting1Tab);
        NavsysQZSSCheckBox->setObjectName(QString::fromUtf8("NavsysQZSSCheckBox"));
        NavsysQZSSCheckBox->setGeometry(QRect(540, 305, 61, 20));
        ElmaskBox = new MyComboBox(Setting1Tab);
        ElmaskBox->setObjectName(QString::fromUtf8("ElmaskBox"));
        ElmaskBox->setGeometry(QRect(230, 60, 131, 40));
        ElmaskBox->setEditable(true);
        ElmaskBox->setFrame(true);
        SnrmaskLine = new MyLineEdit(Setting1Tab);
        SnrmaskLine->setObjectName(QString::fromUtf8("SnrmaskLine"));
        SnrmaskLine->setGeometry(QRect(630, 60, 131, 41));
        ExclsatsLine = new MyLineEdit(Setting1Tab);
        ExclsatsLine->setObjectName(QString::fromUtf8("ExclsatsLine"));
        ExclsatsLine->setGeometry(QRect(160, 260, 201, 41));
        tabWidget->addTab(Setting1Tab, QString());
        Setting2Tab = new QWidget();
        Setting2Tab->setObjectName(QString::fromUtf8("Setting2Tab"));
        label_13 = new QLabel(Setting2Tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 20, 321, 40));
        ArmodeBox = new QComboBox(Setting2Tab);
        ArmodeBox->setObjectName(QString::fromUtf8("ArmodeBox"));
        ArmodeBox->setGeometry(QRect(350, 20, 221, 40));
        ArmodeBox->setEditable(false);
        ArmodeBox->setFrame(true);
        GloarmodeBox = new QComboBox(Setting2Tab);
        GloarmodeBox->setObjectName(QString::fromUtf8("GloarmodeBox"));
        GloarmodeBox->setGeometry(QRect(350, 80, 221, 40));
        GloarmodeBox->setEditable(false);
        GloarmodeBox->setFrame(true);
        label_15 = new QLabel(Setting2Tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 140, 191, 40));
        ArthresBox = new MyComboBox(Setting2Tab);
        ArthresBox->setObjectName(QString::fromUtf8("ArthresBox"));
        ArthresBox->setGeometry(QRect(230, 140, 91, 40));
        ArthresBox->setEditable(true);
        ArthresBox->setFrame(true);
        label_16 = new QLabel(Setting2Tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(20, 200, 191, 40));
        label_17 = new QLabel(Setting2Tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(410, 200, 231, 40));
        ArlockcntBox = new MyComboBox(Setting2Tab);
        ArlockcntBox->setObjectName(QString::fromUtf8("ArlockcntBox"));
        ArlockcntBox->setGeometry(QRect(230, 200, 91, 40));
        ArlockcntBox->setEditable(true);
        ArlockcntBox->setFrame(true);
        ArelmaskBox = new MyComboBox(Setting2Tab);
        ArelmaskBox->setObjectName(QString::fromUtf8("ArelmaskBox"));
        ArelmaskBox->setGeometry(QRect(670, 200, 91, 40));
        ArelmaskBox->setEditable(true);
        ArelmaskBox->setFrame(true);
        ElmaskholdBox_3 = new MyComboBox(Setting2Tab);
        ElmaskholdBox_3->setObjectName(QString::fromUtf8("ElmaskholdBox_3"));
        ElmaskholdBox_3->setGeometry(QRect(670, 260, 91, 40));
        ElmaskholdBox_3->setEditable(true);
        ElmaskholdBox_3->setFrame(true);
        label_18 = new QLabel(Setting2Tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(410, 260, 241, 40));
        ArminfixBox = new MyComboBox(Setting2Tab);
        ArminfixBox->setObjectName(QString::fromUtf8("ArminfixBox"));
        ArminfixBox->setGeometry(QRect(230, 260, 91, 40));
        ArminfixBox->setEditable(true);
        ArminfixBox->setFrame(true);
        label_19 = new QLabel(Setting2Tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(20, 260, 191, 40));
        label_44 = new QLabel(Setting2Tab);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(20, 80, 321, 40));
        tabWidget->addTab(Setting2Tab, QString());
        Setting3Tab = new QWidget();
        Setting3Tab->setObjectName(QString::fromUtf8("Setting3Tab"));
        label_41 = new QLabel(Setting3Tab);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(20, 80, 191, 40));
        MaxageBox = new MyComboBox(Setting3Tab);
        MaxageBox->setObjectName(QString::fromUtf8("MaxageBox"));
        MaxageBox->setGeometry(QRect(240, 80, 141, 40));
        MaxageBox->setEditable(true);
        MaxageBox->setFrame(true);
        SlipthresBox = new MyComboBox(Setting3Tab);
        SlipthresBox->setObjectName(QString::fromUtf8("SlipthresBox"));
        SlipthresBox->setGeometry(QRect(670, 20, 91, 40));
        SlipthresBox->setEditable(true);
        SlipthresBox->setFrame(true);
        AroutcntBox = new MyComboBox(Setting3Tab);
        AroutcntBox->setObjectName(QString::fromUtf8("AroutcntBox"));
        AroutcntBox->setGeometry(QRect(240, 20, 91, 40));
        AroutcntBox->setEditable(true);
        AroutcntBox->setFrame(true);
        label_42 = new QLabel(Setting3Tab);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(410, 20, 241, 40));
        label_43 = new QLabel(Setting3Tab);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(20, 20, 191, 40));
        label_45 = new QLabel(Setting3Tab);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(20, 140, 201, 40));
        RejionnoBox = new MyComboBox(Setting3Tab);
        RejionnoBox->setObjectName(QString::fromUtf8("RejionnoBox"));
        RejionnoBox->setGeometry(QRect(670, 140, 91, 40));
        RejionnoBox->setEditable(true);
        RejionnoBox->setFrame(true);
        label_46 = new QLabel(Setting3Tab);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(410, 140, 241, 40));
        RejgdopBox = new MyComboBox(Setting3Tab);
        RejgdopBox->setObjectName(QString::fromUtf8("RejgdopBox"));
        RejgdopBox->setGeometry(QRect(240, 140, 91, 40));
        RejgdopBox->setEditable(true);
        RejgdopBox->setFrame(true);
        label_23 = new QLabel(Setting3Tab);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(20, 200, 231, 40));
        NiterBox = new MyComboBox(Setting3Tab);
        NiterBox->setObjectName(QString::fromUtf8("NiterBox"));
        NiterBox->setGeometry(QRect(240, 200, 91, 40));
        NiterBox->setEditable(true);
        NiterBox->setFrame(true);
        label_47 = new QLabel(Setting3Tab);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(20, 260, 301, 40));
        BaselenLine = new MyLineEdit(Setting3Tab);
        BaselenLine->setObjectName(QString::fromUtf8("BaselenLine"));
        BaselenLine->setGeometry(QRect(350, 260, 131, 41));
        label_48 = new QLabel(Setting3Tab);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(513, 260, 16, 40));
        BasesigLine = new MyLineEdit(Setting3Tab);
        BasesigLine->setObjectName(QString::fromUtf8("BasesigLine"));
        BasesigLine->setGeometry(QRect(550, 260, 131, 41));
        tabWidget->addTab(Setting3Tab, QString());
        InputTab = new QWidget();
        InputTab->setObjectName(QString::fromUtf8("InputTab"));
        Inpstr1formatBox = new MyComboBox(InputTab);
        Inpstr1formatBox->setObjectName(QString::fromUtf8("Inpstr1formatBox"));
        Inpstr1formatBox->setGeometry(QRect(650, 30, 81, 31));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        Inpstr1formatBox->setFont(font1);
        Inpstr1formatBox->setEditable(true);
        Baudrate1Box = new MyComboBox(InputTab);
        Baudrate1Box->setObjectName(QString::fromUtf8("Baudrate1Box"));
        Baudrate1Box->setGeometry(QRect(470, 30, 101, 31));
        Baudrate1Box->setFont(font1);
        Baudrate1Box->setEditable(true);
        SerialPort1Box = new MyComboBox(InputTab);
        SerialPort1Box->setObjectName(QString::fromUtf8("SerialPort1Box"));
        SerialPort1Box->setGeometry(QRect(270, 30, 121, 31));
        SerialPort1Box->setFont(font1);
        SerialPort1Box->setEditable(true);
        label_49 = new QLabel(InputTab);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(30, 0, 131, 31));
        label_49->setFont(font1);
        label_50 = new QLabel(InputTab);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(190, 30, 81, 31));
        label_51 = new QLabel(InputTab);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(420, 30, 51, 31));
        label_52 = new QLabel(InputTab);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(590, 30, 61, 31));
        Inpstrtype2Box = new QComboBox(InputTab);
        Inpstrtype2Box->setObjectName(QString::fromUtf8("Inpstrtype2Box"));
        Inpstrtype2Box->setGeometry(QRect(80, 90, 101, 31));
        Inpstrtype2Box->setFont(font1);
        Inpstrtype2Box->setEditable(false);
        label_53 = new QLabel(InputTab);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(40, 90, 41, 31));
        label_54 = new QLabel(InputTab);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(30, 60, 131, 31));
        label_54->setFont(font1);
        label_55 = new QLabel(InputTab);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(420, 90, 51, 31));
        Inpstr2formatBox = new MyComboBox(InputTab);
        Inpstr2formatBox->setObjectName(QString::fromUtf8("Inpstr2formatBox"));
        Inpstr2formatBox->setGeometry(QRect(650, 90, 91, 31));
        Inpstr2formatBox->setFont(font1);
        Inpstr2formatBox->setEditable(true);
        Baudrate2Box = new MyComboBox(InputTab);
        Baudrate2Box->setObjectName(QString::fromUtf8("Baudrate2Box"));
        Baudrate2Box->setGeometry(QRect(480, 90, 91, 31));
        Baudrate2Box->setFont(font1);
        Baudrate2Box->setEditable(true);
        label_56 = new QLabel(InputTab);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(590, 90, 61, 31));
        SerialPort2Box = new MyComboBox(InputTab);
        SerialPort2Box->setObjectName(QString::fromUtf8("SerialPort2Box"));
        SerialPort2Box->setGeometry(QRect(280, 90, 121, 31));
        SerialPort2Box->setFont(font1);
        SerialPort2Box->setEditable(true);
        label_57 = new QLabel(InputTab);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setGeometry(QRect(200, 90, 81, 31));
        label_59 = new QLabel(InputTab);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setGeometry(QRect(20, 130, 81, 31));
        Impstr2PathBox = new MyLineEdit(InputTab);
        Impstr2PathBox->setObjectName(QString::fromUtf8("Impstr2PathBox"));
        Impstr2PathBox->setGeometry(QRect(110, 130, 611, 31));
        Impstr2PathButton = new QPushButton(InputTab);
        Impstr2PathButton->setObjectName(QString::fromUtf8("Impstr2PathButton"));
        Impstr2PathButton->setGeometry(QRect(730, 130, 40, 31));
        Inpstrtype1Box = new QComboBox(InputTab);
        Inpstrtype1Box->setObjectName(QString::fromUtf8("Inpstrtype1Box"));
        Inpstrtype1Box->setGeometry(QRect(80, 30, 101, 31));
        Inpstrtype1Box->setFont(font1);
        Inpstrtype1Box->setEditable(false);
        label_100 = new QLabel(InputTab);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        label_100->setGeometry(QRect(30, 30, 41, 31));
        Impstr2StreamBox = new MyLineEdit(InputTab);
        Impstr2StreamBox->setObjectName(QString::fromUtf8("Impstr2StreamBox"));
        Impstr2StreamBox->setGeometry(QRect(110, 170, 611, 31));
        label_101 = new QLabel(InputTab);
        label_101->setObjectName(QString::fromUtf8("label_101"));
        label_101->setGeometry(QRect(20, 170, 91, 31));
        Impstr2StreamButton = new QPushButton(InputTab);
        Impstr2StreamButton->setObjectName(QString::fromUtf8("Impstr2StreamButton"));
        Impstr2StreamButton->setGeometry(QRect(730, 170, 40, 31));
        label_102 = new QLabel(InputTab);
        label_102->setObjectName(QString::fromUtf8("label_102"));
        label_102->setGeometry(QRect(30, 200, 131, 31));
        label_102->setFont(font1);
        label_103 = new QLabel(InputTab);
        label_103->setObjectName(QString::fromUtf8("label_103"));
        label_103->setGeometry(QRect(200, 230, 81, 31));
        label_104 = new QLabel(InputTab);
        label_104->setObjectName(QString::fromUtf8("label_104"));
        label_104->setGeometry(QRect(40, 230, 41, 31));
        label_105 = new QLabel(InputTab);
        label_105->setObjectName(QString::fromUtf8("label_105"));
        label_105->setGeometry(QRect(20, 310, 91, 31));
        label_106 = new QLabel(InputTab);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        label_106->setGeometry(QRect(420, 230, 51, 31));
        label_107 = new QLabel(InputTab);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setGeometry(QRect(590, 230, 61, 31));
        label_108 = new QLabel(InputTab);
        label_108->setObjectName(QString::fromUtf8("label_108"));
        label_108->setGeometry(QRect(20, 270, 81, 31));
        Impstr3StreamBox = new MyLineEdit(InputTab);
        Impstr3StreamBox->setObjectName(QString::fromUtf8("Impstr3StreamBox"));
        Impstr3StreamBox->setGeometry(QRect(110, 310, 611, 31));
        Inpstrtype3Box = new QComboBox(InputTab);
        Inpstrtype3Box->setObjectName(QString::fromUtf8("Inpstrtype3Box"));
        Inpstrtype3Box->setGeometry(QRect(80, 230, 101, 31));
        Inpstrtype3Box->setFont(font1);
        Inpstrtype3Box->setEditable(false);
        SerialPort3Box = new MyComboBox(InputTab);
        SerialPort3Box->setObjectName(QString::fromUtf8("SerialPort3Box"));
        SerialPort3Box->setGeometry(QRect(280, 230, 121, 31));
        SerialPort3Box->setFont(font1);
        SerialPort3Box->setEditable(true);
        Baudrate3Box = new MyComboBox(InputTab);
        Baudrate3Box->setObjectName(QString::fromUtf8("Baudrate3Box"));
        Baudrate3Box->setGeometry(QRect(470, 230, 101, 31));
        Baudrate3Box->setFont(font1);
        Baudrate3Box->setEditable(true);
        Inpstr3formatBox = new MyComboBox(InputTab);
        Inpstr3formatBox->setObjectName(QString::fromUtf8("Inpstr3formatBox"));
        Inpstr3formatBox->setGeometry(QRect(650, 230, 81, 31));
        Inpstr3formatBox->setFont(font1);
        Inpstr3formatBox->setEditable(true);
        Impstr3PathBox = new MyLineEdit(InputTab);
        Impstr3PathBox->setObjectName(QString::fromUtf8("Impstr3PathBox"));
        Impstr3PathBox->setGeometry(QRect(110, 270, 611, 31));
        Impstr3PathButton = new QPushButton(InputTab);
        Impstr3PathButton->setObjectName(QString::fromUtf8("Impstr3PathButton"));
        Impstr3PathButton->setGeometry(QRect(730, 270, 40, 31));
        Impstr3StreamButton = new QPushButton(InputTab);
        Impstr3StreamButton->setObjectName(QString::fromUtf8("Impstr3StreamButton"));
        Impstr3StreamButton->setGeometry(QRect(730, 310, 40, 31));
        tabWidget->addTab(InputTab, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        Outstr1typeBox = new QComboBox(tab);
        Outstr1typeBox->setObjectName(QString::fromUtf8("Outstr1typeBox"));
        Outstr1typeBox->setGeometry(QRect(100, 30, 91, 31));
        Outstr1typeBox->setFont(font1);
        Outstr1typeBox->setEditable(false);
        OutstrformatBox = new MyComboBox(tab);
        OutstrformatBox->setObjectName(QString::fromUtf8("OutstrformatBox"));
        OutstrformatBox->setGeometry(QRect(650, 30, 81, 31));
        OutstrformatBox->setFont(font1);
        OutstrformatBox->setEditable(true);
        label_72 = new QLabel(tab);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        label_72->setGeometry(QRect(430, 29, 51, 31));
        Outstr1PathBox = new MyLineEdit(tab);
        Outstr1PathBox->setObjectName(QString::fromUtf8("Outstr1PathBox"));
        Outstr1PathBox->setGeometry(QRect(110, 70, 601, 31));
        label_92 = new QLabel(tab);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setGeometry(QRect(40, 70, 71, 31));
        label_93 = new QLabel(tab);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        label_93->setGeometry(QRect(290, 0, 141, 31));
        label_93->setFont(font1);
        label_94 = new QLabel(tab);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        label_94->setGeometry(QRect(220, 29, 81, 31));
        label_95 = new QLabel(tab);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        label_95->setGeometry(QRect(590, 29, 61, 31));
        Outstr1PathButton = new QPushButton(tab);
        Outstr1PathButton->setObjectName(QString::fromUtf8("Outstr1PathButton"));
        Outstr1PathButton->setGeometry(QRect(720, 70, 40, 31));
        BaudrateOutBox = new MyComboBox(tab);
        BaudrateOutBox->setObjectName(QString::fromUtf8("BaudrateOutBox"));
        BaudrateOutBox->setGeometry(QRect(480, 30, 91, 31));
        BaudrateOutBox->setFont(font1);
        BaudrateOutBox->setEditable(true);
        label_96 = new QLabel(tab);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        label_96->setGeometry(QRect(20, 39, 71, 31));
        SerialPortOutBox = new MyComboBox(tab);
        SerialPortOutBox->setObjectName(QString::fromUtf8("SerialPortOutBox"));
        SerialPortOutBox->setGeometry(QRect(300, 30, 111, 31));
        SerialPortOutBox->setFont(font1);
        SerialPortOutBox->setEditable(true);
        Logstr1typeBox = new QComboBox(tab);
        Logstr1typeBox->setObjectName(QString::fromUtf8("Logstr1typeBox"));
        Logstr1typeBox->setGeometry(QRect(110, 230, 81, 31));
        Logstr1typeBox->setFont(font1);
        Logstr1typeBox->setEditable(false);
        label_97 = new QLabel(tab);
        label_97->setObjectName(QString::fromUtf8("label_97"));
        label_97->setGeometry(QRect(210, 230, 61, 31));
        Logstr1PathBox = new MyLineEdit(tab);
        Logstr1PathBox->setObjectName(QString::fromUtf8("Logstr1PathBox"));
        Logstr1PathBox->setGeometry(QRect(280, 230, 441, 31));
        label_98 = new QLabel(tab);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        label_98->setGeometry(QRect(290, 190, 111, 40));
        label_98->setFont(font1);
        Logstr1PathButton = new QPushButton(tab);
        Logstr1PathButton->setObjectName(QString::fromUtf8("Logstr1PathButton"));
        Logstr1PathButton->setGeometry(QRect(730, 230, 40, 31));
        label_99 = new QLabel(tab);
        label_99->setObjectName(QString::fromUtf8("label_99"));
        label_99->setGeometry(QRect(10, 230, 91, 31));
        OutstrtypeBox2 = new QComboBox(tab);
        OutstrtypeBox2->setObjectName(QString::fromUtf8("OutstrtypeBox2"));
        OutstrtypeBox2->setGeometry(QRect(100, 119, 101, 31));
        OutstrtypeBox2->setFont(font1);
        OutstrtypeBox2->setEditable(false);
        SerialPortOutBox2 = new MyComboBox(tab);
        SerialPortOutBox2->setObjectName(QString::fromUtf8("SerialPortOutBox2"));
        SerialPortOutBox2->setGeometry(QRect(320, 119, 111, 31));
        SerialPortOutBox2->setFont(font1);
        SerialPortOutBox2->setEditable(true);
        BaudrateOutBox2 = new MyComboBox(tab);
        BaudrateOutBox2->setObjectName(QString::fromUtf8("BaudrateOutBox2"));
        BaudrateOutBox2->setGeometry(QRect(490, 119, 91, 31));
        BaudrateOutBox2->setFont(font1);
        BaudrateOutBox2->setEditable(true);
        OutstrformatBox2 = new MyComboBox(tab);
        OutstrformatBox2->setObjectName(QString::fromUtf8("OutstrformatBox2"));
        OutstrformatBox2->setGeometry(QRect(660, 120, 81, 31));
        OutstrformatBox2->setFont(font1);
        OutstrformatBox2->setEditable(true);
        Outstr1PathBox2 = new MyLineEdit(tab);
        Outstr1PathBox2->setObjectName(QString::fromUtf8("Outstr1PathBox2"));
        Outstr1PathBox2->setGeometry(QRect(120, 159, 601, 31));
        Outstr1PathButton_2 = new QPushButton(tab);
        Outstr1PathButton_2->setObjectName(QString::fromUtf8("Outstr1PathButton_2"));
        Outstr1PathButton_2->setGeometry(QRect(730, 159, 40, 31));
        label_109 = new QLabel(tab);
        label_109->setObjectName(QString::fromUtf8("label_109"));
        label_109->setGeometry(QRect(600, 119, 61, 31));
        label_110 = new QLabel(tab);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        label_110->setGeometry(QRect(20, 119, 71, 31));
        label_111 = new QLabel(tab);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setGeometry(QRect(50, 160, 71, 31));
        label_112 = new QLabel(tab);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setGeometry(QRect(440, 119, 51, 31));
        label_113 = new QLabel(tab);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        label_113->setGeometry(QRect(230, 119, 81, 31));
        Logstr1typeBox2 = new QComboBox(tab);
        Logstr1typeBox2->setObjectName(QString::fromUtf8("Logstr1typeBox2"));
        Logstr1typeBox2->setGeometry(QRect(110, 270, 81, 31));
        Logstr1typeBox2->setFont(font1);
        Logstr1typeBox2->setEditable(false);
        Logstr1PathBox2 = new MyLineEdit(tab);
        Logstr1PathBox2->setObjectName(QString::fromUtf8("Logstr1PathBox2"));
        Logstr1PathBox2->setGeometry(QRect(280, 270, 441, 31));
        label_114 = new QLabel(tab);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        label_114->setGeometry(QRect(10, 270, 101, 31));
        label_115 = new QLabel(tab);
        label_115->setObjectName(QString::fromUtf8("label_115"));
        label_115->setGeometry(QRect(210, 270, 61, 31));
        Logstr1PathButton2 = new QPushButton(tab);
        Logstr1PathButton2->setObjectName(QString::fromUtf8("Logstr1PathButton2"));
        Logstr1PathButton2->setGeometry(QRect(730, 270, 40, 31));
        Logstr1PathBox3 = new MyLineEdit(tab);
        Logstr1PathBox3->setObjectName(QString::fromUtf8("Logstr1PathBox3"));
        Logstr1PathBox3->setGeometry(QRect(280, 310, 441, 31));
        Logstr1PathButton3 = new QPushButton(tab);
        Logstr1PathButton3->setObjectName(QString::fromUtf8("Logstr1PathButton3"));
        Logstr1PathButton3->setGeometry(QRect(730, 310, 40, 31));
        Logstr1typeBox3 = new QComboBox(tab);
        Logstr1typeBox3->setObjectName(QString::fromUtf8("Logstr1typeBox3"));
        Logstr1typeBox3->setGeometry(QRect(110, 310, 81, 31));
        Logstr1typeBox3->setFont(font1);
        Logstr1typeBox3->setEditable(false);
        label_116 = new QLabel(tab);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        label_116->setGeometry(QRect(210, 310, 61, 31));
        label_117 = new QLabel(tab);
        label_117->setObjectName(QString::fromUtf8("label_117"));
        label_117->setGeometry(QRect(10, 310, 101, 31));
        tabWidget->addTab(tab, QString());
        OutputTab = new QWidget();
        OutputTab->setObjectName(QString::fromUtf8("OutputTab"));
        label_14 = new QLabel(OutputTab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 20, 131, 40));
        SolformatBox = new QComboBox(OutputTab);
        SolformatBox->setObjectName(QString::fromUtf8("SolformatBox"));
        SolformatBox->setGeometry(QRect(220, 20, 131, 40));
        SolformatBox->setEditable(false);
        SolformatBox->setFrame(true);
        label_58 = new QLabel(OutputTab);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setGeometry(QRect(10, 70, 131, 40));
        OutheadBox = new QComboBox(OutputTab);
        OutheadBox->setObjectName(QString::fromUtf8("OutheadBox"));
        OutheadBox->setGeometry(QRect(220, 70, 131, 40));
        OutheadBox->setEditable(false);
        OutheadBox->setFrame(true);
        label_60 = new QLabel(OutputTab);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setGeometry(QRect(10, 120, 131, 40));
        label_61 = new QLabel(OutputTab);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setEnabled(true);
        label_61->setGeometry(QRect(410, 120, 161, 40));
        TimendecBox = new MyComboBox(OutputTab);
        TimendecBox->setObjectName(QString::fromUtf8("TimendecBox"));
        TimendecBox->setEnabled(true);
        TimendecBox->setGeometry(QRect(620, 120, 131, 40));
        TimendecBox->setEditable(true);
        TimendecBox->setFrame(true);
        TimesysBox = new QComboBox(OutputTab);
        TimesysBox->setObjectName(QString::fromUtf8("TimesysBox"));
        TimesysBox->setGeometry(QRect(200, 120, 151, 40));
        TimesysBox->setEditable(false);
        TimesysBox->setFrame(true);
        label_62 = new QLabel(OutputTab);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setGeometry(QRect(10, 170, 131, 40));
        label_63 = new QLabel(OutputTab);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setEnabled(true);
        label_63->setGeometry(QRect(410, 170, 141, 40));
        DegformBox = new QComboBox(OutputTab);
        DegformBox->setObjectName(QString::fromUtf8("DegformBox"));
        DegformBox->setGeometry(QRect(220, 170, 131, 40));
        DegformBox->setEditable(false);
        DegformBox->setFrame(true);
        FieldsepBox = new MyLineEdit(OutputTab);
        FieldsepBox->setObjectName(QString::fromUtf8("FieldsepBox"));
        FieldsepBox->setGeometry(QRect(620, 170, 131, 41));
        label_64 = new QLabel(OutputTab);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setGeometry(QRect(10, 220, 131, 40));
        label_65 = new QLabel(OutputTab);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setEnabled(true);
        label_65->setGeometry(QRect(410, 270, 191, 40));
        label_67 = new QLabel(OutputTab);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setGeometry(QRect(410, 20, 161, 40));
        label_68 = new QLabel(OutputTab);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setGeometry(QRect(10, 270, 191, 40));
        label_69 = new QLabel(OutputTab);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setEnabled(true);
        label_69->setGeometry(QRect(410, 220, 141, 40));
        GeoidBox = new MyComboBox(OutputTab);
        GeoidBox->setObjectName(QString::fromUtf8("GeoidBox"));
        GeoidBox->setEnabled(true);
        GeoidBox->setGeometry(QRect(620, 220, 131, 40));
        GeoidBox->setEditable(true);
        GeoidBox->setFrame(true);
        OutstatBox = new QComboBox(OutputTab);
        OutstatBox->setObjectName(QString::fromUtf8("OutstatBox"));
        OutstatBox->setGeometry(QRect(620, 20, 131, 40));
        OutstatBox->setEditable(false);
        OutstatBox->setFrame(true);
        HeightBox = new QComboBox(OutputTab);
        HeightBox->setObjectName(QString::fromUtf8("HeightBox"));
        HeightBox->setGeometry(QRect(220, 220, 131, 40));
        HeightBox->setEditable(false);
        HeightBox->setFrame(true);
        Nmeaintv1Box = new MyLineEdit(OutputTab);
        Nmeaintv1Box->setObjectName(QString::fromUtf8("Nmeaintv1Box"));
        Nmeaintv1Box->setGeometry(QRect(220, 270, 131, 41));
        Nmeaintv2Box = new MyLineEdit(OutputTab);
        Nmeaintv2Box->setObjectName(QString::fromUtf8("Nmeaintv2Box"));
        Nmeaintv2Box->setGeometry(QRect(620, 270, 131, 41));
        tabWidget->addTab(OutputTab, QString());
        StatsTab = new QWidget();
        StatsTab->setObjectName(QString::fromUtf8("StatsTab"));
        label_20 = new QLabel(StatsTab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(30, -10, 221, 40));
        label_28 = new QLabel(StatsTab);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(30, 150, 241, 40));
        PrnbiasBox = new MyComboBox(StatsTab);
        PrnbiasBox->setObjectName(QString::fromUtf8("PrnbiasBox"));
        PrnbiasBox->setGeometry(QRect(260, 230, 121, 40));
        PrnbiasBox->setEditable(true);
        PrnbiasBox->setFrame(true);
        label_29 = new QLabel(StatsTab);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(20, 180, 241, 40));
        PrnionoBox = new MyComboBox(StatsTab);
        PrnionoBox->setObjectName(QString::fromUtf8("PrnionoBox"));
        PrnionoBox->setGeometry(QRect(300, 280, 81, 40));
        PrnionoBox->setEditable(true);
        PrnionoBox->setFrame(true);
        PrnaccelvBox = new MyComboBox(StatsTab);
        PrnaccelvBox->setObjectName(QString::fromUtf8("PrnaccelvBox"));
        PrnaccelvBox->setGeometry(QRect(640, 180, 121, 40));
        PrnaccelvBox->setEditable(true);
        PrnaccelvBox->setFrame(true);
        label_31 = new QLabel(StatsTab);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(20, 230, 231, 40));
        PrnaccelhBox = new MyComboBox(StatsTab);
        PrnaccelhBox->setObjectName(QString::fromUtf8("PrnaccelhBox"));
        PrnaccelhBox->setGeometry(QRect(260, 180, 121, 40));
        PrnaccelhBox->setEditable(true);
        PrnaccelhBox->setFrame(true);
        PrntropBox = new MyComboBox(StatsTab);
        PrntropBox->setObjectName(QString::fromUtf8("PrntropBox"));
        PrntropBox->setGeometry(QRect(640, 230, 121, 40));
        PrntropBox->setEditable(true);
        PrntropBox->setFrame(true);
        label_30 = new QLabel(StatsTab);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(400, 180, 241, 40));
        label_34 = new QLabel(StatsTab);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(400, 230, 231, 40));
        label_33 = new QLabel(StatsTab);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(20, 280, 271, 40));
        line = new QFrame(StatsTab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 160, 15, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(StatsTab);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 170, 20, 155));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(StatsTab);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 315, 380, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(StatsTab);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(270, 160, 500, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(StatsTab);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(380, 275, 20, 50));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(StatsTab);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(390, 265, 380, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(StatsTab);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(760, 170, 20, 105));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        Eratio2Box = new MyComboBox(StatsTab);
        Eratio2Box->setObjectName(QString::fromUtf8("Eratio2Box"));
        Eratio2Box->setGeometry(QRect(640, 20, 121, 40));
        Eratio2Box->setEditable(true);
        Eratio2Box->setFrame(true);
        label_26 = new QLabel(StatsTab);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(20, 120, 271, 40));
        ErrdopplerBox = new MyComboBox(StatsTab);
        ErrdopplerBox->setObjectName(QString::fromUtf8("ErrdopplerBox"));
        ErrdopplerBox->setGeometry(QRect(640, 120, 121, 40));
        ErrdopplerBox->setEditable(true);
        ErrdopplerBox->setFrame(true);
        ErrphaseblBox = new MyComboBox(StatsTab);
        ErrphaseblBox->setObjectName(QString::fromUtf8("ErrphaseblBox"));
        ErrphaseblBox->setGeometry(QRect(300, 120, 81, 40));
        ErrphaseblBox->setEditable(true);
        ErrphaseblBox->setFrame(true);
        Eratio1Box = new MyComboBox(StatsTab);
        Eratio1Box->setObjectName(QString::fromUtf8("Eratio1Box"));
        Eratio1Box->setGeometry(QRect(260, 20, 121, 40));
        Eratio1Box->setEditable(true);
        Eratio1Box->setFrame(true);
        label_24 = new QLabel(StatsTab);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(20, 70, 231, 40));
        label_25 = new QLabel(StatsTab);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(400, 70, 231, 40));
        label_22 = new QLabel(StatsTab);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(400, 20, 241, 40));
        label_21 = new QLabel(StatsTab);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 20, 241, 40));
        ErrphaseBox = new MyComboBox(StatsTab);
        ErrphaseBox->setObjectName(QString::fromUtf8("ErrphaseBox"));
        ErrphaseBox->setGeometry(QRect(260, 70, 121, 40));
        ErrphaseBox->setEditable(true);
        ErrphaseBox->setFrame(true);
        label_27 = new QLabel(StatsTab);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(400, 120, 231, 40));
        ErrphaseelBox = new MyComboBox(StatsTab);
        ErrphaseelBox->setObjectName(QString::fromUtf8("ErrphaseelBox"));
        ErrphaseelBox->setGeometry(QRect(640, 70, 121, 40));
        ErrphaseelBox->setEditable(true);
        ErrphaseelBox->setFrame(true);
        line_8 = new QFrame(StatsTab);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(0, 10, 20, 155));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(StatsTab);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(10, 0, 15, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(StatsTab);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(249, 0, 520, 20));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(StatsTab);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(760, 10, 20, 155));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_12 = new QFrame(StatsTab);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(10, 155, 760, 20));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        label_35 = new QLabel(StatsTab);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(400, 280, 231, 40));
        ClckstabBox = new MyComboBox(StatsTab);
        ClckstabBox->setObjectName(QString::fromUtf8("ClckstabBox"));
        ClckstabBox->setGeometry(QRect(640, 280, 121, 40));
        ClckstabBox->setEditable(true);
        ClckstabBox->setFrame(true);
        tabWidget->addTab(StatsTab, QString());
        label_20->raise();
        PrnbiasBox->raise();
        label_29->raise();
        PrnionoBox->raise();
        PrnaccelvBox->raise();
        label_31->raise();
        PrnaccelhBox->raise();
        PrntropBox->raise();
        label_30->raise();
        label_34->raise();
        label_33->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        line_5->raise();
        line_6->raise();
        line_7->raise();
        Eratio2Box->raise();
        label_26->raise();
        ErrdopplerBox->raise();
        ErrphaseblBox->raise();
        Eratio1Box->raise();
        label_24->raise();
        label_25->raise();
        label_22->raise();
        label_21->raise();
        ErrphaseBox->raise();
        label_27->raise();
        ErrphaseelBox->raise();
        line_8->raise();
        line_9->raise();
        line_10->raise();
        line_11->raise();
        line_12->raise();
        label_28->raise();
        label_35->raise();
        ClckstabBox->raise();
        FilesTab = new QWidget();
        FilesTab->setObjectName(QString::fromUtf8("FilesTab"));
        label_32 = new QLabel(FilesTab);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(10, 20, 240, 40));
        SatantfileBox = new MyLineEdit(FilesTab);
        SatantfileBox->setObjectName(QString::fromUtf8("SatantfileBox"));
        SatantfileBox->setGeometry(QRect(260, 20, 450, 40));
        SatantfileButton = new QPushButton(FilesTab);
        SatantfileButton->setObjectName(QString::fromUtf8("SatantfileButton"));
        SatantfileButton->setGeometry(QRect(720, 20, 40, 40));
        RcvantfileBox = new MyLineEdit(FilesTab);
        RcvantfileBox->setObjectName(QString::fromUtf8("RcvantfileBox"));
        RcvantfileBox->setGeometry(QRect(330, 70, 380, 40));
        label_36 = new QLabel(FilesTab);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(10, 70, 310, 40));
        RcvantfileButton = new QPushButton(FilesTab);
        RcvantfileButton->setObjectName(QString::fromUtf8("RcvantfileButton"));
        RcvantfileButton->setGeometry(QRect(720, 70, 40, 40));
        label_37 = new QLabel(FilesTab);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(10, 120, 110, 40));
        GeoidfileBox = new MyLineEdit(FilesTab);
        GeoidfileBox->setObjectName(QString::fromUtf8("GeoidfileBox"));
        GeoidfileBox->setGeometry(QRect(130, 120, 580, 40));
        GeoidfileButton = new QPushButton(FilesTab);
        GeoidfileButton->setObjectName(QString::fromUtf8("GeoidfileButton"));
        GeoidfileButton->setGeometry(QRect(720, 120, 40, 40));
        label_38 = new QLabel(FilesTab);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(10, 170, 100, 40));
        DcbfileBox = new MyLineEdit(FilesTab);
        DcbfileBox->setObjectName(QString::fromUtf8("DcbfileBox"));
        DcbfileBox->setGeometry(QRect(110, 170, 210, 41));
        DcbfileButton = new QPushButton(FilesTab);
        DcbfileButton->setObjectName(QString::fromUtf8("DcbfileButton"));
        DcbfileButton->setGeometry(QRect(330, 170, 40, 40));
        label_39 = new QLabel(FilesTab);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(400, 170, 100, 40));
        EopfileBox = new MyLineEdit(FilesTab);
        EopfileBox->setObjectName(QString::fromUtf8("EopfileBox"));
        EopfileBox->setGeometry(QRect(500, 170, 210, 40));
        EopfileButton = new QPushButton(FilesTab);
        EopfileButton->setObjectName(QString::fromUtf8("EopfileButton"));
        EopfileButton->setGeometry(QRect(720, 170, 40, 40));
        label_40 = new QLabel(FilesTab);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(10, 220, 190, 40));
        BlqfileBox = new MyLineEdit(FilesTab);
        BlqfileBox->setObjectName(QString::fromUtf8("BlqfileBox"));
        BlqfileBox->setGeometry(QRect(220, 220, 490, 40));
        BlqfileButton = new QPushButton(FilesTab);
        BlqfileButton->setObjectName(QString::fromUtf8("BlqfileButton"));
        BlqfileButton->setGeometry(QRect(720, 220, 40, 40));
        label_66 = new QLabel(FilesTab);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setGeometry(QRect(10, 270, 180, 40));
        TempdirBox = new MyLineEdit(FilesTab);
        TempdirBox->setObjectName(QString::fromUtf8("TempdirBox"));
        TempdirBox->setGeometry(QRect(210, 270, 500, 40));
        TempdirButton = new QPushButton(FilesTab);
        TempdirButton->setObjectName(QString::fromUtf8("TempdirButton"));
        TempdirButton->setGeometry(QRect(720, 270, 40, 40));
        tabWidget->addTab(FilesTab, QString());
        PositionsTab = new QWidget();
        PositionsTab->setObjectName(QString::fromUtf8("PositionsTab"));
        label_70 = new QLabel(PositionsTab);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setGeometry(QRect(30, -10, 221, 40));
        line_13 = new QFrame(PositionsTab);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(10, 155, 760, 20));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(PositionsTab);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(760, 10, 20, 155));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_15 = new QFrame(PositionsTab);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(78, 0, 691, 20));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        line_16 = new QFrame(PositionsTab);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(10, 0, 15, 20));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);
        line_17 = new QFrame(PositionsTab);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setGeometry(QRect(0, 10, 20, 155));
        line_17->setFrameShape(QFrame::VLine);
        line_17->setFrameShadow(QFrame::Sunken);
        label_71 = new QLabel(PositionsTab);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setGeometry(QRect(30, 150, 221, 40));
        line_18 = new QFrame(PositionsTab);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setGeometry(QRect(10, 315, 760, 20));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_19 = new QFrame(PositionsTab);
        line_19->setObjectName(QString::fromUtf8("line_19"));
        line_19->setGeometry(QRect(760, 170, 20, 155));
        line_19->setFrameShape(QFrame::VLine);
        line_19->setFrameShadow(QFrame::Sunken);
        line_20 = new QFrame(PositionsTab);
        line_20->setObjectName(QString::fromUtf8("line_20"));
        line_20->setGeometry(QRect(128, 160, 641, 20));
        line_20->setFrameShape(QFrame::HLine);
        line_20->setFrameShadow(QFrame::Sunken);
        line_21 = new QFrame(PositionsTab);
        line_21->setObjectName(QString::fromUtf8("line_21"));
        line_21->setGeometry(QRect(10, 160, 15, 20));
        line_21->setFrameShape(QFrame::HLine);
        line_21->setFrameShadow(QFrame::Sunken);
        line_22 = new QFrame(PositionsTab);
        line_22->setObjectName(QString::fromUtf8("line_22"));
        line_22->setGeometry(QRect(0, 170, 20, 155));
        line_22->setFrameShape(QFrame::VLine);
        line_22->setFrameShadow(QFrame::Sunken);
        RovpostypeBox = new QComboBox(PositionsTab);
        RovpostypeBox->setObjectName(QString::fromUtf8("RovpostypeBox"));
        RovpostypeBox->setGeometry(QRect(20, 20, 201, 40));
        RovpostypeBox->setEditable(false);
        RovpostypeBox->setFrame(true);
        Rovpos1Box = new MyLineEdit(PositionsTab);
        Rovpos1Box->setObjectName(QString::fromUtf8("Rovpos1Box"));
        Rovpos1Box->setGeometry(QRect(240, 20, 130, 40));
        Rovpos2Box = new MyLineEdit(PositionsTab);
        Rovpos2Box->setObjectName(QString::fromUtf8("Rovpos2Box"));
        Rovpos2Box->setGeometry(QRect(410, 20, 130, 40));
        Rovpos3Box = new MyLineEdit(PositionsTab);
        Rovpos3Box->setObjectName(QString::fromUtf8("Rovpos3Box"));
        Rovpos3Box->setGeometry(QRect(580, 20, 130, 40));
        label_73 = new QLabel(PositionsTab);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        label_73->setGeometry(QRect(388, 20, 16, 40));
        label_74 = new QLabel(PositionsTab);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setGeometry(QRect(558, 20, 16, 40));
        RovantCheckBox = new QCheckBox(PositionsTab);
        RovantCheckBox->setObjectName(QString::fromUtf8("RovantCheckBox"));
        RovantCheckBox->setGeometry(QRect(20, 70, 191, 41));
        RovanttypeBox = new MyComboBox(PositionsTab);
        RovanttypeBox->setObjectName(QString::fromUtf8("RovanttypeBox"));
        RovanttypeBox->setEnabled(false);
        RovanttypeBox->setGeometry(QRect(240, 70, 521, 40));
        RovanttypeBox->setEditable(true);
        RovanttypeBox->setFrame(true);
        label_75 = new QLabel(PositionsTab);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        label_75->setGeometry(QRect(388, 120, 16, 40));
        RovantdeleBox = new MyLineEdit(PositionsTab);
        RovantdeleBox->setObjectName(QString::fromUtf8("RovantdeleBox"));
        RovantdeleBox->setGeometry(QRect(240, 120, 130, 40));
        label_76 = new QLabel(PositionsTab);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setGeometry(QRect(558, 120, 16, 40));
        RovantdeluBox = new MyLineEdit(PositionsTab);
        RovantdeluBox->setObjectName(QString::fromUtf8("RovantdeluBox"));
        RovantdeluBox->setGeometry(QRect(580, 120, 130, 40));
        RovantdelnBox = new MyLineEdit(PositionsTab);
        RovantdelnBox->setObjectName(QString::fromUtf8("RovantdelnBox"));
        RovantdelnBox->setGeometry(QRect(410, 120, 130, 40));
        label_77 = new QLabel(PositionsTab);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setGeometry(QRect(20, 120, 240, 40));
        BsantdeleBox = new MyLineEdit(PositionsTab);
        BsantdeleBox->setObjectName(QString::fromUtf8("BsantdeleBox"));
        BsantdeleBox->setGeometry(QRect(240, 280, 130, 40));
        label_78 = new QLabel(PositionsTab);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setGeometry(QRect(20, 280, 240, 40));
        BsantdeluBox = new MyLineEdit(PositionsTab);
        BsantdeluBox->setObjectName(QString::fromUtf8("BsantdeluBox"));
        BsantdeluBox->setGeometry(QRect(580, 280, 130, 40));
        label_79 = new QLabel(PositionsTab);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setGeometry(QRect(388, 180, 16, 40));
        label_80 = new QLabel(PositionsTab);
        label_80->setObjectName(QString::fromUtf8("label_80"));
        label_80->setGeometry(QRect(558, 280, 16, 40));
        BsantdelnBox = new MyLineEdit(PositionsTab);
        BsantdelnBox->setObjectName(QString::fromUtf8("BsantdelnBox"));
        BsantdelnBox->setGeometry(QRect(410, 280, 130, 40));
        Bspos1Box = new MyLineEdit(PositionsTab);
        Bspos1Box->setObjectName(QString::fromUtf8("Bspos1Box"));
        Bspos1Box->setGeometry(QRect(240, 180, 130, 40));
        BspostypeBox = new QComboBox(PositionsTab);
        BspostypeBox->setObjectName(QString::fromUtf8("BspostypeBox"));
        BspostypeBox->setGeometry(QRect(20, 180, 201, 40));
        BspostypeBox->setEditable(false);
        BspostypeBox->setFrame(true);
        label_81 = new QLabel(PositionsTab);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        label_81->setGeometry(QRect(558, 180, 16, 40));
        Bspos3Box = new MyLineEdit(PositionsTab);
        Bspos3Box->setObjectName(QString::fromUtf8("Bspos3Box"));
        Bspos3Box->setGeometry(QRect(580, 180, 130, 40));
        label_82 = new QLabel(PositionsTab);
        label_82->setObjectName(QString::fromUtf8("label_82"));
        label_82->setGeometry(QRect(388, 280, 16, 40));
        Bspos2Box = new MyLineEdit(PositionsTab);
        Bspos2Box->setObjectName(QString::fromUtf8("Bspos2Box"));
        Bspos2Box->setGeometry(QRect(410, 180, 130, 40));
        BsanttypeBox = new MyComboBox(PositionsTab);
        BsanttypeBox->setObjectName(QString::fromUtf8("BsanttypeBox"));
        BsanttypeBox->setEnabled(false);
        BsanttypeBox->setGeometry(QRect(240, 230, 521, 40));
        BsanttypeBox->setEditable(true);
        BsanttypeBox->setFrame(true);
        BsantCheckBox = new QCheckBox(PositionsTab);
        BsantCheckBox->setObjectName(QString::fromUtf8("BsantCheckBox"));
        BsantCheckBox->setGeometry(QRect(20, 230, 191, 41));
        tabWidget->addTab(PositionsTab, QString());
        MiscTab = new QWidget();
        MiscTab->setObjectName(QString::fromUtf8("MiscTab"));
        SvrcycleBox = new MyComboBox(MiscTab);
        SvrcycleBox->setObjectName(QString::fromUtf8("SvrcycleBox"));
        SvrcycleBox->setGeometry(QRect(220, 30, 150, 40));
        SvrcycleBox->setEditable(true);
        SvrcycleBox->setFrame(true);
        label_83 = new QLabel(MiscTab);
        label_83->setObjectName(QString::fromUtf8("label_83"));
        label_83->setGeometry(QRect(20, 30, 190, 40));
        NmeacycleBox = new MyComboBox(MiscTab);
        NmeacycleBox->setObjectName(QString::fromUtf8("NmeacycleBox"));
        NmeacycleBox->setGeometry(QRect(220, 150, 150, 40));
        NmeacycleBox->setEditable(true);
        NmeacycleBox->setFrame(true);
        label_84 = new QLabel(MiscTab);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        label_84->setGeometry(QRect(20, 150, 190, 40));
        label_85 = new QLabel(MiscTab);
        label_85->setObjectName(QString::fromUtf8("label_85"));
        label_85->setGeometry(QRect(20, 90, 190, 40));
        TimeoutBox = new MyComboBox(MiscTab);
        TimeoutBox->setObjectName(QString::fromUtf8("TimeoutBox"));
        TimeoutBox->setGeometry(QRect(220, 90, 150, 40));
        TimeoutBox->setEditable(true);
        TimeoutBox->setFrame(true);
        ReconnectBox = new MyComboBox(MiscTab);
        ReconnectBox->setObjectName(QString::fromUtf8("ReconnectBox"));
        ReconnectBox->setGeometry(QRect(610, 90, 150, 40));
        ReconnectBox->setEditable(true);
        ReconnectBox->setFrame(true);
        label_86 = new QLabel(MiscTab);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setGeometry(QRect(410, 90, 190, 40));
        label_87 = new QLabel(MiscTab);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        label_87->setGeometry(QRect(410, 30, 201, 40));
        BuffsizeBox = new MyComboBox(MiscTab);
        BuffsizeBox->setObjectName(QString::fromUtf8("BuffsizeBox"));
        BuffsizeBox->setGeometry(QRect(610, 30, 150, 40));
        BuffsizeBox->setEditable(true);
        BuffsizeBox->setFrame(true);
        FswapmarginBox = new MyComboBox(MiscTab);
        FswapmarginBox->setObjectName(QString::fromUtf8("FswapmarginBox"));
        FswapmarginBox->setGeometry(QRect(610, 150, 150, 40));
        FswapmarginBox->setEditable(true);
        FswapmarginBox->setFrame(true);
        label_88 = new QLabel(MiscTab);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setGeometry(QRect(410, 150, 190, 40));
        NavmsgselBox = new QComboBox(MiscTab);
        NavmsgselBox->setObjectName(QString::fromUtf8("NavmsgselBox"));
        NavmsgselBox->setGeometry(QRect(240, 210, 131, 40));
        NavmsgselBox->setEditable(false);
        NavmsgselBox->setFrame(true);
        label_89 = new QLabel(MiscTab);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        label_89->setGeometry(QRect(20, 210, 211, 40));
        label_90 = new QLabel(MiscTab);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        label_90->setGeometry(QRect(410, 210, 131, 40));
        ProxyadrBox = new MyLineEdit(MiscTab);
        ProxyadrBox->setObjectName(QString::fromUtf8("ProxyadrBox"));
        ProxyadrBox->setGeometry(QRect(550, 210, 211, 41));
        SbasatselBox = new MyLineEdit(MiscTab);
        SbasatselBox->setObjectName(QString::fromUtf8("SbasatselBox"));
        SbasatselBox->setGeometry(QRect(270, 270, 491, 41));
        label_91 = new QLabel(MiscTab);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        label_91->setGeometry(QRect(20, 270, 221, 40));
        tabWidget->addTab(MiscTab, QString());
        ReturnButton = new QPushButton(EditeConfig);
        ReturnButton->setObjectName(QString::fromUtf8("ReturnButton"));
        ReturnButton->setGeometry(QRect(20, 439, 370, 31));
        ReturnButton->setFont(font1);
        ReturnButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        SaveButton = new QPushButton(EditeConfig);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setGeometry(QRect(410, 440, 370, 31));
        SaveButton->setFont(font1);
        SaveButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));

        retranslateUi(EditeConfig);

        tabWidget->setCurrentIndex(0);
        PosmodeBox->setCurrentIndex(0);
        FrequencyBox->setCurrentIndex(0);
        DynamicsBox->setCurrentIndex(0);
        TidecorrBox->setCurrentIndex(0);
        IonooptBox->setCurrentIndex(0);
        TropoptBox->setCurrentIndex(0);
        SatephBox->setCurrentIndex(0);
        ElmaskBox->setCurrentIndex(0);
        ArmodeBox->setCurrentIndex(0);
        GloarmodeBox->setCurrentIndex(0);
        ArthresBox->setCurrentIndex(2);
        ArlockcntBox->setCurrentIndex(0);
        ArelmaskBox->setCurrentIndex(0);
        ElmaskholdBox_3->setCurrentIndex(0);
        ArminfixBox->setCurrentIndex(1);
        MaxageBox->setCurrentIndex(2);
        SlipthresBox->setCurrentIndex(5);
        AroutcntBox->setCurrentIndex(0);
        RejionnoBox->setCurrentIndex(2);
        RejgdopBox->setCurrentIndex(2);
        NiterBox->setCurrentIndex(0);
        Inpstr2formatBox->setCurrentIndex(10);
        Baudrate2Box->setCurrentIndex(1);
        SerialPort2Box->setCurrentIndex(0);
        SerialPort3Box->setCurrentIndex(0);
        OutstrformatBox->setCurrentIndex(10);
        BaudrateOutBox->setCurrentIndex(1);
        SerialPortOutBox->setCurrentIndex(0);
        SerialPortOutBox2->setCurrentIndex(0);
        BaudrateOutBox2->setCurrentIndex(1);
        OutstrformatBox2->setCurrentIndex(10);
        SolformatBox->setCurrentIndex(0);
        OutheadBox->setCurrentIndex(0);
        TimendecBox->setCurrentIndex(3);
        TimesysBox->setCurrentIndex(0);
        DegformBox->setCurrentIndex(0);
        GeoidBox->setCurrentIndex(0);
        OutstatBox->setCurrentIndex(0);
        HeightBox->setCurrentIndex(0);
        PrnbiasBox->setCurrentIndex(2);
        PrnionoBox->setCurrentIndex(3);
        PrnaccelvBox->setCurrentIndex(1);
        PrnaccelhBox->setCurrentIndex(3);
        PrntropBox->setCurrentIndex(3);
        Eratio2Box->setCurrentIndex(1);
        ErrdopplerBox->setCurrentIndex(1);
        ErrphaseblBox->setCurrentIndex(0);
        Eratio1Box->setCurrentIndex(1);
        ErrphaseBox->setCurrentIndex(2);
        ErrphaseelBox->setCurrentIndex(0);
        ClckstabBox->setCurrentIndex(0);
        RovpostypeBox->setCurrentIndex(0);
        RovanttypeBox->setCurrentIndex(0);
        BspostypeBox->setCurrentIndex(0);
        BsanttypeBox->setCurrentIndex(0);
        SvrcycleBox->setCurrentIndex(1);
        NmeacycleBox->setCurrentIndex(2);
        TimeoutBox->setCurrentIndex(3);
        ReconnectBox->setCurrentIndex(2);
        BuffsizeBox->setCurrentIndex(0);
        FswapmarginBox->setCurrentIndex(4);
        NavmsgselBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EditeConfig);
    } // setupUi

    void retranslateUi(QDialog *EditeConfig)
    {
        EditeConfig->setWindowTitle(QApplication::translate("EditeConfig", "Dialog", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("EditeConfig", "EDIT CONFIGURATION", 0, QApplication::UnicodeUTF8));
        PosmodeBox->clear();
        PosmodeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "single", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "dgps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "kinematic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "static", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "movingbase", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ppp-kine", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ppp-static", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("EditeConfig", "Positionnig Mode", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EditeConfig", "Frequencies", 0, QApplication::UnicodeUTF8));
        FrequencyBox->clear();
        FrequencyBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "l1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "l1+l2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "l1+l2+l5", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("EditeConfig", "Elevation Mask (\302\260)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EditeConfig", "SNR Mask (dBHz)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("EditeConfig", "Rec Dynamics", 0, QApplication::UnicodeUTF8));
        DynamicsBox->clear();
        DynamicsBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "on", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("EditeConfig", "Tides Correction", 0, QApplication::UnicodeUTF8));
        TidecorrBox->clear();
        TidecorrBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "on", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("EditeConfig", "Ionosphere Correction", 0, QApplication::UnicodeUTF8));
        IonooptBox->clear();
        IonooptBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "brdc", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "sbas", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "dual-freq", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "est-stec", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("EditeConfig", "Troposphere Correction", 0, QApplication::UnicodeUTF8));
        TropoptBox->clear();
        TropoptBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "saas", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "sbas", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "est-ztd", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "est-ztdgrad", 0, QApplication::UnicodeUTF8)
        );
        SatephBox->clear();
        SatephBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "brdc", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "precise", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "brdc+sbas", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "brdc+ssrapc", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "brdc+ssrcom", 0, QApplication::UnicodeUTF8)
        );
        label_9->setText(QApplication::translate("EditeConfig", "Satellite Ephemeris/Clock", 0, QApplication::UnicodeUTF8));
        Posopt1CheckBox->setText(QApplication::translate("EditeConfig", "Sat PCV", 0, QApplication::UnicodeUTF8));
        Posopt2CheckBox->setText(QApplication::translate("EditeConfig", "Rec PCV", 0, QApplication::UnicodeUTF8));
        Posopt3CheckBox->setText(QApplication::translate("EditeConfig", "PhWindup", 0, QApplication::UnicodeUTF8));
        Posopt4CheckBox->setText(QApplication::translate("EditeConfig", "Reject ECL", 0, QApplication::UnicodeUTF8));
        Posopt5CheckBox->setText(QApplication::translate("EditeConfig", "Raim FDE", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("EditeConfig", "Excluded Satellites", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("EditeConfig", "(+PRN : Included)", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("EditeConfig", "Navigation System", 0, QApplication::UnicodeUTF8));
        NavsysGPSCheckBox->setText(QApplication::translate("EditeConfig", "GPS", 0, QApplication::UnicodeUTF8));
        NavsysGLONASSCheckBox->setText(QApplication::translate("EditeConfig", "GLONASS", 0, QApplication::UnicodeUTF8));
        NavsysGalileoCheckBox->setText(QApplication::translate("EditeConfig", "Galileo", 0, QApplication::UnicodeUTF8));
        NavsysSBASCheckBox->setText(QApplication::translate("EditeConfig", "SBAS", 0, QApplication::UnicodeUTF8));
        NavsysBeiDouCheckBox->setText(QApplication::translate("EditeConfig", "BeiDou", 0, QApplication::UnicodeUTF8));
        NavsysQZSSCheckBox->setText(QApplication::translate("EditeConfig", "QZSS", 0, QApplication::UnicodeUTF8));
        ElmaskBox->clear();
        ElmaskBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "25", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "35", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "40", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "45", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "55", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "60", 0, QApplication::UnicodeUTF8)
        );
        SnrmaskLine->setText(QApplication::translate("EditeConfig", "0", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Setting1Tab), QApplication::translate("EditeConfig", "Setting 1", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("EditeConfig", "Integer Ambiguity Resolution (GPS)", 0, QApplication::UnicodeUTF8));
        ArmodeBox->clear();
        ArmodeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "continuous", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "instantaneous", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "fix-and-hold", 0, QApplication::UnicodeUTF8)
        );
        GloarmodeBox->clear();
        GloarmodeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "on", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "autocal", 0, QApplication::UnicodeUTF8)
        );
        label_15->setText(QApplication::translate("EditeConfig", "Min Ratio to Fix Ambiguity", 0, QApplication::UnicodeUTF8));
        ArthresBox->clear();
        ArthresBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "1.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "2.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "3.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "4.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "5.0", 0, QApplication::UnicodeUTF8)
        );
        label_16->setText(QApplication::translate("EditeConfig", "Min Lock to Fix Ambiguity", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("EditeConfig", "Min Elevation (\302\260) to Fix Ambiguity", 0, QApplication::UnicodeUTF8));
        ArlockcntBox->clear();
        ArlockcntBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "1.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "2.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "3.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "4.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "5.0", 0, QApplication::UnicodeUTF8)
        );
        ArelmaskBox->clear();
        ArelmaskBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "1.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "2.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "3.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "4.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "5.0", 0, QApplication::UnicodeUTF8)
        );
        ElmaskholdBox_3->clear();
        ElmaskholdBox_3->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "1.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "2.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "3.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "4.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "5.0", 0, QApplication::UnicodeUTF8)
        );
        label_18->setText(QApplication::translate("EditeConfig", "Min Elevation (\302\260) to Hold Ambiguity", 0, QApplication::UnicodeUTF8));
        ArminfixBox->clear();
        ArminfixBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "5.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "10.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "15.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "20.0", 0, QApplication::UnicodeUTF8)
        );
        label_19->setText(QApplication::translate("EditeConfig", "Min Fix to Lock Ambiguity", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("EditeConfig", "Integer Ambiguity Resolution (GLONASS)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Setting2Tab), QApplication::translate("EditeConfig", "Setting 2", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("EditeConfig", "Max Age of Differential (s)", 0, QApplication::UnicodeUTF8));
        MaxageBox->clear();
        MaxageBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "40", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "60", 0, QApplication::UnicodeUTF8)
        );
        SlipthresBox->clear();
        SlipthresBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.01", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.02", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.02", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.03", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.04", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.05", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.06", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.07", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.08", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.09", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.20", 0, QApplication::UnicodeUTF8)
        );
        AroutcntBox->clear();
        AroutcntBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "5.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "10.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "15.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "20.0", 0, QApplication::UnicodeUTF8)
        );
        label_42->setText(QApplication::translate("EditeConfig", "Slip Threshold (m)", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("EditeConfig", "Outage to Reset Ambiguity", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("EditeConfig", "Reject Thresold of GDOP", 0, QApplication::UnicodeUTF8));
        RejionnoBox->clear();
        RejionnoBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "40", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "50", 0, QApplication::UnicodeUTF8)
        );
        label_46->setText(QApplication::translate("EditeConfig", "Reject Thresold of Innovation (m)", 0, QApplication::UnicodeUTF8));
        RejgdopBox->clear();
        RejgdopBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "40", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "50", 0, QApplication::UnicodeUTF8)
        );
        label_23->setText(QApplication::translate("EditeConfig", "Number of Iterations", 0, QApplication::UnicodeUTF8));
        NiterBox->clear();
        NiterBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "5", 0, QApplication::UnicodeUTF8)
        );
        label_47->setText(QApplication::translate("EditeConfig", "Baseline Length Constraint (length / std) (m)", 0, QApplication::UnicodeUTF8));
        BaselenLine->setText(QString());
        label_48->setText(QApplication::translate("EditeConfig", "/", 0, QApplication::UnicodeUTF8));
        BasesigLine->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Setting3Tab), QApplication::translate("EditeConfig", "Setting 3", 0, QApplication::UnicodeUTF8));
        Inpstr1formatBox->clear();
        Inpstr1formatBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ubx", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "nvs", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "oem3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "nov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ss2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "hemis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "stq", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "javad", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "binex", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rtcm2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rtcm3", 0, QApplication::UnicodeUTF8)
        );
        Baudrate1Box->clear();
        Baudrate1Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "115200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "9600", 0, QApplication::UnicodeUTF8)
        );
        SerialPort1Box->clear();
        SerialPort1Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ttyACM0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ttyAMA0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ttyUSB0", 0, QApplication::UnicodeUTF8)
        );
        label_49->setText(QApplication::translate("EditeConfig", "INPUT STREAM 1", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("EditeConfig", "Serial Port", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("EditeConfig", "Bauds", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("EditeConfig", "Format", 0, QApplication::UnicodeUTF8));
        Inpstrtype2Box->clear();
        Inpstrtype2Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "serial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "file", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ntripcli", 0, QApplication::UnicodeUTF8)
        );
        label_53->setText(QApplication::translate("EditeConfig", "Type", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("EditeConfig", "INPUT STREAM 2", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("EditeConfig", "Bauds", 0, QApplication::UnicodeUTF8));
        Inpstr2formatBox->clear();
        Inpstr2formatBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ubx", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "nvs", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "oem3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "nov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ss2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "hemis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "stq", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "javad", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "binex", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rtcm2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rtcm3", 0, QApplication::UnicodeUTF8)
        );
        Baudrate2Box->clear();
        Baudrate2Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "115200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "9600", 0, QApplication::UnicodeUTF8)
        );
        label_56->setText(QApplication::translate("EditeConfig", "Format", 0, QApplication::UnicodeUTF8));
        SerialPort2Box->clear();
        SerialPort2Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ttyACM0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ttyAMA0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ttyUSB0", 0, QApplication::UnicodeUTF8)
        );
        label_57->setText(QApplication::translate("EditeConfig", "Serial Port", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("EditeConfig", "File Path", 0, QApplication::UnicodeUTF8));
        Impstr2PathBox->setText(QString());
        Impstr2PathButton->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        Inpstrtype1Box->clear();
        Inpstrtype1Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "serial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "file", 0, QApplication::UnicodeUTF8)
        );
        label_100->setText(QApplication::translate("EditeConfig", "Type", 0, QApplication::UnicodeUTF8));
        Impstr2StreamBox->setText(QString());
        label_101->setText(QApplication::translate("EditeConfig", "Stream Path", 0, QApplication::UnicodeUTF8));
        Impstr2StreamButton->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        label_102->setText(QApplication::translate("EditeConfig", "INPUT STREAM 3", 0, QApplication::UnicodeUTF8));
        label_103->setText(QApplication::translate("EditeConfig", "Serial Port", 0, QApplication::UnicodeUTF8));
        label_104->setText(QApplication::translate("EditeConfig", "Type", 0, QApplication::UnicodeUTF8));
        label_105->setText(QApplication::translate("EditeConfig", "Stream Path", 0, QApplication::UnicodeUTF8));
        label_106->setText(QApplication::translate("EditeConfig", "Bauds", 0, QApplication::UnicodeUTF8));
        label_107->setText(QApplication::translate("EditeConfig", "Format", 0, QApplication::UnicodeUTF8));
        label_108->setText(QApplication::translate("EditeConfig", "File Path", 0, QApplication::UnicodeUTF8));
        Impstr3StreamBox->setText(QString());
        Inpstrtype3Box->clear();
        Inpstrtype3Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "serial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "file", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ntripcli", 0, QApplication::UnicodeUTF8)
        );
        SerialPort3Box->clear();
        SerialPort3Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ttyACM0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ttyAMA0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ttyUSB0", 0, QApplication::UnicodeUTF8)
        );
        Baudrate3Box->clear();
        Baudrate3Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "115200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "9600", 0, QApplication::UnicodeUTF8)
        );
        Inpstr3formatBox->clear();
        Inpstr3formatBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ubx", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "nvs", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "oem3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "nov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ss2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "hemis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "stq", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "javad", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "binex", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rtcm2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rtcm3", 0, QApplication::UnicodeUTF8)
        );
        Impstr3PathBox->setText(QString());
        Impstr3PathButton->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        Impstr3StreamButton->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(InputTab), QApplication::translate("EditeConfig", "Input", 0, QApplication::UnicodeUTF8));
        Outstr1typeBox->clear();
        Outstr1typeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "serial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "file", 0, QApplication::UnicodeUTF8)
        );
        OutstrformatBox->clear();
        OutstrformatBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ubx", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "nvs", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "oem3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "nov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ss2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "hemis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "stq", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "javad", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "binex", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rtcm2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rtcm3", 0, QApplication::UnicodeUTF8)
        );
        label_72->setText(QApplication::translate("EditeConfig", "Bauds", 0, QApplication::UnicodeUTF8));
        Outstr1PathBox->setText(QString());
        label_92->setText(QApplication::translate("EditeConfig", "File Path", 0, QApplication::UnicodeUTF8));
        label_93->setText(QApplication::translate("EditeConfig", "<html><head/><body><p>OUTPUT STREAM</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_94->setText(QApplication::translate("EditeConfig", "Serial Port", 0, QApplication::UnicodeUTF8));
        label_95->setText(QApplication::translate("EditeConfig", "Format", 0, QApplication::UnicodeUTF8));
        Outstr1PathButton->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        BaudrateOutBox->clear();
        BaudrateOutBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "115200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "9600", 0, QApplication::UnicodeUTF8)
        );
        label_96->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-weight:600;\">Output 1</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        SerialPortOutBox->clear();
        SerialPortOutBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ttyACM0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "AMA0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "USB0", 0, QApplication::UnicodeUTF8)
        );
        Logstr1typeBox->clear();
        Logstr1typeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "file", 0, QApplication::UnicodeUTF8)
        );
        label_97->setText(QApplication::translate("EditeConfig", "File Path", 0, QApplication::UnicodeUTF8));
        Logstr1PathBox->setText(QString());
        label_98->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-size:12pt;\">LOG STREAM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Logstr1PathButton->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        label_99->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-weight:600;\">Log Stream 1</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        OutstrtypeBox2->clear();
        OutstrtypeBox2->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "serial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "file", 0, QApplication::UnicodeUTF8)
        );
        SerialPortOutBox2->clear();
        SerialPortOutBox2->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ttyACM0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "AMA0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "USB0", 0, QApplication::UnicodeUTF8)
        );
        BaudrateOutBox2->clear();
        BaudrateOutBox2->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "115200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "9600", 0, QApplication::UnicodeUTF8)
        );
        OutstrformatBox2->clear();
        OutstrformatBox2->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ubx", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "nvs", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "oem3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "nov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "ss2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "hemis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "stq", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "javad", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "binex", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rtcm2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rtcm3", 0, QApplication::UnicodeUTF8)
        );
        Outstr1PathBox2->setText(QString());
        Outstr1PathButton_2->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        label_109->setText(QApplication::translate("EditeConfig", "Format", 0, QApplication::UnicodeUTF8));
        label_110->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-weight:600;\">Output 2</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_111->setText(QApplication::translate("EditeConfig", "File Path", 0, QApplication::UnicodeUTF8));
        label_112->setText(QApplication::translate("EditeConfig", "Bauds", 0, QApplication::UnicodeUTF8));
        label_113->setText(QApplication::translate("EditeConfig", "Serial Port", 0, QApplication::UnicodeUTF8));
        Logstr1typeBox2->clear();
        Logstr1typeBox2->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "file", 0, QApplication::UnicodeUTF8)
        );
        Logstr1PathBox2->setText(QString());
        label_114->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-weight:600;\">Log Stream 2</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_115->setText(QApplication::translate("EditeConfig", "File Path", 0, QApplication::UnicodeUTF8));
        Logstr1PathButton2->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        Logstr1PathBox3->setText(QString());
        Logstr1PathButton3->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        Logstr1typeBox3->clear();
        Logstr1typeBox3->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "file", 0, QApplication::UnicodeUTF8)
        );
        label_116->setText(QApplication::translate("EditeConfig", "File Path", 0, QApplication::UnicodeUTF8));
        label_117->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-weight:600;\">Log Stream 2</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("EditeConfig", "Output 1", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("EditeConfig", "Solution Format", 0, QApplication::UnicodeUTF8));
        SolformatBox->clear();
        SolformatBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "llh", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "xyz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "enu", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "nmea", 0, QApplication::UnicodeUTF8)
        );
        label_58->setText(QApplication::translate("EditeConfig", "Output Header", 0, QApplication::UnicodeUTF8));
        OutheadBox->clear();
        OutheadBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "on", 0, QApplication::UnicodeUTF8)
        );
        label_60->setText(QApplication::translate("EditeConfig", "Time Format", 0, QApplication::UnicodeUTF8));
        label_61->setText(QApplication::translate("EditeConfig", "# of Decimals for Time", 0, QApplication::UnicodeUTF8));
        TimendecBox->clear();
        TimendecBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "6", 0, QApplication::UnicodeUTF8)
        );
        TimesysBox->clear();
        TimesysBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "tow", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "hms", 0, QApplication::UnicodeUTF8)
        );
        label_62->setText(QApplication::translate("EditeConfig", "Lat / Lon Format", 0, QApplication::UnicodeUTF8));
        label_63->setText(QApplication::translate("EditeConfig", "Field Separator", 0, QApplication::UnicodeUTF8));
        DegformBox->clear();
        DegformBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "deg", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "dms", 0, QApplication::UnicodeUTF8)
        );
        FieldsepBox->setText(QString());
        label_64->setText(QApplication::translate("EditeConfig", "Height", 0, QApplication::UnicodeUTF8));
        label_65->setText(QApplication::translate("EditeConfig", "NMEA Interval GSA/GSV (s)", 0, QApplication::UnicodeUTF8));
        label_67->setText(QApplication::translate("EditeConfig", "Output Solution Status", 0, QApplication::UnicodeUTF8));
        label_68->setText(QApplication::translate("EditeConfig", "NMEA Interval RMC/GGA (s)", 0, QApplication::UnicodeUTF8));
        label_69->setText(QApplication::translate("EditeConfig", "Geoid Model", 0, QApplication::UnicodeUTF8));
        GeoidBox->clear();
        GeoidBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "internal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "egm96", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "egm08_2.5,3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "egm08_1,4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "gsi2000", 0, QApplication::UnicodeUTF8)
        );
        OutstatBox->clear();
        OutstatBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "state", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "residual", 0, QApplication::UnicodeUTF8)
        );
        HeightBox->clear();
        HeightBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ellipsoidal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "geodetic", 0, QApplication::UnicodeUTF8)
        );
        Nmeaintv1Box->setText(QString());
        Nmeaintv2Box->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(OutputTab), QApplication::translate("EditeConfig", "Output 2", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-weight:600;\">Measurement Errors (1 sigma)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-weight:600;\">Process Noises (1 sigma / sqrt(s))</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        PrnbiasBox->clear();
        PrnbiasBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.00001", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.00005", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.0001", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.0002", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.0005", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.001", 0, QApplication::UnicodeUTF8)
        );
        label_29->setText(QApplication::translate("EditeConfig", "Receiver Acceleration Horiz (m/s\302\262)", 0, QApplication::UnicodeUTF8));
        PrnionoBox->clear();
        PrnionoBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.0001", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.0002", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.0005", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.001", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.002", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.005", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.01", 0, QApplication::UnicodeUTF8)
        );
        PrnaccelvBox->clear();
        PrnaccelvBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "100", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "500", 0, QApplication::UnicodeUTF8)
        );
        label_31->setText(QApplication::translate("EditeConfig", "Carrier-Phase Bias (cycle)", 0, QApplication::UnicodeUTF8));
        PrnaccelhBox->clear();
        PrnaccelhBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "1.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "5.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "10.0", 0, QApplication::UnicodeUTF8)
        );
        PrntropBox->clear();
        PrntropBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.00001", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.00002", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.00005", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.0001", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.0002", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.0005", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.001", 0, QApplication::UnicodeUTF8)
        );
        label_30->setText(QApplication::translate("EditeConfig", "Receiver Acceleration Vert (m/s\302\262)", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("EditeConfig", "Zenithal Tropospheric Delay (m)", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("EditeConfig", "Vertical Ionospherical Delay (m/10km)", 0, QApplication::UnicodeUTF8));
        Eratio2Box->clear();
        Eratio2Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "100", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "500", 0, QApplication::UnicodeUTF8)
        );
        label_26->setText(QApplication::translate("EditeConfig", "Carrier-Phase Error : /Baseline (m/10km)", 0, QApplication::UnicodeUTF8));
        ErrdopplerBox->clear();
        ErrdopplerBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "1.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "2.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "5.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "10.0", 0, QApplication::UnicodeUTF8)
        );
        ErrphaseblBox->clear();
        ErrphaseblBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.001", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.002", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.003", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.004", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.005", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.01", 0, QApplication::UnicodeUTF8)
        );
        Eratio1Box->clear();
        Eratio1Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "100", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "500", 0, QApplication::UnicodeUTF8)
        );
        label_24->setText(QApplication::translate("EditeConfig", "Carrier-Phase Error : a+b (m)", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("EditeConfig", "Carrier-Phase Error : /sin(El)", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("EditeConfig", "Code/Carrier-Phase Error Ratio : L2", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("EditeConfig", "Code/Carrier-Phase Error Ratio : L1", 0, QApplication::UnicodeUTF8));
        ErrphaseBox->clear();
        ErrphaseBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.001", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.002", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.003", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.004", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.005", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.01", 0, QApplication::UnicodeUTF8)
        );
        label_27->setText(QApplication::translate("EditeConfig", "Doppler Frequency (Hz)", 0, QApplication::UnicodeUTF8));
        ErrphaseelBox->clear();
        ErrphaseelBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.003", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.001", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.002", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.004", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.005", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "0.01", 0, QApplication::UnicodeUTF8)
        );
        label_35->setText(QApplication::translate("EditeConfig", "Satellite Clock Stability (s/s)", 0, QApplication::UnicodeUTF8));
        ClckstabBox->clear();
        ClckstabBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "1e-12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "2e-12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "5e-12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "1e-11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "2e-11", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(StatsTab), QApplication::translate("EditeConfig", "Stats", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("EditeConfig", "Satellite Antenna PCV File ANTEX", 0, QApplication::UnicodeUTF8));
        SatantfileBox->setText(QString());
        SatantfileButton->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        RcvantfileBox->setText(QString());
        label_36->setText(QApplication::translate("EditeConfig", "Receiver Antenna PCV File ANTEX / NGS PCV", 0, QApplication::UnicodeUTF8));
        RcvantfileButton->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("EditeConfig", "Geoid Data File", 0, QApplication::UnicodeUTF8));
        GeoidfileBox->setText(QString());
        GeoidfileButton->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("EditeConfig", "DCB Data File", 0, QApplication::UnicodeUTF8));
        DcbfileBox->setText(QString());
        DcbfileButton->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("EditeConfig", "EOP Data File", 0, QApplication::UnicodeUTF8));
        EopfileBox->setText(QString());
        EopfileButton->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("EditeConfig", "Ocean Loading BLQ Format", 0, QApplication::UnicodeUTF8));
        BlqfileBox->setText(QString());
        BlqfileButton->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        label_66->setText(QApplication::translate("EditeConfig", "FTP/HTTP Local Directory", 0, QApplication::UnicodeUTF8));
        TempdirBox->setText(QString());
        TempdirButton->setText(QApplication::translate("EditeConfig", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(FilesTab), QApplication::translate("EditeConfig", "Files", 0, QApplication::UnicodeUTF8));
        label_70->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-weight:600;\">Rover</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_71->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-weight:600;\">Base Station</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        RovpostypeBox->clear();
        RovpostypeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "llh", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "xyz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "single", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "posfile", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rinexhead", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rtcm", 0, QApplication::UnicodeUTF8)
        );
        Rovpos1Box->setText(QApplication::translate("EditeConfig", "0.0000", 0, QApplication::UnicodeUTF8));
        Rovpos2Box->setText(QApplication::translate("EditeConfig", "0.0000", 0, QApplication::UnicodeUTF8));
        Rovpos3Box->setText(QApplication::translate("EditeConfig", "0.000", 0, QApplication::UnicodeUTF8));
        label_73->setText(QApplication::translate("EditeConfig", "/", 0, QApplication::UnicodeUTF8));
        label_74->setText(QApplication::translate("EditeConfig", "/", 0, QApplication::UnicodeUTF8));
        RovantCheckBox->setText(QApplication::translate("EditeConfig", "Antenna Type (* : Auto)", 0, QApplication::UnicodeUTF8));
        RovanttypeBox->clear();
        RovanttypeBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("EditeConfig", "*", 0, QApplication::UnicodeUTF8)
        );
        label_75->setText(QApplication::translate("EditeConfig", "/", 0, QApplication::UnicodeUTF8));
        RovantdeleBox->setText(QApplication::translate("EditeConfig", "0.000", 0, QApplication::UnicodeUTF8));
        label_76->setText(QApplication::translate("EditeConfig", "/", 0, QApplication::UnicodeUTF8));
        RovantdeluBox->setText(QApplication::translate("EditeConfig", "0.000", 0, QApplication::UnicodeUTF8));
        RovantdelnBox->setText(QApplication::translate("EditeConfig", "0.000", 0, QApplication::UnicodeUTF8));
        label_77->setText(QApplication::translate("EditeConfig", "Delta E/N/U (m)", 0, QApplication::UnicodeUTF8));
        BsantdeleBox->setText(QApplication::translate("EditeConfig", "0.000", 0, QApplication::UnicodeUTF8));
        label_78->setText(QApplication::translate("EditeConfig", "Delta E/N/U (m)", 0, QApplication::UnicodeUTF8));
        BsantdeluBox->setText(QApplication::translate("EditeConfig", "0.000", 0, QApplication::UnicodeUTF8));
        label_79->setText(QApplication::translate("EditeConfig", "/", 0, QApplication::UnicodeUTF8));
        label_80->setText(QApplication::translate("EditeConfig", "/", 0, QApplication::UnicodeUTF8));
        BsantdelnBox->setText(QApplication::translate("EditeConfig", "0.000", 0, QApplication::UnicodeUTF8));
        Bspos1Box->setText(QApplication::translate("EditeConfig", "0.0000", 0, QApplication::UnicodeUTF8));
        BspostypeBox->clear();
        BspostypeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "llh", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "xyz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "single", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "posfile", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rinexhead", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rtcm", 0, QApplication::UnicodeUTF8)
        );
        label_81->setText(QApplication::translate("EditeConfig", "/", 0, QApplication::UnicodeUTF8));
        Bspos3Box->setText(QApplication::translate("EditeConfig", "0.000", 0, QApplication::UnicodeUTF8));
        label_82->setText(QApplication::translate("EditeConfig", "/", 0, QApplication::UnicodeUTF8));
        Bspos2Box->setText(QApplication::translate("EditeConfig", "0.0000", 0, QApplication::UnicodeUTF8));
        BsanttypeBox->clear();
        BsanttypeBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("EditeConfig", "*", 0, QApplication::UnicodeUTF8)
        );
        BsantCheckBox->setText(QApplication::translate("EditeConfig", "Antenna Type (* : Auto)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(PositionsTab), QApplication::translate("EditeConfig", "Positions", 0, QApplication::UnicodeUTF8));
        SvrcycleBox->clear();
        SvrcycleBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "100", 0, QApplication::UnicodeUTF8)
        );
        label_83->setText(QApplication::translate("EditeConfig", "Process Cycle (ms)", 0, QApplication::UnicodeUTF8));
        NmeacycleBox->clear();
        NmeacycleBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "1000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "2000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "5000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "10000", 0, QApplication::UnicodeUTF8)
        );
        label_84->setText(QApplication::translate("EditeConfig", "NMEA Cycle (ms)", 0, QApplication::UnicodeUTF8));
        label_85->setText(QApplication::translate("EditeConfig", "Timeout Interval (ms)", 0, QApplication::UnicodeUTF8));
        TimeoutBox->clear();
        TimeoutBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "5000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "10000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "20000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "30000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "50000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "100000", 0, QApplication::UnicodeUTF8)
        );
        ReconnectBox->clear();
        ReconnectBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "2000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "5000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "10000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "20000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "50000", 0, QApplication::UnicodeUTF8)
        );
        label_86->setText(QApplication::translate("EditeConfig", "Reconnect Interval (ms)", 0, QApplication::UnicodeUTF8));
        label_87->setText(QApplication::translate("EditeConfig", "Buffer Size (bytes)", 0, QApplication::UnicodeUTF8));
        BuffsizeBox->clear();
        BuffsizeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "32768", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "65536", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "131072", 0, QApplication::UnicodeUTF8)
        );
        FswapmarginBox->clear();
        FswapmarginBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "60", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "120", 0, QApplication::UnicodeUTF8)
        );
        label_88->setText(QApplication::translate("EditeConfig", "File Swap Margin (s)", 0, QApplication::UnicodeUTF8));
        NavmsgselBox->clear();
        NavmsgselBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "all", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "rover", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "base", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditeConfig", "corr", 0, QApplication::UnicodeUTF8)
        );
        label_89->setText(QApplication::translate("EditeConfig", "Navigation Message Selection", 0, QApplication::UnicodeUTF8));
        label_90->setText(QApplication::translate("EditeConfig", "HTTP/NTRIP Proxy", 0, QApplication::UnicodeUTF8));
        SbasatselBox->setText(QApplication::translate("EditeConfig", "0", 0, QApplication::UnicodeUTF8));
        label_91->setText(QApplication::translate("EditeConfig", "SBAS Satellite Selection (0 : All)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(MiscTab), QApplication::translate("EditeConfig", "Misc", 0, QApplication::UnicodeUTF8));
        ReturnButton->setText(QApplication::translate("EditeConfig", "RETURN", 0, QApplication::UnicodeUTF8));
        SaveButton->setText(QApplication::translate("EditeConfig", "SAVE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditeConfig: public Ui_EditeConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITECONFIG_H
