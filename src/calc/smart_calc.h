#ifndef SMART_CALC_H
#define SMART_CALC_H

#include <string.h>
#include <QMainWindow>
#include <form.h>
#include <dialog.h>
#include <QVector>

extern "C" {
    #include "../s21_calc.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class Smart_Calc; }
QT_END_NAMESPACE

class Smart_Calc : public QMainWindow
{
    Q_OBJECT

public:
    Smart_Calc(QWidget *parent = nullptr);
    ~Smart_Calc();

private:
    Ui::Smart_Calc *ui;
    Form *form;

private slots:
    void numbers();
    void on_pushButton_dot_clicked();
    void on_pushButton_clear_clicked();
    void on_pushButton_equal_clicked();
    void math_operations();
    void brace_operators();
    void on_pushButton_delete_clicked();
    void other_operations();
    void get_answer(QString string_without_x);
    void on_pushButton_graph_clicked();

signals:
    void signal();

public slots:
    void slotForm(QString x);
};
#endif // SMART_CALC_H
