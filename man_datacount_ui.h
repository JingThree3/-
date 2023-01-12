//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_DATACOUNT_UI_H
#define EXPRESSMANAGE_MAN_DATACOUNT_UI_H


#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAN_datacount
{
public:
    QPushButton *btn_quit;
    QLabel *label;
    QPushButton *btn_rec;
    QLineEdit *lineEdit_ID;
    QTableView *PackageList;

    void setupUi(QWidget *MAN_datacount)
    {
        if (MAN_datacount->objectName().isEmpty())
            MAN_datacount->setObjectName(QString::fromUtf8("MAN_datacount"));
        MAN_datacount->resize(800, 550);
        MAN_datacount->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 174, 209,150), stop:1 rgba(53, 245, 255,150));"));
        btn_quit = new QPushButton(MAN_datacount);
        btn_quit->setObjectName(QString::fromUtf8("btn_quit"));
        btn_quit->setGeometry(QRect(580, 490, 131, 30));
        btn_quit->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                  "border: none;border-radius:15px;}\n"
                                                  "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                  "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                  "\n"
                                                  "\n"
                                                  "\n"
                                                  ""));
        label = new QLabel(MAN_datacount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 700, 500));
        label->setMinimumSize(QSize(700, 500));
        label->setMaximumSize(QSize(700, 500));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
                                               "border:2px solid rgb(20,196,188);border-radius:15px;"));
        btn_rec = new QPushButton(MAN_datacount);
        btn_rec->setObjectName(QString::fromUtf8("btn_rec"));
        btn_rec->setGeometry(QRect(530, 80, 131, 30));
        btn_rec->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                 "border: none;border-radius:15px;}\n"
                                                 "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                 "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                 "\n"
                                                 "\n"
                                                 "\n"
                                                 ""));
        lineEdit_ID = new QLineEdit(MAN_datacount);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(120, 70, 371, 51));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
                                                     "color: rgb(31,31,31);\n"
                                                     "padding-left:20px;\n"
                                                     " background-color: rgb(255, 255, 255);\n"
                                                     "border:2px solid rgb(20,196,188);border-radius:15px;"));
        lineEdit_ID->setEchoMode(QLineEdit::Normal);
        PackageList = new QTableView(MAN_datacount);
        PackageList->setObjectName(QString::fromUtf8("PackageList"));
        PackageList->setGeometry(QRect(120, 150, 550, 321));
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
        btn_quit->raise();
        lineEdit_ID->raise();
        PackageList->raise();

        retranslateUi(MAN_datacount);

        QMetaObject::connectSlotsByName(MAN_datacount);
    } // setupUi

    void retranslateUi(QWidget *MAN_datacount)
    {
        MAN_datacount->setWindowTitle(QCoreApplication::translate("MAN_datacount", "Form", nullptr));
        btn_quit->setText(QCoreApplication::translate("MAN_datacount", "\350\277\224\345\233\236", nullptr));
        label->setText(QString());
        btn_rec->setText(QCoreApplication::translate("MAN_datacount", "\346\237\245\350\257\242", nullptr));
        lineEdit_ID->setPlaceholderText(QCoreApplication::translate("MAN_datacount", "input Data(20xx12xx)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MAN_datacount: public Ui_MAN_datacount {};
} // namespace Ui

QT_END_NAMESPACE


#endif //EXPRESSMANAGE_MAN_DATACOUNT_UI_H
