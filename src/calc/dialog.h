#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QWidget>
#include <QMessageBox>
#include "ui_dialog.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent, QString strstr);
    ~Dialog();
    double xStart, xEnd, step, X, yStart, yEnd;
    QVector<double> x,y;

private slots:
    void on_build_graph_clicked();
//    QByteArray transform(QByteArray ba);

private:
    Ui::Dialog *ui;
    QString strStr;
};

#endif // DIALOG_H
