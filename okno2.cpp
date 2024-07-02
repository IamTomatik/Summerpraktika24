#include "okno2.h"
#include "okno3.h"
#include "ui_okno2.h"
#include "QMessageBox"

HomeTheaterFacade homeTheater;

void TV::on() {
    qDebug() << "Телевизор включен";
}
void TV::off() {
    qDebug() << "Телевизор выключен";
}
void SoundSystem::on() {
    qDebug() << "Звуковая система включена";
}
void SoundSystem::off() {
    qDebug() << "Звуковая система выключена";
}
void LightSystem::dim() {
    qDebug() << "Освещение затемнено";
}
void LightSystem::brighten() {
    qDebug() << "Освещение усилено";
}
HomeTheaterFacade::HomeTheaterFacade() {}

void HomeTheaterFacade::watchMovie(const QString &movieTitle) {
    title = movieTitle;
    QString message = QString("Подготовка к просмотру фильма '%1'...").arg(movieTitle);
    QMessageBox::information(nullptr, "Начало просмотра", message);
    tv.on();
    soundSystem.on();
    lightSystem.dim();
    QMessageBox::information(nullptr, "Готово к просмотру", "Готово к просмотру фильма!");
}

void HomeTheaterFacade::endMovie() {
    QString message = QString("Завершение просмотра фильма '%1'...").arg(title);
    QMessageBox::information(nullptr, "Завершение просмотра", message);
    tv.off();
    soundSystem.off();
    lightSystem.brighten();
    QMessageBox::information(nullptr, "Фильм закончен", "Фильм закончен");
    title.clear();
}

okno2::okno2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::okno2)
{
    ui->setupUi(this);
    status  = 0;
    QStringList items1 = {"фильм","сериал","мультфильм",};
    ui->comboBox->addItems(items1);

    QStringList items2 = {"дорама","комедия","милодрама","ужасы"};
    ui->comboBox_2->addItems(items2);

    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(updateComboBox_3()));
    connect(ui->comboBox_2, SIGNAL(currentIndexChanged(int)), this, SLOT(updateComboBox_3()));
    connect(ui->comboBox_3, SIGNAL(activated(int)), this, SLOT(on_comboBox_3_activated(int)));
    updateComboBox_3();

    connect(ui->startMovieButton, SIGNAL(clicked()), this, SLOT(startMovie()));
    connect(ui->endMovieButton, SIGNAL(clicked()), this, SLOT(endMovie()));
}

okno2::~okno2()
{
    delete ui;
}

void okno2::on_pushButton_5_clicked()
{
    hide();
    okno3 window3;
    window3.setModal(true);
    window3.exec();
}

void okno2::on_comboBox_3_activated(int index)
{
    Q_UNUSED(index);
    ui->comboBox_3->setCurrentText(ui->comboBox_3->itemText(index));
}

void okno2::updateComboBox_3()
{
    QString category = ui->comboBox->currentText();
    QString genre = ui->comboBox_2->currentText();

    ui->comboBox_3->clear();

    if (category != "Выберите категорию" && genre != "Выберите жанр") {
        if (category == "фильм" && genre == "дорама"){
            QStringList items3 = {"Украденная личность", "Паразиты", "Ты подросток|Лучшие дни"};
            ui->comboBox_3->addItems(items3);
        }else if(category == "фильм" && genre == "комедия") {
            QStringList items3 = {"1+1", "8 подруг Оушена", "Отпетые мошеницы"};
            ui->comboBox_3->addItems(items3);
        }else if(category == "фильм" && genre == "милодрама"){
            QStringList items3 = {"До встречи с тобой", "Дневник памяти", "Три метра над уровнем неба"};
            ui->comboBox_3->addItems(items3);
        }else if(category == "фильм" && genre == "ужасы"){
            QStringList items3 = {"Солнцестояние", "Кладбище домашних животных", "В высокой траве"};
            ui->comboBox_3->addItems(items3);
        }else if(category == "сериал" && genre == "дорама"){
            QStringList items3 = {"Завтра", "Королева Чорин", "Лунные влюбленные/Алые сердца Корё"};
            ui->comboBox_3->addItems(items3);
        }else if(category == "сериал" && genre == "комедия"){
            QStringList items3 = {"Конец нашего мира", "Друзья", "Детство Шелдона"};
            ui->comboBox_3->addItems(items3);
        }else if(category == "сериал" && genre == "милодрама"){
            QStringList items3 = {"Бриджертоны", "Постучись в мою дверь", "Великолепный век"};
            ui->comboBox_3->addItems(items3);
        }else if(category == "сериал" && genre == "ужасы"){
            QStringList items3 = {"Очень странные дела", "Песочный человек", "Ходячие мертвецы"};
            ui->comboBox_3->addItems(items3);
        }else if(category == "мультфильм" && genre == "комедия"){
            QStringList items3 = {"Кун-фу Панда", "Шрек", "Мадагаскар"};
            ui->comboBox_3->addItems(items3);
        }else if(category == "мультфильм" && genre == "милодрама"){
            QStringList items3 = {"Элементарно", "Душа", "Клаус"};
            ui->comboBox_3->addItems(items3);
        }else if(category == "мультфильм" && genre == "ужасы"){
            QStringList items3 = {"Коралина в Стране кошмаров", "Дом-монстр ", "Труп невесты"};
            ui->comboBox_3->addItems(items3);
        }
    }
}

void okno2::startMovie()
{
    if (status == 0){
        QString movieTitle = ui->comboBox_3->currentText();
        if(movieTitle.isEmpty()){
            (QMessageBox::warning(nullptr, "Ошибка", "Пожалуйста, выберите название фильма перед началом просмотра."));
            return;
        }
        homeTheater.watchMovie(movieTitle);
        ui->startMovieButton->setEnabled(false);
        ui->endMovieButton->setEnabled(true);
        status =1;
        ui->comboBox->setEnabled(false);
        ui->comboBox_2->setEnabled(false);
        ui->comboBox_3->setEnabled(false);
    }
}

void okno2::endMovie()
{
    if(status == 1){
        homeTheater.endMovie();
        ui->endMovieButton->setEnabled(false);
        ui->startMovieButton->setEnabled(true);
        status = 0;
        ui->comboBox->setEnabled(true);
        ui->comboBox_2->setEnabled(true);
        ui->comboBox_3->setEnabled(true);
    }

}

