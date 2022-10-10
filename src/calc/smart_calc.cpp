#include "smart_calc.h"
#include "ui_smart_calc.h"

#include <QDebug>

bool is_space;
bool is_dot;
bool is_num;
bool is_brace;
bool is_left;
bool is_x;
QString string_without_x;
QString tmp;

Smart_Calc::Smart_Calc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Smart_Calc)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_x,SIGNAL(clicked()),this,SLOT(numbers()));

    connect(ui->pushButton_plus,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_minus,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_mult,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_del,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_pow,SIGNAL(clicked()),this,SLOT(math_operations()));

    connect(ui->pushButton_brace1,SIGNAL(clicked()),this,SLOT(brace_operators()));
    connect(ui->pushButton_brace2,SIGNAL(clicked()),this,SLOT(brace_operators()));

    connect(ui->pushButton_sin,SIGNAL(clicked()),this,SLOT(other_operations()));
    connect(ui->pushButton_cos,SIGNAL(clicked()),this,SLOT(other_operations()));
    connect(ui->pushButton_tan,SIGNAL(clicked()),this,SLOT(other_operations()));
    connect(ui->pushButton_asin,SIGNAL(clicked()),this,SLOT(other_operations()));
    connect(ui->pushButton_acos,SIGNAL(clicked()),this,SLOT(other_operations()));
    connect(ui->pushButton_atan,SIGNAL(clicked()),this,SLOT(other_operations()));
    connect(ui->pushButton_sqrt,SIGNAL(clicked()),this,SLOT(other_operations()));
    connect(ui->pushButton_ln,SIGNAL(clicked()),this,SLOT(other_operations()));
    connect(ui->pushButton_log,SIGNAL(clicked()),this,SLOT(other_operations()));

}

Smart_Calc::~Smart_Calc()
{
    delete ui;
}



void Smart_Calc::numbers()
{
    QPushButton *button = (QPushButton *)sender();
    QString new_display;
    new_display = ui->label_display->text();

    if (button->text() == "x") {
        if (!is_dot && !is_num && !is_x) {
            new_display = ui->label_display->text() + button->text();
            is_x = true;
            is_num = false;
        }
    } else if (!is_x){
        new_display = ui->label_display->text() + button->text();
        is_num = true;
        is_x = false;
    }

    ui->label_display->setText(new_display);
    is_space = false;
    is_brace = false;
    is_left = false;
}



void Smart_Calc::on_pushButton_dot_clicked()
{
    if(!is_dot && is_num && !is_x && ui->label_display->text() != "" && ui->label_display->text() != " ") {
        ui->label_display->setText(ui->label_display->text() + ".");
        is_dot = true;
        is_num = false;
        is_space = false;
        is_brace = false;
        is_x = false;
    }
}



void Smart_Calc::math_operations()
{
    QPushButton *button = (QPushButton *)sender();
    QString new_display;

    if(ui->label_display->text() == "" || ui->label_display->text() == " ") {
        new_display = ui->label_display->text() + button->text();
    } else if (is_left && ( button->text() == "+" || button->text() == "-" )) {
        new_display = ui->label_display->text() + button->text();
        is_left = false;
    } else {
        if((is_num || is_x ) || ( is_brace && !is_left)) {
            if(is_space) {
                new_display = ui->label_display->text() + button->text() + " ";
            } else {
                new_display = ui->label_display->text() + " " + button->text() + " ";
            }
        } else {
            new_display = ui->label_display->text();
        }
    }

    ui->label_display->setText(new_display);
    is_space = true;
    is_dot = false;
    is_num = false;
    is_brace = false;
    is_x = false;
}



void Smart_Calc::brace_operators()
{
    QPushButton *button = (QPushButton *)sender();

    QString new_display;

    if(((is_num || is_x) && button->text() != "(") || is_brace || ui->label_display->text() == "" || is_space) {

        if(button->text() == "(") {
            is_left = true;
        }

        if(is_space) {
            new_display = ui->label_display->text() + button->text() + " ";
        } else {
            new_display = ui->label_display->text() + " " + button->text() + " ";
        }

        ui->label_display->setText(new_display);
        is_space = true;
        is_dot = false;
        is_num = false;
        is_brace = true;
        is_x = false;
    }
}



void Smart_Calc::on_pushButton_clear_clicked()
{
    ui->label_display->setText("");
    is_space = false;
    is_dot = false;
    is_num = false;
    is_brace = false;
    is_x = false;
}



void Smart_Calc::on_pushButton_delete_clicked()
{
    QString display = ui->label_display->text();

    if(is_space) {
        display.chop(2);
    } else {
        display.chop(1);
    }

    ui->label_display->setText(display);
}



void Smart_Calc::other_operations()
{
    QPushButton *button = (QPushButton *)sender();
    QString new_display = ui->label_display->text();

    if (!is_num && !is_dot && !is_x) {
        if(button->text() == "√") {
            new_display = ui->label_display->text() + " sqrt ( ";
        } else {
            new_display = ui->label_display->text() + " " + button->text() + " ( ";
        }
    }

    ui->label_display->setText(new_display);
}



void Smart_Calc::slotForm(QString x)
{
    QString string = ui->label_display->text();
    string.replace("x", x);
    get_answer(string);
}



void Smart_Calc::on_pushButton_equal_clicked()
{
    QString string = ui->label_display->text();

    if(string.contains("x")) {
        form = new Form;
        form -> show();
        connect(form, &Form::signalForm, this, &Smart_Calc::slotForm);
    } else {
        get_answer(string);
    }

}


void Smart_Calc::get_answer(QString string_without_x) {
    Stack_t stack;
    Stack_t *st = &stack;
    init_stack(st);

    QString new_display;

    if(is_num || is_brace || is_x) {
        string_without_x = string_without_x + " =";
        QByteArray temp = string_without_x.toLocal8Bit();
        char* input = temp.data();

        if (parser(input, st) == SUCCESS && string_without_x.size() < 255) {
                new_display = QString::number(st->num[0], 'g', 15);
                is_space = false;
                is_num = true;
                is_brace = false;
                is_x = false;
                if (new_display.contains('.')) {
                    is_dot = true;
                } else {
                    is_dot = false;
                }

        } else {
            new_display = "Incorrect input";
        }
    } else {
        new_display = ui->label_display->text();
    }

    ui->label_display->setText(new_display);
}

void Smart_Calc::on_pushButton_graph_clicked()
{
    Dialog window(nullptr, ui->label_display->text());
    window.setModal(true);
    window.exec();
}

