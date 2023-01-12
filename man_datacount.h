//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_DATACOUNT_H
#define EXPRESSMANAGE_MAN_DATACOUNT_H



#include <QWidget>
#include <QStandardItemModel>

namespace Ui {
    class MAN_datacount;
}

class MAN_datacount : public QWidget
{
Q_OBJECT

public:
    explicit MAN_datacount(QWidget *parent = nullptr);
    ~MAN_datacount();

    QStandardItemModel *Packagemodel;

private slots:
    void on_btn_quit_clicked();
    void on_btn_rec_clicked();

private:
    Ui::MAN_datacount *ui;
};


#endif //EXPRESSMANAGE_MAN_DATACOUNT_H
