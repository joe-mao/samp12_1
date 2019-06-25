#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_slider_valueChanged(int value)
{
    this->ui->battery->setPowerLevel(value);
    QString str = QStringLiteral("当前电量：") + QString::asprintf("%d %%", value);
    this->ui->LabInfo->setText(str);

}
