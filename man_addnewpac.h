//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_ADDNEWPAC_H
#define EXPRESSMANAGE_MAN_ADDNEWPAC_H



#include <QWidget>

namespace Ui {
    class MAN_addnewpac;
}

class MAN_addnewpac : public QWidget
{
Q_OBJECT

public:
    explicit MAN_addnewpac(QWidget *parent = nullptr);
    ~MAN_addnewpac();

private slots:
    void on_btn_quit_clicked();
    void on_btn_yes_clicked();

private:
    Ui::MAN_addnewpac *ui;
};

#endif //EXPRESSMANAGE_MAN_ADDNEWPAC_H
