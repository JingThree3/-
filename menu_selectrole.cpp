//
// Created by Administrator on 2022/12/8.
//

#include "menu_selectrole.h"
#include "menu_selectrole_ui.h"

Menu_SelectRole::Menu_SelectRole(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::Menu_SelectRole)
{
    this->setWindowFlags(windowFlags() &~ Qt::WindowCloseButtonHint);

    ui->setupUi(this);
}

Menu_SelectRole::~Menu_SelectRole()
{
    delete ui;
}


void Menu_SelectRole::on_btn_manager_clicked()
{
    ui_manlogin=new MAN_login(this) ;
    ui_manlogin->show();
}


void Menu_SelectRole::on_btn_rec_clicked()
{
    ui_recquery=new REC_Query(this);
    ui_recquery->show();
}

