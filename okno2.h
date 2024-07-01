#ifndef OKNO2_H
#define OKNO2_H

#include <QDialog>

class TV {
public:
    void on();
    void off();
};

class SoundSystem {
public:
    void on();
    void off();
};

class LightSystem {
public:
    void dim();
    void brighten();
};

class HomeTheaterFacade {
private:
    TV tv;
    SoundSystem soundSystem;
    LightSystem lightSystem;

public:
    HomeTheaterFacade();
    void watchMovie(const QString &movieTitle);
    void endMovie(const QString &movieTitle);
};

namespace Ui {
class okno2;
}

class okno2 : public QDialog
{
    Q_OBJECT

public:
    explicit okno2(QWidget *parent = nullptr);
    ~okno2();

private slots:
    void on_pushButton_5_clicked();
    void on_comboBox_3_activated(int index);
    void updateComboBox_3();
    void startMovie();
    void endMovie();

private:
    Ui::okno2 *ui;
};
#endif // OKNO2_H
