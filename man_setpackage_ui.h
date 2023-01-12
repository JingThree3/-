//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_SETPACKAGE_UI_H
#define EXPRESSMANAGE_MAN_SETPACKAGE_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAN_setPackage
{
public:
    QPushButton *btn_quit;
    QLabel *label;
    QPushButton *btn_rec;
    QLineEdit *lineEdit_ID;
    QTableView *PackageList;

    void setupUi(QWidget *MAN_setPackage)
    {
        if (MAN_setPackage->objectName().isEmpty())
            MAN_setPackage->setObjectName(QString::fromUtf8("MAN_setPackage"));
        MAN_setPackage->resize(800, 550);
        MAN_setPackage->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 174, 209,150), stop:1 rgba(53, 245, 255,150));\n"
                                                        ""));
        btn_quit = new QPushButton(MAN_setPackage);
        btn_quit->setObjectName(QString::fromUtf8("btn_quit"));
        btn_quit->setGeometry(QRect(570, 480, 131, 30));
        btn_quit->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                  "border: none;border-radius:15px;}\n"
                                                  "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                  "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                  "\n"
                                                  "\n"
                                                  "\n"
                                                  ""));
        label = new QLabel(MAN_setPackage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 700, 500));
        label->setMinimumSize(QSize(700, 500));
        label->setMaximumSize(QSize(700, 500));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
                                               "border:2px solid rgb(20,196,188);border-radius:15px;"));
        btn_rec = new QPushButton(MAN_setPackage);
        btn_rec->setObjectName(QString::fromUtf8("btn_rec"));
        btn_rec->setGeometry(QRect(340, 170, 131, 41));
        btn_rec->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                 "border: none;border-radius:15px;}\n"
                                                 "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                 "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                 "\n"
                                                 "\n"
                                                 "\n"
                                                 ""));
        lineEdit_ID = new QLineEdit(MAN_setPackage);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(130, 80, 531, 51));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
                                                     "color: rgb(31,31,31);\n"
                                                     "padding-left:20px;\n"
                                                     " background-color: rgb(255, 255, 255);\n"
                                                     "border:2px solid rgb(20,196,188);border-radius:15px;"));
        lineEdit_ID->setEchoMode(QLineEdit::Normal);
        PackageList = new QTableView(MAN_setPackage);
        PackageList->setObjectName(QString::fromUtf8("PackageList"));
        PackageList->setGeometry(QRect(120, 260, 550, 171));
        PackageList->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(224, 250, 255), stop:1 rgba(254, 215, 255,50));\n"
                                                     "\n"
                                                     "font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
                                                     "color: rgb(31,31,31);\n"
                                                     "padding-left:20px;\n"
                                                     "border:2px solid rgb(20,196,188);border-radius:15px;\n"
                                                     "\n"
                                                     "\n"
                                                     ""));
        label->raise();
        btn_rec->raise();
        lineEdit_ID->raise();
        btn_quit->raise();
        PackageList->raise();

        retranslateUi(MAN_setPackage);

        QMetaObject::connectSlotsByName(MAN_setPackage);
    } // setupUi

    void retranslateUi(QWidget *MAN_setPackage)
    {
        MAN_setPackage->setWindowTitle(QCoreApplication::translate("MAN_setPackage", "Form", nullptr));
        btn_quit->setText(QCoreApplication::translate("MAN_setPackage", "\350\277\224\345\233\236", nullptr));
        label->setText(QString());
        btn_rec->setText(QCoreApplication::translate("MAN_setPackage", "\346\237\245\350\257\242", nullptr));
        lineEdit_ID->setPlaceholderText(QCoreApplication::translate("MAN_setPackage", "input your PackageID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MAN_setPackage: public Ui_MAN_setPackage {};
} // namespace Ui

QT_END_NAMESPACE

#endif //EXPRESSMANAGE_MAN_SETPACKAGE_UI_H
