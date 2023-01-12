//
// Created by Administrator on 2022/12/20.
//

#ifndef EXPRESSMANAGE_MAN_UNRECPAC_H
#define EXPRESSMANAGE_MAN_UNRECPAC_H



#include <QWidget>
#include<QStandardItemModel>
#include <vector>


//using namespace std;
namespace Ui {
    class MAN_UnrecPac;
}

class MAN_UnrecPac : public QWidget
{
Q_OBJECT

public:
    explicit MAN_UnrecPac(QWidget *parent = nullptr);
    ~MAN_UnrecPac();

    QStandardItemModel *Packagemodel;

    void AddPackList(int iCurLine, const std::string pstOne, const std::string pstTwo, const std::string pstThree
    ,const std::string pstFour,const std::string pstFive,const std::string pstSix,const std::string pstSeven);

private slots:
    void on_btn_quit_clicked();

private:
    Ui::MAN_UnrecPac *ui;
};


#endif //EXPRESSMANAGE_MAN_UNRECPAC_H
