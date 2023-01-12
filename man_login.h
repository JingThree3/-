//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_LOGIN_H
#define EXPRESSMANAGE_MAN_LOGIN_H
//#include <mysqld.h>
#include "mysql_operation.h"
#include"man_functionui.h"

#include <QWidget>

namespace Ui {
    class MAN_login;
}

class MAN_login : public QWidget
{
Q_OBJECT

public:
    explicit MAN_login(QWidget *parent = nullptr);
    ~MAN_login();

private slots:
    void on_btn_rec_clicked();

private:
    Ui::MAN_login *ui;

    MAN_FunctionUI* ui_fun;
};

#endif //EXPRESSMANAGE_MAN_LOGIN_H
