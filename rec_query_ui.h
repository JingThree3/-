//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_REC_QUERY_UI_H
#define EXPRESSMANAGE_REC_QUERY_UI_H


#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_REC_Query
{
public:
    QLabel *label;
    QLineEdit *lineEdit_ID;
    QTableView *PackageList;
    QPushButton *btn_rec;
    QPushButton *btn_quit;

    void setupUi(QWidget *REC_Query)
    {
        if (REC_Query->objectName().isEmpty())
            REC_Query->setObjectName(QString::fromUtf8("REC_Query"));
        REC_Query->resize(800, 550);
        REC_Query->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 174, 209,150), stop:1 rgba(53, 245, 255,150));\n"
                                                   ""));
        label = new QLabel(REC_Query);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 700, 500));
        label->setMinimumSize(QSize(700, 500));
        label->setMaximumSize(QSize(700, 500));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
                                               "border:2px solid rgb(20,196,188);border-radius:15px;"));
        lineEdit_ID = new QLineEdit(REC_Query);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(120, 60, 371, 51));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
                                                     "color: rgb(31,31,31);\n"
                                                     "padding-left:20px;\n"
                                                     " background-color: rgb(255, 255, 255);\n"
                                                     "border:2px solid rgb(20,196,188);border-radius:15px;"));
        lineEdit_ID->setEchoMode(QLineEdit::Normal);
        PackageList = new QTableView(REC_Query);
        PackageList->setObjectName(QString::fromUtf8("PackageList"));
        PackageList->setGeometry(QRect(120, 140, 550, 321));
        PackageList->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(224, 250, 255), stop:1 rgba(254, 215, 255,50));\n"
                                                     "\n"
                                                     "font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
                                                     "color: rgb(31,31,31);\n"
                                                     "padding-left:20px;\n"
                                                     "border:2px solid rgb(20,196,188);border-radius:15px;\n"
                                                     "\n"
                                                     "\n"
                                                     ""));
        btn_rec = new QPushButton(REC_Query);
        btn_rec->setObjectName(QString::fromUtf8("btn_rec"));
        btn_rec->setGeometry(QRect(530, 70, 131, 30));
        btn_rec->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                 "border: none;border-radius:15px;}\n"
                                                 "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                 "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                 "\n"
                                                 "\n"
                                                 "\n"
                                                 ""));
        btn_quit = new QPushButton(REC_Query);
        btn_quit->setObjectName(QString::fromUtf8("btn_quit"));
        btn_quit->setGeometry(QRect(580, 480, 131, 30));
        btn_quit->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                  "border: none;border-radius:15px;}\n"
                                                  "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                  "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                  "\n"
                                                  "\n"
                                                  "\n"
                                                  ""));

        retranslateUi(REC_Query);

        QMetaObject::connectSlotsByName(REC_Query);
    } // setupUi

    void retranslateUi(QWidget *REC_Query)
    {
        REC_Query->setWindowTitle(QCoreApplication::translate("REC_Query", "Form", nullptr));
        label->setText(QString());
        lineEdit_ID->setPlaceholderText(QCoreApplication::translate("REC_Query", "input your phone", nullptr));
        btn_rec->setText(QCoreApplication::translate("REC_Query", "\346\237\245\350\257\242", nullptr));
        btn_quit->setText(QCoreApplication::translate("REC_Query", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class REC_Query: public Ui_REC_Query {};
} // namespace Ui

QT_END_NAMESPACE

#endif //EXPRESSMANAGE_REC_QUERY_UI_H
