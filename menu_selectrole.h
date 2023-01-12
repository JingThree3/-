//
// Created by Administrator on 2022/12/8.
//

#ifndef EXPRESSMANAGE_MENU_SELECTROLE_H
#define EXPRESSMANAGE_MENU_SELECTROLE_H



#include <QMainWindow>
#include"man_login.h"
#include"rec_query.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Menu_SelectRole; }
QT_END_NAMESPACE

class Menu_SelectRole : public QMainWindow
{
Q_OBJECT

public:
    Menu_SelectRole(QWidget *parent = nullptr);
    ~Menu_SelectRole();

private slots:
    void on_btn_manager_clicked();

    void on_btn_rec_clicked();

private:
    Ui::Menu_SelectRole *ui;

    MAN_login *ui_manlogin;
    REC_Query *ui_recquery;


};

#endif //EXPRESSMANAGE_MENU_SELECTROLE_H
