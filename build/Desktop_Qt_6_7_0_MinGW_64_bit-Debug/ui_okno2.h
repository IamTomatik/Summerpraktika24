/********************************************************************************
** Form generated from reading UI file 'okno2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNO2_H
#define UI_OKNO2_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_okno2
{
public:
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget_2;
    QWidget *widget_3;
    QPushButton *pushButton_2;
    QWidget *widget_5;
    QPushButton *startMovieButton;
    QPushButton *endMovieButton;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QPushButton *pushButton_5;

    void setupUi(QDialog *okno2)
    {
        if (okno2->objectName().isEmpty())
            okno2->setObjectName("okno2");
        okno2->resize(330, 580);
        okno2->setMinimumSize(QSize(330, 580));
        okno2->setMaximumSize(QSize(330, 580));
        okno2->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);"));
        widget = new QWidget(okno2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 331, 171));
        widget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(123, 26, 255, 255), stop:1 rgba(187, 28, 226, 255));"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 291, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0,0);\n"
"font: 600 28pt \"Segoe UI Semibold\";\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 331, 61));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0,0);\n"
"font: 600 28pt \"Segoe UI Semibold\";\n"
"color: rgb(255, 255, 255);"));
        widget_2 = new QWidget(okno2);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(-21, 70, 181, 181));
        widget_2->setStyleSheet(QString::fromUtf8("border-radius: 85px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.477, x2:1, y2:0.517045, stop:0 rgba(154, 27, 241, 255), stop:1 rgba(168, 27, 235, 255));"));
        widget_3 = new QWidget(okno2);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(160, 110, 131, 131));
        widget_3->setStyleSheet(QString::fromUtf8("border-radius: 65px;\n"
"background-color: rgb(64, 64, 64);"));
        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 20, 84, 80));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0,0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/kartiki/cinema.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(80, 80));
        widget_5 = new QWidget(okno2);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(290, 140, 41, 161));
        widget_5->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: qlineargradient(spread:pad, x1:0.458, y1:0, x2:0.48, y2:1, stop:0 rgba(184, 28, 227, 255), stop:1 rgba(121, 239, 255, 255));"));
        startMovieButton = new QPushButton(okno2);
        startMovieButton->setObjectName("startMovieButton");
        startMovieButton->setGeometry(QRect(19, 430, 121, 41));
        startMovieButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: rgb(239, 239, 239);"));
        endMovieButton = new QPushButton(okno2);
        endMovieButton->setObjectName("endMovieButton");
        endMovieButton->setGeometry(QRect(160, 430, 121, 41));
        endMovieButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: rgb(239, 239, 239);"));
        comboBox = new QComboBox(okno2);
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 290, 261, 31));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 236, 236);\n"
"color: rgb(43, 43, 43);\n"
"border-radius: 10px;"));
        label_3 = new QLabel(okno2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 230, 281, 61));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0,0);\n"
"font: 600 13pt \"Segoe UI Semibold\";\n"
"color: rgb(255, 255, 255);"));
        comboBox_2 = new QComboBox(okno2);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(20, 330, 261, 31));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 236, 236);\n"
"color: rgb(43, 43, 43);\n"
"border-radius: 10px;"));
        comboBox_3 = new QComboBox(okno2);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(20, 370, 261, 31));
        comboBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 236, 236);\n"
"color: rgb(43, 43, 43);\n"
"border-radius: 10px;"));
        pushButton_5 = new QPushButton(okno2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(90, 490, 121, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: rgb(239, 239, 239);"));
        widget_2->raise();
        widget->raise();
        widget_3->raise();
        widget_5->raise();
        startMovieButton->raise();
        endMovieButton->raise();
        comboBox->raise();
        label_3->raise();
        comboBox_2->raise();
        comboBox_3->raise();
        pushButton_5->raise();

        retranslateUi(okno2);

        QMetaObject::connectSlotsByName(okno2);
    } // setupUi

    void retranslateUi(QDialog *okno2)
    {
        okno2->setWindowTitle(QCoreApplication::translate("okno2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("okno2", "\320\237\321\200\320\270\321\217\321\202\320\275\320\276\320\263\320\276 ", nullptr));
        label_2->setText(QCoreApplication::translate("okno2", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\260", nullptr));
        pushButton_2->setText(QString());
        startMovieButton->setText(QCoreApplication::translate("okno2", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\277\321\200\320\276\321\201\320\274\320\276\321\202\321\200", nullptr));
        endMovieButton->setText(QCoreApplication::translate("okno2", "\320\227\320\260\320\272\320\276\320\275\321\207\320\270\321\202\321\214 \320\277\321\200\320\276\321\201\320\274\320\276\321\202\321\200 ", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("okno2", "\320\222\321\213\320\261\320\270\321\200\320\270\321\202\320\265 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\216", nullptr));

        label_3->setText(QCoreApplication::translate("okno2", "\320\247\321\202\320\276 \320\261\321\203\320\264\320\265\320\274 \321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\201\320\265\320\263\320\276\320\264\320\275\321\217?", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("okno2", "\320\222\321\213\320\261\320\270\321\200\320\270\321\202\320\265 \320\266\320\260\320\275\321\200", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("okno2", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\273\321\217 \320\277\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\260", nullptr));

        pushButton_5->setText(QCoreApplication::translate("okno2", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class okno2: public Ui_okno2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNO2_H
