//
// Created by Administrator on 2022/12/20.
//

#include "man_addnewpac.h"
#include "man_addnewpac_ui.h"
#include<string>
#include <QMessageBox>
#include "Date.h"
#include "Staff.h"

using std::string;
extern Date today;
extern Staff staff;
MAN_addnewpac::MAN_addnewpac(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::MAN_addnewpac)
{
    ui->setupUi(this);
}

MAN_addnewpac::~MAN_addnewpac()
{
    delete ui;
}

void MAN_addnewpac::on_btn_quit_clicked()
{
    this->close();
}

void MAN_addnewpac::on_btn_yes_clicked() {

    QString data=this->ui->textEdit->toPlainText();

    QStringList datalist = data.split(",");
    string ID=datalist.at(0).toStdString();
    string Company=datalist.at(1).toStdString();
    string Recipient=datalist.at(2).toStdString();
    string RecPhone=datalist.at(3).toStdString();
    string RecAddress=datalist.at(4).toStdString();
    string RecZip=datalist.at(5).toStdString();
    string Sender=datalist.at(6).toStdString();
    string SenPhone=datalist.at(7).toStdString();
    string SenAddress=datalist.at(8).toStdString();
    string SenZip=datalist.at(9).toStdString();

    string Dat=today.getDate();
    string State="0";

    staff.AddPackage(ID,Company,Recipient,RecPhone,RecAddress,RecZip,Sender,SenPhone,SenAddress,SenZip,Dat,State);

    QMessageBox::about(NULL,"提示","录入成功");


}
