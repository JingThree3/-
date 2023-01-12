//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_FUNCTIONUI_H
#define EXPRESSMANAGE_MAN_FUNCTIONUI_H


#include <QWidget>
#include"man_datacount.h"
#include"man_recui.h"
#include"man_setpackage.h"
#include"man_unrecpac.h"
#include"man_addnewpac.h"

namespace Ui {
    class MAN_FunctionUI;
}

class MAN_FunctionUI : public QWidget
{
Q_OBJECT

public:
    explicit MAN_FunctionUI(QWidget *parent = nullptr);
    ~MAN_FunctionUI() override;

private slots:
    void on_btn_quit_clicked();

    void on_btn_rec_clicked();

    void on_btn_set_clicked();

    void on_btn_unrec_clicked();

    void on_btn_data_clicked();

    void on_btn_add_clicked();

private:
    Ui::MAN_FunctionUI *ui;

    MAN_datacount *dataui{};
    MAN_recUI *recui{};
    MAN_setPackage *setui{};
    MAN_UnrecPac *unrecui{};
    MAN_addnewpac *addui{};
};


#endif //EXPRESSMANAGE_MAN_FUNCTIONUI_H
