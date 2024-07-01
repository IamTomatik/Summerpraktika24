#include "okno3.h"
#include "ui_okno3.h"
#include "okno2.h"

okno3::okno3(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::okno3)
{
    ui->setupUi(this);
}

okno3::~okno3()
{
    delete ui;
}

void okno3::on_radioButton_clicked(bool checked)
{
    if(checked){
        ui->label_3->setStyleSheet("background-color: rgba(0, 0, 0, 0);image:url(:/new/prefix1/kartiki/theatre (1).png);");
        ui->pushButton_2->setEnabled(false);
        ui->pushButton->setEnabled(true);
    }
}

void okno3::on_radioButton_2_clicked(bool checked)
{
    if(checked){
        ui->label_3->setStyleSheet("background-color: rgba(0, 0, 0, 0);image: url(:/new/prefix1/kartiki/theatre.png);");
        ui->pushButton->setEnabled(false);
        ui->pushButton_2->setEnabled(true);
    }
}

void okno3::on_pushButton_clicked()
{
    accept();
}


void okno3::on_pushButton_2_clicked()
{
    hide();
    okno2 window2;
    window2.setModal(true);
    window2.exec();
}

