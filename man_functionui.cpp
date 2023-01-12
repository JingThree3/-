//
// Created by Administrator on 2022/12/20.
//

#include "man_functionui.h"
#include "man_functionui_ui.h"
#include "System.h"
MAN_FunctionUI::MAN_FunctionUI(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::MAN_FunctionUI)
{
    ui->setupUi(this);
}

MAN_FunctionUI::~MAN_FunctionUI()
{
    delete ui;
}

void MAN_FunctionUI::on_btn_quit_clicked()
{
    System sys;
    sys.SavePackageInfo();

    QApplication* app;
    app->quit();
}


void MAN_FunctionUI::on_btn_rec_clicked()
{
    recui=new MAN_recUI(this);
    recui->show();
}


void MAN_FunctionUI::on_btn_set_clicked()
{
    setui=new MAN_setPackage(this);
    setui->show();
}


void MAN_FunctionUI::on_btn_unrec_clicked()
{
    unrecui=new MAN_UnrecPac(this);
    unrecui->show();

}


void MAN_FunctionUI::on_btn_data_clicked()
{
    dataui=new MAN_datacount(this);
    dataui->show();
}


void MAN_FunctionUI::on_btn_add_clicked()
{
    addui=new MAN_addnewpac(this);
    addui->show();
}
