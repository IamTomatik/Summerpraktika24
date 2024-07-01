/********************************************************************************
** Form generated from reading UI file 'okno4.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNO4_H
#define UI_OKNO4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_okno4
{
public:
    QWidget *widget;
    QWidget *widget_2;
    QWidget *widget_4;
    QPushButton *pushButton;
    QWidget *widget_7;
    QWidget *widget_8;
    QWidget *widget_5;
    QWidget *widget_6;
    QWidget *widget_3;
    QPushButton *pushButton_3;

    void setupUi(QDialog *okno4)
    {
        if (okno4->objectName().isEmpty())
            okno4->setObjectName("okno4");
        okno4->resize(329, 451);
        okno4->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);"));
        widget = new QWidget(okno4);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 20, 281, 401));
        widget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(123, 26, 255, 255), stop:1 rgba(187, 28, 226, 255));\n"
"border-radius: 40px;"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(-70, 41, 241, 50));
        widget_2->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: rgb(64, 64, 64);"));
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(70, 0, 31, 51));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);"));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 0, 181, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 700 16pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 0,0);\n"
"color: rgb(253, 253, 253);"));
        pushButton->setAutoDefault(false);
        widget_7 = new QWidget(widget);
        widget_7->setObjectName("widget_7");
        widget_7->setGeometry(QRect(0, 90, 71, 31));
        widget_7->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);"));
        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName("widget_8");
        widget_8->setGeometry(QRect(0, 1, 101, 51));
        widget_8->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: rgb(139, 27, 248);\n"
""));
        widget_5 = new QWidget(widget);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(0, 10, 61, 51));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);"));
        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(20, 30, 120, 51));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(0, 0, 161, 41));
        widget_3->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: rgb(142, 27, 246);\n"
""));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(80, 340, 121, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: rgb(239, 239, 239);"));

        retranslateUi(okno4);

        QMetaObject::connectSlotsByName(okno4);
    } // setupUi

    void retranslateUi(QDialog *okno4)
    {
        okno4->setWindowTitle(QCoreApplication::translate("okno4", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("okno4", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265", nullptr));
        pushButton_3->setText(QCoreApplication::translate("okno4", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class okno4: public Ui_okno4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNO4_H
