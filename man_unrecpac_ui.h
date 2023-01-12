//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_UNRECPAC_UI_H
#define EXPRESSMANAGE_MAN_UNRECPAC_UI_H


#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAN_UnrecPac
{
public:
    QPushButton *btn_quit;
    QTableView *PackageList;
    QLabel *label;

    void setupUi(QWidget *MAN_UnrecPac)
    {
        if (MAN_UnrecPac->objectName().isEmpty())
            MAN_UnrecPac->setObjectName(QString::fromUtf8("MAN_UnrecPac"));
        MAN_UnrecPac->resize(800, 550);
        MAN_UnrecPac->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 174, 209,150), stop:1 rgba(53, 245, 255,150));"));
        btn_quit = new QPushButton(MAN_UnrecPac);
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
        PackageList = new QTableView(MAN_UnrecPac);
        PackageList->setObjectName(QString::fromUtf8("PackageList"));
        PackageList->setGeometry(QRect(90, 60, 621, 401));
        PackageList->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(224, 250, 255), stop:1 rgba(254, 215, 255,50));\n"
                                                     "\n"
                                                     "font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
                                                     "color: rgb(31,31,31);\n"
                                                     "padding-left:20px;\n"
                                                     "border:2px solid rgb(20,196,188);border-radius:15px;\n"
                                                     "\n"
                                                     "\n"
                                                     ""));
        label = new QLabel(MAN_UnrecPac);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 700, 500));
        label->setMinimumSize(QSize(700, 500));
        label->setMaximumSize(QSize(700, 500));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
                                               "border:2px solid rgb(20,196,188);border-radius:15px;"));
        label->raise();
        btn_quit->raise();
        PackageList->raise();

        retranslateUi(MAN_UnrecPac);

        QMetaObject::connectSlotsByName(MAN_UnrecPac);
    } // setupUi

    void retranslateUi(QWidget *MAN_UnrecPac)
    {
        MAN_UnrecPac->setWindowTitle(QCoreApplication::translate("MAN_UnrecPac", "Form", nullptr));
        btn_quit->setText(QCoreApplication::translate("MAN_UnrecPac", "\350\277\224\345\233\236", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MAN_UnrecPac: public Ui_MAN_UnrecPac {};
} // namespace Ui

QT_END_NAMESPACE

#endif //EXPRESSMANAGE_MAN_UNRECPAC_UI_H
