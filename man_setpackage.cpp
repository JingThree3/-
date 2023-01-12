//
// Created by Administrator on 2022/12/20.
//

#include "man_setpackage.h"
#include "man_setpackage_ui.h"
#include <string>
#include <QInputDialog>
#include <sstream>
#include "Staff.h"
#include "Package.h"
using std::string;
extern Staff staff;
extern Date today;
extern vector<Package> packlist;
MAN_setPackage::MAN_setPackage(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::MAN_setPackage)
{
    ui->setupUi(this);

    Packagemodel = new QStandardItemModel();
    ui->PackageList->setModel(Packagemodel);
    ui->PackageList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->PackageList->setSelectionBehavior ( QAbstractItemView::SelectRows);
    ui->PackageList->setSelectionMode ( QAbstractItemView::SingleSelection);

    Packagemodel->setColumnCount(5);
    ui->PackageList->setColumnWidth(0,50);
    ui->PackageList->setColumnWidth(1,100);
    ui->PackageList->setColumnWidth(2,150);
    ui->PackageList->setColumnWidth(3,100);
    ui->PackageList->setColumnWidth(4,100);
    Packagemodel->setHeaderData(0, Qt::Horizontal, "单号");
    Packagemodel->setHeaderData(1, Qt::Horizontal, "收件人");
    Packagemodel->setHeaderData(2, Qt::Horizontal, "地址");
    Packagemodel->setHeaderData(3, Qt::Horizontal, " ");
    Packagemodel->setHeaderData(4, Qt::Horizontal, " ");
}

MAN_setPackage::~MAN_setPackage()
{
    delete ui;
}

void MAN_setPackage::on_btn_quit_clicked()
{
    this->close();
}

void MAN_setPackage::on_btn_rec_clicked() {

    QString ID=this->ui->lineEdit_ID->text();
    string s_ID=ID.toStdString();

    packlist.clear();
    packlist= staff.SearchPacid(s_ID);
    Packagemodel->setRowCount(packlist.size());

    for(int i=0;i<packlist.size();i++)
    {
        AddPackList(i,packlist[i].GetID(),packlist[i].GetSender(),packlist[i].GetSenAddress());

        btn_Set[i]=new QPushButton();
        btn_Set[i]->setText("修改");
        ui->PackageList->setIndexWidget(Packagemodel->index(i, 3), btn_Set[i]);
        btn_Set[i]->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                       "border: none;border-radius:15px;}\n"
                                                       "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                       "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                       "\n"
                                                       "\n"
                                                       "\n"
                                                       ""));
        connect(btn_Set[i], SIGNAL(clicked()), this, SLOT(SetPac()));

        btn_Del[i]=new QPushButton();
        btn_Del[i]->setText("删除");
        ui->PackageList->setIndexWidget(Packagemodel->index(i, 4), btn_Del[i]);
        btn_Del[i]->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                    "border: none;border-radius:15px;}\n"
                                                    "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                    "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                    "\n"
                                                    "\n"
                                                    "\n"
                                                    ""));
        connect(btn_Del[i], SIGNAL(clicked()), this, SLOT(DelPec()));

    }


}

void MAN_setPackage::AddPackList(int iCurLine, const std::string pstOne, const std::string pstTwo,
                                 const std::string pstThree) {
    Packagemodel->setItem(iCurLine, 0, new QStandardItem(QString::fromStdString(pstOne)));
    Packagemodel->item(iCurLine, 0)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(iCurLine, 1, new QStandardItem(QString::fromStdString(pstTwo)));
    Packagemodel->item(iCurLine, 1)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(iCurLine, 2, new QStandardItem(QString::fromStdString(pstThree)));
    Packagemodel->item(iCurLine, 2)->setTextAlignment(Qt::AlignCenter);

}

void MAN_setPackage::SetPac() {

    int icur;
    QPushButton *btn = qobject_cast<QPushButton *>(sender());
    for(int i=0;i<packlist.size();i++)
    {
        if(btn_Set[i]==btn)
        {
            icur=i;
        }
    }

    bool bRet = false;
    string tip="修改"+packlist[icur].GetID()+"的数据";
    string pacda=packlist[icur].GetID()+"\n"+packlist[icur].GetExpressCompany()+"\n"
            +packlist[icur].GetRecipient()+"\n"+packlist[icur].GetRecPhone()+"\n"+
            packlist[icur].GetRecAddress()+"\n"+packlist[icur].GetRecZip()+"\n"
            +packlist[icur].GetSender()+"\n"+packlist[icur].GetSenPhone()+"\n"+
            packlist[icur].GetSenAddress()+"\n"+packlist[icur].GetSenZip()+"\n"+
            packlist[icur].GetSearchID()+"\n"+packlist[icur].GetDate();

    string ip=packlist[icur].GetID();
    QString data= QInputDialog::getMultiLineText(this,"",
     QString::fromStdString(tip),QString::fromStdString(pacda),
      &bRet);

    if (bRet && !data.isEmpty())
    {

        QStringList datalist = data.split("\n");

        string ID=datalist.at(0).toStdString();
        string Company=datalist.at(1).toStdString();
        string Recipient=datalist.at(2).toStdString();
        string RecPhone=datalist.at(3).toStdString();
        string RecAddress=datalist.at(4).toStdString();
        string RecZip=datalist.at(5).toStdString();
        string Sender=datalist.at(6).toStdString();
        string SenPhone=datalist.at(7).toStdString();
        string SenAddress=datalist.at(8).toStdString();
        string SenZip=datalist.at(9).toStdString();
        string searid=datalist.at(10).toStdString();
        string Dat=datalist.at(11).toStdString();


        packlist[icur].SetID(ID);
        packlist[icur].SetExpressCompany(Company);
        packlist[icur].SetRecipient(Recipient);
        packlist[icur].SetRecPhone(RecPhone);
        packlist[icur].SetRecAddress(RecAddress);
        packlist[icur].SetRecZip(RecZip);
        packlist[icur].SetSender(Sender);
        packlist[icur].SetSenPhone(SenPhone);
        packlist[icur].SetSenAddress(SenAddress);
        packlist[icur].SetSenZip(SenZip);
        packlist[icur].SetSearchID(searid);
        packlist[icur].SetDate(Dat);
        staff.SetPackage(ip,ID,Company,Recipient,RecPhone,RecAddress,RecZip,Sender,SenPhone,SenAddress,SenZip,searid,Dat);
        //manager01.Reader_Set(icur,datalist.at(0).toStdString(),datalist.at(1).toStdString(),tem_va,tem_n);


        //AddReaderLineData(icur, _ReaderList[icur].GetID(), _ReaderList[icur].GetName(),
        //                  _ReaderList[icur].GetMax(),_ReaderList[icur].GetQuantity());



    }
    else
    {
        qDebug() << "press Cancel text = " <<data;
    }
}

void MAN_setPackage::DelPec() {
    int icur;
    QPushButton *btn = qobject_cast<QPushButton *>(sender());
    for(int i=0;i<packlist.size();i++)
    {
        if(btn_Del[i]==btn)
        {
            icur=i;
        }
    }
    staff.DelPackagemysql(packlist[icur].GetID());
    //manager01.Reader_Del(icur);
    Packagemodel->removeRow(icur);
}

