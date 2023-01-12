//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_FUNCTIONUI_UI_H
#define EXPRESSMANAGE_MAN_FUNCTIONUI_UI_H


#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAN_FunctionUI
{
public:
    QLabel *label;
    QPushButton *btn_add;
    QPushButton *btn_rec;
    QPushButton *btn_set;
    QPushButton *btn_unrec;
    QPushButton *btn_data;
    QPushButton *btn_quit;

    void setupUi(QWidget *MAN_FunctionUI)
    {
        if (MAN_FunctionUI->objectName().isEmpty())
            MAN_FunctionUI->setObjectName(QString::fromUtf8("MAN_FunctionUI"));
        MAN_FunctionUI->resize(800, 550);
        MAN_FunctionUI->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 174, 209,150), stop:1 rgba(53, 245, 255,150));"));
        label = new QLabel(MAN_FunctionUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 700, 500));
        label->setMinimumSize(QSize(700, 500));
        label->setMaximumSize(QSize(700, 500));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
                                               "border:2px solid rgb(20,196,188);border-radius:15px;"));
        btn_add = new QPushButton(MAN_FunctionUI);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setGeometry(QRect(150, 150, 160, 40));
        btn_add->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                 "border: none;border-radius:15px;}\n"
                                                 "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                 "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                 "\n"
                                                 "\n"
                                                 ""));
        btn_rec = new QPushButton(MAN_FunctionUI);
        btn_rec->setObjectName(QString::fromUtf8("btn_rec"));
        btn_rec->setGeometry(QRect(460, 150, 160, 40));
        btn_rec->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                 "border: none;border-radius:15px;}\n"
                                                 "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                 "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                 "\n"
                                                 "\n"
                                                 "\n"
                                                 ""));
        btn_set = new QPushButton(MAN_FunctionUI);
        btn_set->setObjectName(QString::fromUtf8("btn_set"));
        btn_set->setGeometry(QRect(150, 270, 160, 40));
        btn_set->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                 "border: none;border-radius:15px;}\n"
                                                 "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                 "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                 "\n"
                                                 "\n"
                                                 ""));
        btn_unrec = new QPushButton(MAN_FunctionUI);
        btn_unrec->setObjectName(QString::fromUtf8("btn_unrec"));
        btn_unrec->setGeometry(QRect(460, 270, 160, 40));
        btn_unrec->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                   "border: none;border-radius:15px;}\n"
                                                   "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                   "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                   "\n"
                                                   "\n"
                                                   ""));
        btn_data = new QPushButton(MAN_FunctionUI);
        btn_data->setObjectName(QString::fromUtf8("btn_data"));
        btn_data->setGeometry(QRect(150, 390, 160, 40));
        btn_data->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                  "border: none;border-radius:15px;}\n"
                                                  "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                  "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                  "\n"
                                                  "\n"
                                                  ""));
        btn_quit = new QPushButton(MAN_FunctionUI);
        btn_quit->setObjectName(QString::fromUtf8("btn_quit"));
        btn_quit->setGeometry(QRect(460, 390, 160, 40));
        btn_quit->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                  "border: none;border-radius:15px;}\n"
                                                  "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                  "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                  "\n"
                                                  "\n"
                                                  ""));

        retranslateUi(MAN_FunctionUI);

        QMetaObject::connectSlotsByName(MAN_FunctionUI);
    } // setupUi

    void retranslateUi(QWidget *MAN_FunctionUI)
    {
        MAN_FunctionUI->setWindowTitle(QCoreApplication::translate("MAN_FunctionUI", "Form", nullptr));
        label->setText(QString());
        btn_add->setText(QCoreApplication::translate("MAN_FunctionUI", "\345\275\225\345\205\245\345\277\253\344\273\266", nullptr));
        btn_rec->setText(QCoreApplication::translate("MAN_FunctionUI", "\346\240\207\350\256\260\345\217\226\344\273\266", nullptr));
        btn_set->setText(QCoreApplication::translate("MAN_FunctionUI", "\344\277\256\346\224\271\345\277\253\344\273\266", nullptr));
        btn_unrec->setText(QCoreApplication::translate("MAN_FunctionUI", "\346\234\252\345\217\226\345\277\253\344\273\266", nullptr));
        btn_data->setText(QCoreApplication::translate("MAN_FunctionUI", "\346\227\245\346\234\237\347\273\237\350\256\241", nullptr));
        btn_quit->setText(QCoreApplication::translate("MAN_FunctionUI", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MAN_FunctionUI: public Ui_MAN_FunctionUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif //EXPRESSMANAGE_MAN_FUNCTIONUI_UI_H
