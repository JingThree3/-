//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_REC_QUERY_H
#define EXPRESSMANAGE_REC_QUERY_H



#include <QWidget>
#include<QStandardItemModel>
#include <string>

using std::string;

namespace Ui {
    class REC_Query;
}

class REC_Query : public QWidget
{
Q_OBJECT

public:
    explicit REC_Query(QWidget *parent = nullptr);
    ~REC_Query();

    QStandardItemModel *Packagemodel;

    void AddPackList(int iCurLine, const string pstOne, const string pstTwo,const string pstThree);

private slots:
    void on_btn_quit_clicked();
    void on_btn_rec_clicked();//通过手机号查询快件

private:
    Ui::REC_Query *ui;
};


#endif //EXPRESSMANAGE_REC_QUERY_H
