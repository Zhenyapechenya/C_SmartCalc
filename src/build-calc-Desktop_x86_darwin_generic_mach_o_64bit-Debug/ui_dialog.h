/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QCustomPlot *widget;
    QFrame *frame_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *x_start;
    QSpinBox *x_end;
    QPushButton *build_graph;
    QFrame *frame_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QSpinBox *y_start;
    QSpinBox *y_end;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(918, 842);
        widget = new QCustomPlot(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(15, 137, 891, 691));
        frame_2 = new QFrame(Dialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, 20, 281, 91));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 20, 21, 41));
        QFont font;
        font.setPointSize(33);
        label_4->setFont(font);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 60, 31, 16));
        QFont font1;
        font1.setPointSize(15);
        label_5->setFont(font1);
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 20, 31, 16));
        label_6->setFont(font1);
        x_start = new QSpinBox(frame_2);
        x_start->setObjectName(QString::fromUtf8("x_start"));
        x_start->setGeometry(QRect(160, 10, 111, 31));
        x_start->setMinimum(-1000000);
        x_start->setMaximum(1000000);
        x_start->setValue(-10);
        x_end = new QSpinBox(frame_2);
        x_end->setObjectName(QString::fromUtf8("x_end"));
        x_end->setGeometry(QRect(160, 50, 111, 31));
        x_end->setMinimum(-1000000);
        x_end->setMaximum(1000000);
        x_end->setValue(10);
        build_graph = new QPushButton(Dialog);
        build_graph->setObjectName(QString::fromUtf8("build_graph"));
        build_graph->setGeometry(QRect(680, 50, 161, 61));
        build_graph->setFont(font1);
        build_graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"   border-right: 5px solid rgb(196, 126, 49);\n"
"   border-bottom: 6px solid rgb(196, 126, 49);\n"
"  background-color: rgb(239, 154, 59);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        frame_3 = new QFrame(Dialog);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(320, 20, 281, 91));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 20, 21, 41));
        label_7->setFont(font);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(120, 60, 31, 16));
        label_8->setFont(font1);
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(120, 20, 31, 16));
        label_9->setFont(font1);
        y_start = new QSpinBox(frame_3);
        y_start->setObjectName(QString::fromUtf8("y_start"));
        y_start->setGeometry(QRect(160, 10, 111, 31));
        y_start->setMinimum(-1000000);
        y_start->setMaximum(1000000);
        y_start->setValue(-10);
        y_end = new QSpinBox(frame_3);
        y_end->setObjectName(QString::fromUtf8("y_end"));
        y_end->setGeometry(QRect(160, 50, 111, 31));
        y_end->setMinimum(-1000000);
        y_end->setMaximum(1000000);
        y_end->setValue(10);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "X", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "end", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "start", nullptr));
        build_graph->setText(QCoreApplication::translate("Dialog", "Build graph", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "Y", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "end", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
