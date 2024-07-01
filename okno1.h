#ifndef OKNO1_H
#define OKNO1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class okno1;
}
QT_END_NAMESPACE

class okno1 : public QMainWindow
{
    Q_OBJECT

public:
    okno1(QWidget *parent = nullptr);
    ~okno1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::okno1 *ui;
};
#endif // OKNO1_H
