//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_ADDNEWPAC_UI_H
#define EXPRESSMANAGE_MAN_ADDNEWPAC_UI_H


#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAN_addnewpac
{
public:
    QLabel *label;
    QPushButton *btn_quit;
    QTextEdit *textEdit;
    QPushButton *btn_yes;

    void setupUi(QWidget *MAN_addnewpac)
    {
        if (MAN_addnewpac->objectName().isEmpty())
            MAN_addnewpac->setObjectName(QString::fromUtf8("MAN_addnewpac"));
        MAN_addnewpac->resize(800, 550);
        MAN_addnewpac->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 174, 209,150), stop:1 rgba(53, 245, 255,150));"));
        label = new QLabel(MAN_addnewpac);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 700, 500));
        label->setMinimumSize(QSize(700, 500));
        label->setMaximumSize(QSize(700, 500));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
                                               "border:2px solid rgb(20,196,188);border-radius:15px;"));
        btn_quit = new QPushButton(MAN_addnewpac);
        btn_quit->setObjectName(QString::fromUtf8("btn_quit"));
        btn_quit->setGeometry(QRect(560, 460, 131, 30));
        btn_quit->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                  "border: none;border-radius:15px;}\n"
                                                  "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                  "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                  "\n"
                                                  "\n"
                                                  "\n"
                                                  ""));
        textEdit = new QTextEdit(MAN_addnewpac);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(150, 100, 491, 271));
        textEdit->setStyleSheet(QString::fromUtf8("font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
                                                  "color: rgb(31,31,31);\n"
                                                  "padding-left:20px;\n"
                                                  " background-color: rgb(255, 255, 255);\n"
                                                  "border:2px solid rgb(20,196,188);border-radius:15px;"));
        btn_yes = new QPushButton(MAN_addnewpac);
        btn_yes->setObjectName(QString::fromUtf8("btn_yes"));
        btn_yes->setGeometry(QRect(320, 410, 131, 41));
        btn_yes->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                    "border: none;border-radius:15px;}\n"
                                                    "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                    "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                    "\n"
                                                    "\n"
                                                    "\n"
                                                    ""));

        retranslateUi(MAN_addnewpac);

        QMetaObject::connectSlotsByName(MAN_addnewpac);
    } // setupUi

    void retranslateUi(QWidget *MAN_addnewpac)
    {
        MAN_addnewpac->setWindowTitle(QCoreApplication::translate("MAN_addnewpac", "Form", nullptr));
        label->setText(QString());
        btn_quit->setText(QCoreApplication::translate("MAN_addnewpac", "\350\277\224\345\233\236", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("MAN_addnewpac", "\346\240\274\345\274\217\357\274\232 \345\277\253\351\200\222\345\215\225\345\217\267\357\274\214\345\277\253\351\200\222\345\205\254\345\217\270\357\274\214\346\224\266\344\273\266\344\272\272\357\274\214\346\224\266\344\273\266\344\272\272\350\201\224\347\263\273\347\224\265\350\257\235\357\274\214\346\224\266\344\273\266\344\272\272\345\234\260\345\235\200\357\274\214\351\202\256\347\274\226\357\274\214\345\257\204\344\273\266\344\272\272\357\274\214\345\257\204\344\273\266\344\272\272\350\201\224\347\263\273\347\224\265\350\257\235\357\274\214\345\257\204\344\273\266\344\272\272\345\234\260\345\235\200\357\274\214\351\202\256\347\274\226", nullptr));
        btn_yes->setText(QCoreApplication::translate("MAN_addnewpac", "\345\275\225\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MAN_addnewpac: public Ui_MAN_addnewpac {};
} // namespace Ui

QT_END_NAMESPACE


#endif //EXPRESSMANAGE_MAN_ADDNEWPAC_UI_H
