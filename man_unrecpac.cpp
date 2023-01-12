//
// Created by Administrator on 2022/12/20.
//

#include "man_unrecpac.h"
#include "man_unrecpac_ui.h"
#include "Staff.h"
class Package;

extern Staff staff;
MAN_UnrecPac::MAN_UnrecPac(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::MAN_UnrecPac)
{
    ui->setupUi(this);

    Packagemodel = new QStandardItemModel();
    ui->PackageList->setModel(Packagemodel);
    ui->PackageList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->PackageList->setSelectionBehavior ( QAbstractItemView::SelectRows);
    ui->PackageList->setSelectionMode ( QAbstractItemView::SingleSelection);

    Packagemodel->setColumnCount(7);
    ui->PackageList->setColumnWidth(0,50);
    ui->PackageList->setColumnWidth(1,50);
    ui->PackageList->setColumnWidth(2,100);
    ui->PackageList->setColumnWidth(3,100);
    ui->PackageList->setColumnWidth(4,50);
    ui->PackageList->setColumnWidth(5,100);
    ui->PackageList->setColumnWidth(6,100);
    Packagemodel->setHeaderData(0, Qt::Horizontal, "快递单号");
    Packagemodel->setHeaderData(1, Qt::Horizontal, "收件人");
    Packagemodel->setHeaderData(2, Qt::Horizontal, "手机号");
    Packagemodel->setHeaderData(3, Qt::Horizontal, "地址");
    Packagemodel->setHeaderData(4, Qt::Horizontal, "寄件人");
    Packagemodel->setHeaderData(5, Qt::Horizontal, "手机号");
    Packagemodel->setHeaderData(6, Qt::Horizontal, "地址");

    vector<Package> packlist;
    packlist= staff.QueryUnrecPac();

    Packagemodel->setRowCount(packlist.size());
    for(int i=0;i<packlist.size();i++)
    {
        AddPackList(i,packlist[i].GetID(),packlist[i].GetSender(),packlist[i].GetSenPhone(),packlist[i].GetSenAddress(),
                    packlist[i].GetRecipient(),packlist[i].GetRecPhone(),packlist[i].GetRecAddress());

    }

}

MAN_UnrecPac::~MAN_UnrecPac()
{
    delete ui;
}

void MAN_UnrecPac::on_btn_quit_clicked()
{
    this->close();
}

void
MAN_UnrecPac::AddPackList(int iCurLine, const std::string pstOne, const std::string pstTwo, const std::string pstThree,
                          const std::string pstFour, const std::string pstFive, const std::string pstSix,const std::string pstSeven) {
    Packagemodel->setItem(iCurLine, 0, new QStandardItem(QString::fromStdString(pstOne)));
    Packagemodel->item(iCurLine, 0)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(iCurLine, 1, new QStandardItem(QString::fromStdString(pstTwo)));
    Packagemodel->item(iCurLine, 1)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(iCurLine, 2, new QStandardItem(QString::fromStdString(pstThree)));
    Packagemodel->item(iCurLine, 2)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(iCurLine, 3, new QStandardItem(QString::fromStdString(pstFour)));
    Packagemodel->item(iCurLine, 3)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(iCurLine, 4, new QStandardItem(QString::fromStdString(pstFive)));
    Packagemodel->item(iCurLine, 4)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(iCurLine, 5, new QStandardItem(QString::fromStdString(pstSix)));
    Packagemodel->item(iCurLine, 5)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(iCurLine, 6, new QStandardItem(QString::fromStdString(pstSeven)));
    Packagemodel->item(iCurLine, 6)->setTextAlignment(Qt::AlignCenter);
}
