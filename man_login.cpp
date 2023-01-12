//
// Created by Administrator on 2022/12/20.
//

#include "man_login.h"
#include "man_login_ui.h"
#include <QMessageBox>
#include "Staff.h"
extern mysql_operation db;
extern Staff staff;
MAN_login::MAN_login(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::MAN_login)
{
    ui->setupUi(this);
}

MAN_login::~MAN_login()
{
    delete ui;
}

void MAN_login::on_btn_rec_clicked()
{

    QString ID=this->ui->lineEdit_ID->text();
    QString Key=this->ui->lineEdit_Key->text();
    string s_ID=ID.toStdString();
    string s_Key=Key.toStdString();

    string sql;
    sql="select * from servicestaff where ID="+s_ID;

    MYSQL_RES res=db.mysql_QueryData(sql.data());
    MYSQL_ROW row= mysql_fetch_row(&res);
    if(s_Key==row[2])
    {
        staff.setID(row[0]);staff.setName(row[1]);staff.setPassword(row[2]);
        ui_fun=new MAN_FunctionUI(this) ;
        ui_fun->show();
    }else{
        QMessageBox::about(NULL,"提示","密码错误");
    }


}

