//
// Created by Administrator on 2022/12/20.
//

#include "man_datacount.h"
#include "man_datacount_ui.h"
#include "Package.h"
#include <string>
#include "Staff.h"
using std::string;
extern vector<Package> package;
extern Staff staff;
MAN_datacount::MAN_datacount(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::MAN_datacount)
{
    ui->setupUi(this);

    Packagemodel = new QStandardItemModel();
    ui->PackageList->setModel(Packagemodel);
    ui->PackageList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->PackageList->setSelectionBehavior ( QAbstractItemView::SelectRows);
    ui->PackageList->setSelectionMode ( QAbstractItemView::SingleSelection);

    Packagemodel->setColumnCount(4);
    ui->PackageList->setColumnWidth(0,120);
    ui->PackageList->setColumnWidth(1,120);
    ui->PackageList->setColumnWidth(2,120);
    ui->PackageList->setColumnWidth(3,120);
    Packagemodel->setHeaderData(0, Qt::Horizontal, " ");
    Packagemodel->setHeaderData(1, Qt::Horizontal, "收件量");
    Packagemodel->setHeaderData(2, Qt::Horizontal, "取件量");
    Packagemodel->setHeaderData(3, Qt::Horizontal, "未取件量");
//圆通 申通 中通 韵达 极兔
    Packagemodel->setRowCount(7);
    Packagemodel->setItem(0, 0, new QStandardItem(QString::fromStdString("圆通")));
    Packagemodel->item(0, 0)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(1, 0, new QStandardItem(QString::fromStdString("申通")));
    Packagemodel->item(1, 0)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(2, 0, new QStandardItem(QString::fromStdString("中通")));
    Packagemodel->item(2, 0)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(3, 0, new QStandardItem(QString::fromStdString("韵达")));
    Packagemodel->item(3, 0)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(4, 0, new QStandardItem(QString::fromStdString("极兔")));
    Packagemodel->item(4, 0)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(6, 0, new QStandardItem(QString::fromStdString("当天收件量")));
    Packagemodel->item(6, 0)->setTextAlignment(Qt::AlignCenter);
}

MAN_datacount::~MAN_datacount()
{
    delete ui;
}

void MAN_datacount::on_btn_quit_clicked()
{
    this->close();
}

void MAN_datacount::on_btn_rec_clicked() {
    QString datein=this->ui->lineEdit_ID->text();
    string s_datein=datein.toStdString();

    staff.UpdatePacList();
    int sumtoday=0;
    //圆通 申通 中通 韵达 极兔
    int YTsum=0;int STsum=0;int ZTsum=0;int YDsum=0;int JTsum=0;
    int YTrec=0;int STrec=0;int ZTrec=0;int YDrec=0;int JTrec=0;
    int YTun=0;int STun=0;int ZTun=0;int YDun=0;int JTun=0;
    for(int i=0;i<package.size();i++)
    {
        if(package[i].GetDate()==s_datein)
        {
            sumtoday++;
            if(package[i].GetExpressCompany()=="圆通")
            {
                YTsum++;
                if(package[i].GetState()=="1")
                    YTrec++;
                else
                    YTun++;
            }
            else if(package[i].GetExpressCompany()=="申通")
            {
                STsum++;
                if(package[i].GetState()=="1")
                    STrec++;
                else
                    STun++;
            }
            else if(package[i].GetExpressCompany()=="中通")
            {
                ZTsum++;
                if(package[i].GetState()=="1")
                    ZTrec++;
                else ZTun++;
            }
            else if(package[i].GetExpressCompany()=="韵达")
            {
                YDsum++;
                if(package[i].GetState()=="1")
                    YDrec++;
                else YDun++;
            }
            else if(package[i].GetExpressCompany()=="极兔")
            {
                JTsum++;
                if(package[i].GetState()=="1")
                    JTrec++;
                else JTun++;
            }
        }

    }
            //printf("%d-%d\n",sumtoday,YTsum);
    Packagemodel->setItem(0, 1, new QStandardItem(QString::fromStdString(to_string(YTsum))));
    Packagemodel->item(0, 1)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(0, 2, new QStandardItem(QString::fromStdString(to_string(YTrec))));
    Packagemodel->item(0, 2)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(0, 3, new QStandardItem(QString::fromStdString(to_string(YTun))));
    Packagemodel->item(0, 3)->setTextAlignment(Qt::AlignCenter);

    Packagemodel->setItem(1, 1, new QStandardItem(QString::fromStdString(to_string(STsum))));
    Packagemodel->item(1, 1)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(1, 2, new QStandardItem(QString::fromStdString(to_string(STrec))));
    Packagemodel->item(1, 2)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(1, 3, new QStandardItem(QString::fromStdString(to_string(STun))));
    Packagemodel->item(1, 3)->setTextAlignment(Qt::AlignCenter);

    Packagemodel->setItem(2, 1, new QStandardItem(QString::fromStdString(to_string(ZTsum))));
    Packagemodel->item(2, 1)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(2, 2, new QStandardItem(QString::fromStdString(to_string(ZTrec))));
    Packagemodel->item(2, 2)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(2, 3, new QStandardItem(QString::fromStdString(to_string(ZTun))));
    Packagemodel->item(2, 3)->setTextAlignment(Qt::AlignCenter);

    Packagemodel->setItem(3, 1, new QStandardItem(QString::fromStdString(to_string(YDsum))));
    Packagemodel->item(3, 1)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(3, 2, new QStandardItem(QString::fromStdString(to_string(YDrec))));
    Packagemodel->item(3, 2)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(3, 3, new QStandardItem(QString::fromStdString(to_string(YDun))));
    Packagemodel->item(3, 3)->setTextAlignment(Qt::AlignCenter);

    Packagemodel->setItem(4, 1, new QStandardItem(QString::fromStdString(to_string(JTsum))));
    Packagemodel->item(4, 1)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(4, 2, new QStandardItem(QString::fromStdString(to_string(JTrec))));
    Packagemodel->item(4, 2)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(4, 3, new QStandardItem(QString::fromStdString(to_string(JTun))));
    Packagemodel->item(4, 3)->setTextAlignment(Qt::AlignCenter);

    Packagemodel->setItem(6, 1, new QStandardItem(QString::fromStdString(to_string(sumtoday))));
    Packagemodel->item(6, 1)->setTextAlignment(Qt::AlignCenter);


}

