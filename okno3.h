#ifndef OKNO3_H
#define OKNO3_H

#include <QDialog>


namespace Ui {
class okno3;
}

class okno3 : public QDialog
{
    Q_OBJECT

public:
    explicit okno3(QWidget *parent = nullptr);
    ~okno3();


private slots:
    void on_radioButton_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::okno3 *ui;
};

#endif // OKNO3_H
