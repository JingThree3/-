//
// Created by Administrator on 2022/12/20.
//

#include "rec_query.h"
#include "rec_query_ui.h"
#include "Package.h"
#include <QMessageBox>
extern vector<Package> package;
REC_Query::REC_Query(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::REC_Query)
{
    ui->setupUi(this);

    Packagemodel = new QStandardItemModel();
    ui->PackageList->setModel(Packagemodel);
    ui->PackageList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->PackageList->setSelectionBehavior ( QAbstractItemView::SelectRows);
    ui->PackageList->setSelectionMode ( QAbstractItemView::SingleSelection);

    Packagemodel->setColumnCount(3);
    ui->PackageList->setColumnWidth(0,290);
    ui->PackageList->setColumnWidth(1,100);
    ui->PackageList->setColumnWidth(2,100);
    Packagemodel->setHeaderData(0, Qt::Horizontal, "快递单号");
    Packagemodel->setHeaderData(1, Qt::Horizontal, "取件号");
    Packagemodel->setHeaderData(2, Qt::Horizontal, "是否取件");

}

REC_Query::~REC_Query()
{
    delete ui;
}

void REC_Query::on_btn_quit_clicked()
{
    QApplication* app;
    app->quit();
}
//通过手机号查询快件
void REC_Query::on_btn_rec_clicked() {
    QString phone=this->ui->lineEdit_ID->text();
    string s_phone=phone.toStdString();

    vector<Package> packlist;
    int flag=0;
    for(int i=0;i<package.size();i++)
    {
        if(package[i].GetRecPhone()==s_phone)
        {
            packlist.push_back(package[i]);
            flag=1;
        }
    }
    if(flag==0)
        QMessageBox::about(NULL,"提示","未找到相关数据");

    Packagemodel->setRowCount(packlist.size());
    for(int i=0;i<packlist.size();i++)
    {
        string state;
        if(packlist[i].GetState()=="0")
            state="否";
        else
            state="是";
        AddPackList(i,packlist[i].GetID(),packlist[i].GetSearchID(),state);

    }

}

void
REC_Query::AddPackList(int iCurLine, const std::string pstOne, const std::string pstTwo, const std::string pstThree) {

    Packagemodel->setItem(iCurLine, 0, new QStandardItem(QString::fromStdString(pstOne)));
    Packagemodel->item(iCurLine, 0)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(iCurLine, 1, new QStandardItem(QString::fromStdString(pstTwo)));
    Packagemodel->item(iCurLine, 1)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(iCurLine, 2, new QStandardItem(QString::fromStdString(pstThree)));
    Packagemodel->item(iCurLine, 2)->setTextAlignment(Qt::AlignCenter);
}
