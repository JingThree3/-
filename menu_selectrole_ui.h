//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MENU_SELECTROLE_UI_H
#define EXPRESSMANAGE_MENU_SELECTROLE_UI_H


#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu_SelectRole
{
public:
    QWidget *UI_Select;
    QLabel *label;
    QPushButton *btn_rec;
    QPushButton *btn_manager;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu_SelectRole)
    {
        if (Menu_SelectRole->objectName().isEmpty())
            Menu_SelectRole->setObjectName(QString::fromUtf8("Menu_SelectRole"));
        Menu_SelectRole->resize(800, 552);
        Menu_SelectRole->setMinimumSize(QSize(800, 550));
        Menu_SelectRole->setMaximumSize(QSize(800, 552));
        Menu_SelectRole->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 174, 209,150), stop:1 rgba(53, 245, 255,150));\n"
                                                         ""));
        UI_Select = new QWidget(Menu_SelectRole);
        UI_Select->setObjectName(QString::fromUtf8("UI_Select"));
        UI_Select->setMinimumSize(QSize(800, 500));
        UI_Select->setMaximumSize(QSize(800, 500));
        label = new QLabel(UI_Select);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 50, 540, 400));
        label->setMinimumSize(QSize(540, 400));
        label->setMaximumSize(QSize(540, 400));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
                                               "border:2px solid rgb(20,196,188);border-radius:15px;"));
        btn_rec = new QPushButton(UI_Select);
        btn_rec->setObjectName(QString::fromUtf8("btn_rec"));
        btn_rec->setGeometry(QRect(240, 170, 301, 30));
        btn_rec->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                 "border: none;border-radius:15px;}\n"
                                                 "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                 "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                 "\n"
                                                 "\n"
                                                 "\n"
                                                 ""));
        btn_manager = new QPushButton(UI_Select);
        btn_manager->setObjectName(QString::fromUtf8("btn_manager"));
        btn_manager->setGeometry(QRect(240, 280, 301, 30));
        btn_manager->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                     "border: none;border-radius:15px;}\n"
                                                     "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                     "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                     ""));
        Menu_SelectRole->setCentralWidget(UI_Select);
        menubar = new QMenuBar(Menu_SelectRole);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        Menu_SelectRole->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu_SelectRole);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Menu_SelectRole->setStatusBar(statusbar);

        retranslateUi(Menu_SelectRole);

        QMetaObject::connectSlotsByName(Menu_SelectRole);
    } // setupUi

    void retranslateUi(QMainWindow *Menu_SelectRole)
    {
        Menu_SelectRole->setWindowTitle(QCoreApplication::translate("Menu_SelectRole", "\345\277\253\344\273\266\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QString());
        btn_rec->setText(QCoreApplication::translate("Menu_SelectRole", "\346\224\266\344\273\266\344\272\272", nullptr));
        btn_manager->setText(QCoreApplication::translate("Menu_SelectRole", "\347\256\241\347\220\206\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu_SelectRole: public Ui_Menu_SelectRole {};
} // namespace Ui

QT_END_NAMESPACE



#endif //EXPRESSMANAGE_MENU_SELECTROLE_UI_H
