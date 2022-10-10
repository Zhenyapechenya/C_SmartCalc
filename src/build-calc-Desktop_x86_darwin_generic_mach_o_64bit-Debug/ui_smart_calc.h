/********************************************************************************
** Form generated from reading UI file 'smart_calc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMART_CALC_H
#define UI_SMART_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Smart_Calc
{
public:
    QWidget *centralwidget;
    QLabel *label_display;
    QPushButton *pushButton_brace1;
    QPushButton *pushButton_brace2;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_del;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_0;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_x;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_graph;
    QPushButton *pushButton_log;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_ln;

    void setupUi(QMainWindow *Smart_Calc)
    {
        if (Smart_Calc->objectName().isEmpty())
            Smart_Calc->setObjectName(QString::fromUtf8("Smart_Calc"));
        Smart_Calc->resize(680, 715);
        centralwidget = new QWidget(Smart_Calc);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_display = new QLabel(centralwidget);
        label_display->setObjectName(QString::fromUtf8("label_display"));
        label_display->setGeometry(QRect(40, 30, 601, 171));
        QFont font;
        font.setPointSize(24);
        label_display->setFont(font);
        label_display->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 10px solid gray;\n"
"  background-color : white;\n"
"}"));
        label_display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_display->setMargin(10);
        pushButton_brace1 = new QPushButton(centralwidget);
        pushButton_brace1->setObjectName(QString::fromUtf8("pushButton_brace1"));
        pushButton_brace1->setGeometry(QRect(340, 250, 60, 60));
        pushButton_brace1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color:rgb(169, 169, 169);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_brace1->setFlat(false);
        pushButton_brace2 = new QPushButton(centralwidget);
        pushButton_brace2->setObjectName(QString::fromUtf8("pushButton_brace2"));
        pushButton_brace2->setGeometry(QRect(420, 250, 60, 60));
        pushButton_brace2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color:rgb(169, 169, 169);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_brace2->setFlat(false);
        pushButton_pow = new QPushButton(centralwidget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(500, 250, 60, 60));
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color:rgb(169, 169, 169);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_pow->setFlat(false);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(340, 330, 60, 60));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color: rgb(212, 212, 212);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_1->setFlat(false);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 330, 60, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color: rgb(212, 212, 212);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_2->setFlat(false);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 330, 60, 60));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color: rgb(212, 212, 212);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_3->setFlat(false);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(340, 410, 60, 60));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color: rgb(212, 212, 212);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_4->setFlat(false);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(500, 490, 60, 60));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color: rgb(212, 212, 212);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_9->setFlat(false);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(420, 490, 60, 60));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color: rgb(212, 212, 212);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_8->setFlat(false);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(420, 410, 60, 60));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color: rgb(212, 212, 212);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_5->setFlat(false);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(340, 490, 60, 60));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color: rgb(212, 212, 212);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_7->setFlat(false);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(500, 410, 60, 60));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color: rgb(212, 212, 212);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_6->setFlat(false);
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(580, 330, 60, 60));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color:rgb(169, 169, 169);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_minus->setFlat(false);
        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(580, 490, 60, 60));
        pushButton_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color:rgb(169, 169, 169);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_del->setFlat(false);
        pushButton_mult = new QPushButton(centralwidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        pushButton_mult->setGeometry(QRect(580, 410, 60, 60));
        pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color:rgb(169, 169, 169);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_mult->setFlat(false);
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(580, 250, 60, 60));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color:rgb(169, 169, 169);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_plus->setFlat(false);
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(500, 570, 141, 60));
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid rgb(196, 126, 49);\n"
"   border-bottom: 6px solid rgb(196, 126, 49);\n"
"  background-color: rgb(239, 154, 59);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_equal->setFlat(false);
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(340, 570, 60, 60));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color: rgb(212, 212, 212);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_0->setFlat(false);
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(420, 570, 60, 60));
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color: rgb(212, 212, 212);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_dot->setFlat(false);
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(40, 250, 141, 60));
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid rgb(196, 126, 49);\n"
"   border-bottom: 6px solid rgb(196, 126, 49);\n"
"  background-color: rgb(239, 154, 59);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_clear->setFlat(false);
        pushButton_delete = new QPushButton(centralwidget);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(200, 250, 60, 60));
        pushButton_delete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color:rgb(169, 169, 169);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_delete->setFlat(false);
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(200, 570, 60, 60));
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color:rgb(169, 169, 169);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_x->setFlat(false);
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(40, 410, 60, 60));
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid rgb(33, 33, 33);\n"
"   border-bottom: 6px solid rgb(33, 33, 33);\n"
"   background-color: rgb(121, 121, 121);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_asin->setFlat(false);
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(200, 330, 60, 60));
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid rgb(33, 33, 33);\n"
"   border-bottom: 6px solid rgb(33, 33, 33);\n"
"   background-color: rgb(121, 121, 121);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_tan->setFlat(false);
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(120, 330, 60, 60));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid rgb(33, 33, 33);\n"
"   border-bottom: 6px solid rgb(33, 33, 33);\n"
"   background-color: rgb(121, 121, 121);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_cos->setFlat(false);
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(120, 410, 60, 60));
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid rgb(33, 33, 33);\n"
"   border-bottom: 6px solid rgb(33, 33, 33);\n"
"   background-color: rgb(121, 121, 121);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_acos->setFlat(false);
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(200, 410, 60, 60));
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid rgb(33, 33, 33);\n"
"   border-bottom: 6px solid rgb(33, 33, 33);\n"
"   background-color: rgb(121, 121, 121);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_atan->setFlat(false);
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(40, 330, 60, 60));
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid rgb(33, 33, 33);\n"
"   border-bottom: 6px solid rgb(33, 33, 33);\n"
"   background-color: rgb(121, 121, 121);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_sin->setFlat(false);
        pushButton_graph = new QPushButton(centralwidget);
        pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
        pushButton_graph->setGeometry(QRect(40, 570, 141, 60));
        pushButton_graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid gray;\n"
"   border-bottom: 6px solid gray;\n"
"   background-color:rgb(169, 169, 169);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_graph->setFlat(false);
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(200, 490, 60, 60));
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid rgb(33, 33, 33);\n"
"   border-bottom: 6px solid rgb(33, 33, 33);\n"
"   background-color: rgb(121, 121, 121);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_log->setFlat(false);
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(40, 490, 60, 60));
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid rgb(33, 33, 33);\n"
"   border-bottom: 6px solid rgb(33, 33, 33);\n"
"   background-color: rgb(121, 121, 121);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_sqrt->setFlat(false);
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(120, 490, 60, 60));
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid rgb(33, 33, 33);\n"
"   border-bottom: 6px solid rgb(33, 33, 33);\n"
"   background-color: rgb(121, 121, 121);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_ln->setFlat(false);
        Smart_Calc->setCentralWidget(centralwidget);

        retranslateUi(Smart_Calc);

        QMetaObject::connectSlotsByName(Smart_Calc);
    } // setupUi

    void retranslateUi(QMainWindow *Smart_Calc)
    {
        Smart_Calc->setWindowTitle(QCoreApplication::translate("Smart_Calc", "Smart_Calc", nullptr));
        label_display->setText(QString());
        pushButton_brace1->setText(QCoreApplication::translate("Smart_Calc", "(", nullptr));
        pushButton_brace2->setText(QCoreApplication::translate("Smart_Calc", ")", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("Smart_Calc", "^", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Smart_Calc", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Smart_Calc", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Smart_Calc", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Smart_Calc", "4", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Smart_Calc", "9", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Smart_Calc", "8", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Smart_Calc", "5", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Smart_Calc", "7", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Smart_Calc", "6", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("Smart_Calc", "-", nullptr));
        pushButton_del->setText(QCoreApplication::translate("Smart_Calc", "/", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("Smart_Calc", "*", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("Smart_Calc", "+", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("Smart_Calc", "=", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Smart_Calc", "0", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("Smart_Calc", ".", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Smart_Calc", "AC", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Smart_Calc", "<-", nullptr));
        pushButton_x->setText(QCoreApplication::translate("Smart_Calc", "x", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("Smart_Calc", "asin", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("Smart_Calc", "tan", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("Smart_Calc", "cos", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("Smart_Calc", "acos", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("Smart_Calc", "atan", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("Smart_Calc", "sin", nullptr));
        pushButton_graph->setText(QCoreApplication::translate("Smart_Calc", "graph", nullptr));
        pushButton_log->setText(QCoreApplication::translate("Smart_Calc", "log", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("Smart_Calc", "\342\210\232", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("Smart_Calc", "ln", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Smart_Calc: public Ui_Smart_Calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMART_CALC_H
