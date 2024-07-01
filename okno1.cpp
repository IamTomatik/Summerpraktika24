#include "okno1.h"
#include "okno2.h"
#include "ui_okno1.h"

okno1::okno1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::okno1)
{
    ui->setupUi(this);
}

okno1::~okno1()
{
    delete ui;
}

void okno1::on_pushButton_clicked()
{
    hide();
    okno2 window2;
    window2.setModal(true);
    window2.exec();
}

