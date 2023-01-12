//
// Created by Administrator on 2022/12/6.
//

#include <vector>
#include "System.h"
#include "Package.h"
#include <iostream>
#include <fstream>
#include <io.h>
#include <direct.h>
#include "Staff.h"
extern vector<Package> package;
extern Date today;
extern Staff staff;
void System::CountRecInfo(string s) {
    int sumtoday=0;
    //圆通 申通 中通 韵达 极兔
    int YTsum=0;int STsum=0;int ZTsum=0;int YDsum=0;int JTsum=0;
    int YTrec=0;int STrec=0;int ZTrec=0;int YDrec=0;int JTrec=0;
    int YTun=0;int STun=0;int ZTun=0;int YDun=0;int JTun=0;
    for(int i=0;i<package.size();i++)
    {
        if(package[i].GetDate()==s)
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
}

bool System::SavePackageInfo() {
    string path ="../Data/"+today.getDate()+".txt";
    staff.UpdatePacList();
    vector<Package> todaypackage;
    for(int i=0;i<package.size();i++)
    {
        if(package[i].GetDate()==today.getDate())
            todaypackage.push_back(package[i]);
    }

    ofstream oFile;
    oFile.open(path,ios::out|ios::trunc);
    oFile<<"快递单号"<<" |"<<"快递公司"<<" |"<<"收件人"<<" |"<<"收件人联系电话"<<" |"<<"收件人地址"
            <<" |"<<"邮编"<<" |"<<"寄件人"<<" |"<<"寄件人联系电话"<<" |"<<"寄件人地址"<<" |"<<"邮编"
            <<" |"<<"取件号"<<" |"<<"是否取件"<<endl;
    for(int i=0;i<todaypackage.size();i++)
    {
        oFile<<todaypackage[i].GetID()<<" | "<<todaypackage[i].GetExpressCompany()<<" | "<<
        todaypackage[i].GetRecipient()<<" | "<<todaypackage[i].GetRecPhone()<<" | "<<
        todaypackage[i].GetRecAddress()<<" | "<<todaypackage[i].GetRecZip()<<" | "<<
        todaypackage[i].GetSender()<<" | "<<todaypackage[i].GetSenPhone()<<" | "<<
        todaypackage[i].GetSenAddress()<<" | "<<todaypackage[i].GetSenZip()<<" | "<<
        todaypackage[i].GetSearchID()<<" | "<<todaypackage[i].GetState()<<endl;

    }
   // oFile<<package[0].GetRecipient()<<"\t"<<"1 2 3"<<"\t"<<"xx"<<"\t"<<"1"<<endl;
    oFile.close();
}
