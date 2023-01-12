//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_SETPACKAGE_H
#define EXPRESSMANAGE_MAN_SETPACKAGE_H


#include <QWidget>
#include<QStandardItemModel>
#include <QPushButton>

namespace Ui {
    class MAN_setPackage;
}

class MAN_setPackage : public QWidget
{
Q_OBJECT

public:
    explicit MAN_setPackage(QWidget *parent = nullptr);
    ~MAN_setPackage();

    QStandardItemModel *Packagemodel;
    QPushButton *btn_Set[3];
    QPushButton *btn_Del[3];

    void AddPackList(int iCurLine, const std::string pstOne, const std::string pstTwo, const std::string pstThree);

        private slots:
    void on_btn_quit_clicked();
    void on_btn_rec_clicked();
    void SetPac();
    void DelPec();

private:
    Ui::MAN_setPackage *ui;
};

#endif //EXPRESSMANAGE_MAN_SETPACKAGE_H
