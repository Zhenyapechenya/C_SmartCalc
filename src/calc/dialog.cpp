#include "dialog.h"
#include "ui_dialog.h"

extern "C" {
#include "../s21_calc.h"
}

Dialog::Dialog(QWidget *parent, QString strstr) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    strStr = strstr + '=';
}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_build_graph_clicked()
{
    step = 0.01;
    xStart = ui->x_start->value();
    xEnd = ui->x_end->value();
    yStart = ui->y_start->value();
    yEnd = ui->y_end->value();

    int err = 0;
    if (xStart >= xEnd || yStart >= yEnd) {
        err = 1;
    } else {
        ui->widget->xAxis->setRange(xStart, xEnd);
        ui->widget->yAxis->setRange(yStart, yEnd);

        char* x_ch = (char *)calloc(100,sizeof(char));

        for (X = xStart; X <= xEnd; X += step) {
            Stack_t stack;
            Stack_t *st = &stack;
            init_stack(st);

            x.push_back(X);
            sprintf(x_ch, " ( %f ) ", X);

            QByteArray tmp = strStr.toLocal8Bit();
            tmp.replace("x", x_ch);

            char* format = tmp.data();
            parser(format, st);
            y.push_back(st->num[0]);
        }
        free(x_ch);
    }

    if (!err) {
        ui->widget->addGraph();
        ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone);
        ui->widget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 2));
        ui->widget->graph(0)->addData(x,y);
        ui->widget->replot();
        ui->widget->setInteraction(QCP::iRangeDrag, true);
        ui->widget->setInteraction(QCP::iRangeZoom, true);
    }
}

