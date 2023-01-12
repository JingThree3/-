//
// Created by Administrator on 2022/12/20.
//

#include "man_recui.h"
#include "man_recui_ui.h"
#include "Staff.h"
#include "Package.h"
#include <string>
using std::string;
extern vector<Package> package;
extern Staff staff;
vector<Package> packlist;
MAN_recUI::MAN_recUI(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::MAN_recUI)
{
    ui->setupUi(this);

    Packagemodel = new QStandardItemModel();
    ui->PackageList->setModel(Packagemodel);
    ui->PackageList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->PackageList->setSelectionBehavior ( QAbstractItemView::SelectRows);
    ui->PackageList->setSelectionMode ( QAbstractItemView::SingleSelection);

    Packagemodel->setColumnCount(4);
    ui->PackageList->setColumnWidth(0,100);
    ui->PackageList->setColumnWidth(1,100);
    ui->PackageList->setColumnWidth(2,200);
    ui->PackageList->setColumnWidth(3,100);
    Packagemodel->setHeaderData(0, Qt::Horizontal, "快递单号");
    Packagemodel->setHeaderData(1, Qt::Horizontal, "收件人");
    Packagemodel->setHeaderData(2, Qt::Horizontal, "地址");
    Packagemodel->setHeaderData(3, Qt::Horizontal, " ");

}

MAN_recUI::~MAN_recUI()
{
    delete ui;
}

void MAN_recUI::on_btn_quit_clicked()
{
    this->close();
}

void MAN_recUI::on_btn_recphone_clicked() {

    QString phone=this->ui->lineEdit_phone->text();
    string s_phone=phone.toStdString();

    packlist.clear();
    packlist= staff.SearchPacphone(s_phone);
    Packagemodel->setRowCount(packlist.size());
    for(int i=0;i<packlist.size();i++)
    {
        AddPackList(i,packlist[i].GetID(),packlist[i].GetRecipient(),packlist[i].GetRecAddress());

        btn_YesRec[i]=new QPushButton();
        btn_YesRec[i]->setText("确认取件");
        ui->PackageList->setIndexWidget(Packagemodel->index(i, 3), btn_YesRec[i]);
        btn_YesRec[i]->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                       "border: none;border-radius:15px;}\n"
                                                       "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                       "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                       "\n"
                                                       "\n"
                                                       "\n"
                                                       ""));
        connect(btn_YesRec[i], SIGNAL(clicked()),this, SLOT(YesRec()));
    }

}

void MAN_recUI::on_btn_recpackID_clicked() {
    QString searid=this->ui->lineEdit_PacID->text();
    string s_searid=searid.toStdString();

    packlist.clear();
    packlist= staff.SearchPacsearchid(s_searid);
    Packagemodel->setRowCount(packlist.size());
    for(int i=0;i<packlist.size();i++)
    {
        AddPackList(i,packlist[i].GetID(),packlist[i].GetRecipient(),packlist[i].GetRecAddress());

        btn_YesRec[i]=new QPushButton();
        btn_YesRec[i]->setText("确认取件");
        ui->PackageList->setIndexWidget(Packagemodel->index(i, 3), btn_YesRec[i]);
        btn_YesRec[i]->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 12pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(255,255,255);background-color:rgba(68, 194, 196,188);\n"
                                                       "border: none;border-radius:15px;}\n"
                                                       "QPushButton:hover{background-color: rgb(22,218,208);}\n"
                                                       "QPushButton:pressed{background-color: rgb(17,171,164);}\n"
                                                       "\n"
                                                       "\n"
                                                       "\n"
                                                       ""));
        connect(btn_YesRec[i], SIGNAL(clicked()),this, SLOT(YesRec()));

    }

}

void
MAN_recUI::AddPackList(int iCurLine, const std::string pstOne, const std::string pstTwo, const std::string pstThree) {

    Packagemodel->setItem(iCurLine, 0, new QStandardItem(QString::fromStdString(pstOne)));
    Packagemodel->item(iCurLine, 0)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(iCurLine, 1, new QStandardItem(QString::fromStdString(pstTwo)));
    Packagemodel->item(iCurLine, 1)->setTextAlignment(Qt::AlignCenter);
    Packagemodel->setItem(iCurLine, 2, new QStandardItem(QString::fromStdString(pstThree)));
    Packagemodel->item(iCurLine, 2)->setTextAlignment(Qt::AlignCenter);
}


void MAN_recUI::YesRec() {
    int icur;
    QPushButton *btn = qobject_cast<QPushButton *>(sender());
    for(int i=0;i<packlist.size();i++)
    {
        if(btn_YesRec[i]==btn)
        {
            icur=i;
        }
    }

    packlist[icur].SetState(1);

    staff.YesRec(packlist[icur].GetID());


}
