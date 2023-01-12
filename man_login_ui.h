//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_LOGIN_UI_H
#define EXPRESSMANAGE_MAN_LOGIN_UI_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

using namespace std;
QT_BEGIN_NAMESPACE

class Ui_MAN_login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_ID;
    QLineEdit *lineEdit_Key;
    QPushButton *btn_rec;

    void setupUi(QWidget *MAN_login)
    {
        if (MAN_login->objectName().isEmpty())
            MAN_login->setObjectName(QString::fromUtf8("MAN_login"));
        MAN_login->resize(800, 550);
        MAN_login->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 174, 209,150), stop:1 rgba(53, 245, 255,150));"));
        label = new QLabel(MAN_login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 50, 540, 400));
        label->setMinimumSize(QSize(540, 400));
        label->setMaximumSize(QSize(540, 400));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
                                               "border:2px solid rgb(20,196,188);border-radius:15px;"));
        label_2 = new QLabel(MAN_login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 80, 191, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 25 20pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
                                                 "                                color: rgb(31,31,31);\n"
                                                 "                            	padding-left:20px;\n"
                                                 "                                background-color: rgb(255, 255, 255);"));
        lineEdit_ID = new QLineEdit(MAN_login);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(220, 150, 371, 51));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
                                                     "color: rgb(31,31,31);\n"
                                                     "padding-left:20px;\n"
                                                     " background-color: rgb(255, 255, 255);\n"
                                                     "border:2px solid rgb(20,196,188);border-radius:15px;"));
        lineEdit_ID->setEchoMode(QLineEdit::Normal);
        lineEdit_Key = new QLineEdit(MAN_login);
        lineEdit_Key->setObjectName(QString::fromUtf8("lineEdit_Key"));
        lineEdit_Key->setGeometry(QRect(220, 240, 371, 51));
        lineEdit_Key->setStyleSheet(QString::fromUtf8("font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
                                                      "color: rgb(31,31,31);\n"
                                                      "padding-left:20px;\n"
                                                      " background-color: rgb(255, 255, 255);\n"
                                                      "border:2px solid rgb(20,196,188);border-radius:15px;"));
        lineEdit_Key->setEchoMode(QLineEdit::Normal);
        btn_rec = new QPushButton(MAN_login);
        btn_rec->setObjectName(QString::fromUtf8("btn_rec"));
        btn_rec->setGeometry(QRect(300, 340, 181, 30));
        btn_rec->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                 "border: none;border-radius:15px;}\n"
                                                 "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                 "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                 "\n"
                                                 "\n"
                                                 "\n"
                                                 ""));

        retranslateUi(MAN_login);

        QMetaObject::connectSlotsByName(MAN_login);
    } // setupUi

    void retranslateUi(QWidget *MAN_login)
    {
        MAN_login->setWindowTitle(QCoreApplication::translate("MAN_login", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MAN_login", "LOGIN", nullptr));
        lineEdit_ID->setPlaceholderText(QCoreApplication::translate("MAN_login", "input ID", nullptr));
        lineEdit_Key->setPlaceholderText(QCoreApplication::translate("MAN_login", "input password", nullptr));
        btn_rec->setText(QCoreApplication::translate("MAN_login", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MAN_login: public Ui_MAN_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif //EXPRESSMANAGE_MAN_LOGIN_UI_H
