//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_RECUI_H
#define EXPRESSMANAGE_MAN_RECUI_H


#include <QWidget>
#include<QStandardItemModel>
#include <QPushButton>



namespace Ui {
    class MAN_recUI;
}

class MAN_recUI : public QWidget
{
Q_OBJECT

public:
    explicit MAN_recUI(QWidget *parent = nullptr);
    ~MAN_recUI();

    QStandardItemModel *Packagemodel;
    QPushButton *btn_YesRec[30];



    void AddPackList(int iCurLine, const std::string pstOne, const std::string pstTwo, const std::string pstThree);
private slots:
    void on_btn_quit_clicked();
    void on_btn_recphone_clicked();
    void on_btn_recpackID_clicked();
    void YesRec();
private:
    Ui::MAN_recUI *ui;
};


#endif //EXPRESSMANAGE_MAN_RECUI_H
