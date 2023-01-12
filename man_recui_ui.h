//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_RECUI_UI_H
#define EXPRESSMANAGE_MAN_RECUI_UI_H


#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAN_recUI
{
public:
    QLabel *label;
    QLineEdit *lineEdit_phone;
    QLineEdit *lineEdit_PacID;
    QPushButton *btn_recphone;
    QPushButton *btn_recpackID;
    QTableView *PackageList;
    QPushButton *btn_quit;

    void setupUi(QWidget *MAN_recUI)
    {
        if (MAN_recUI->objectName().isEmpty())
            MAN_recUI->setObjectName(QString::fromUtf8("MAN_recUI"));
        MAN_recUI->resize(800, 550);
        MAN_recUI->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 174, 209,150), stop:1 rgba(53, 245, 255,150));\n"
                                                   ""));
        label = new QLabel(MAN_recUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 700, 500));
        label->setMinimumSize(QSize(700, 500));
        label->setMaximumSize(QSize(700, 500));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
                                               "border:2px solid rgb(20,196,188);border-radius:15px;"));
        lineEdit_phone = new QLineEdit(MAN_recUI);
        lineEdit_phone->setObjectName(QString::fromUtf8("lineEdit_phone"));
        lineEdit_phone->setGeometry(QRect(120, 60, 371, 51));
        lineEdit_phone->setStyleSheet(QString::fromUtf8("font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
                                                        "color: rgb(31,31,31);\n"
                                                        "padding-left:20px;\n"
                                                        " background-color: rgb(255, 255, 255);\n"
                                                        "border:2px solid rgb(20,196,188);border-radius:15px;"));
        lineEdit_phone->setEchoMode(QLineEdit::Normal);
        lineEdit_PacID = new QLineEdit(MAN_recUI);
        lineEdit_PacID->setObjectName(QString::fromUtf8("lineEdit_PacID"));
        lineEdit_PacID->setGeometry(QRect(120, 130, 371, 51));
        lineEdit_PacID->setStyleSheet(QString::fromUtf8("font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
                                                        "color: rgb(31,31,31);\n"
                                                        "padding-left:20px;\n"
                                                        " background-color: rgb(255, 255, 255);\n"
                                                        "border:2px solid rgb(20,196,188);border-radius:15px;"));
        lineEdit_PacID->setEchoMode(QLineEdit::Normal);
        btn_recphone = new QPushButton(MAN_recUI);
        btn_recphone->setObjectName(QString::fromUtf8("btn_recphone"));
        btn_recphone->setGeometry(QRect(560, 70, 131, 30));
        btn_recphone->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                      "border: none;border-radius:15px;}\n"
                                                      "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                      "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                      "\n"
                                                      "\n"
                                                      "\n"
                                                      ""));
        btn_recpackID = new QPushButton(MAN_recUI);
        btn_recpackID->setObjectName(QString::fromUtf8("btn_recpackID"));
        btn_recpackID->setGeometry(QRect(560, 140, 131, 30));
        btn_recpackID->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                       "border: none;border-radius:15px;}\n"
                                                       "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                       "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                       "\n"
                                                       "\n"
                                                       "\n"
                                                       ""));
        PackageList = new QTableView(MAN_recUI);
        PackageList->setObjectName(QString::fromUtf8("PackageList"));
        PackageList->setGeometry(QRect(130, 220, 550, 241));
        PackageList->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(224, 250, 255), stop:1 rgba(254, 215, 255,50));\n"
                                                     "\n"
                                                     "font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
                                                     "color: rgb(31,31,31);\n"
                                                     "padding-left:20px;\n"
                                                     "border:2px solid rgb(20,196,188);border-radius:15px;\n"
                                                     "\n"
                                                     "\n"
                                                     ""));
        btn_quit = new QPushButton(MAN_recUI);
        btn_quit->setObjectName(QString::fromUtf8("btn_quit"));
        btn_quit->setGeometry(QRect(560, 480, 131, 30));
        btn_quit->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                  "border: none;border-radius:15px;}\n"
                                                  "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                  "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                  "\n"
                                                  "\n"
                                                  "\n"
                                                  ""));

        retranslateUi(MAN_recUI);

        QMetaObject::connectSlotsByName(MAN_recUI);
    } // setupUi

    void retranslateUi(QWidget *MAN_recUI)
    {
        MAN_recUI->setWindowTitle(QCoreApplication::translate("MAN_recUI", "Form", nullptr));
        label->setText(QString());
        lineEdit_phone->setPlaceholderText(QCoreApplication::translate("MAN_recUI", "input your phone", nullptr));
        lineEdit_PacID->setPlaceholderText(QCoreApplication::translate("MAN_recUI", "input your ExpressCode", nullptr));
        btn_recphone->setText(QCoreApplication::translate("MAN_recUI", "\346\237\245\350\257\242", nullptr));
        btn_recpackID->setText(QCoreApplication::translate("MAN_recUI", "\346\237\245\350\257\242", nullptr));
        btn_quit->setText(QCoreApplication::translate("MAN_recUI", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MAN_recUI: public Ui_MAN_recUI {};
} // namespace Ui

QT_END_NAMESPACE


#endif //EXPRESSMANAGE_MAN_RECUI_UI_H
