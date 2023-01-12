//
// Created by Administrator on 2022/12/6.
//

#ifndef EXPRESSMANAGE_PACKAGE_H
#define EXPRESSMANAGE_PACKAGE_H

#include <string>
#include "Date.h"
using std::string;
/*
 快递单号、快递公司、收件人、收件人联系电话、
 收件人地址、邮编、寄件人、寄件人联系电话、
 寄件人地址、邮编
 */
class Package {
private:
    string ID;			//快递单号
    string Company;		//快递公司(圆通 申通 中通 韵达 极兔)
    string Recipient;			//收件人
    string RecPhone;			//收件人联系方式
    string RecAddress;			//收件人地址
    string RecZip;				//收件人邮编
    string Sender;				//寄件人
    string SenPhone;			//寄件人联系方式
    string SenAddress;			//寄件人地址
    string SenZip;				//寄件人邮编
    string SearchID;			//取件码
    string Dat;
    string State;					//1已取件 0未取件
    //bool Stores = false;


public:
    Package(string id,string com,string rec,string recphone,string recadd,
            string reczip,string sen,string senphone,string senadd,string senzip,
            string searid,string date,string state)
            {
        ID=id;Company=com;Recipient=rec;RecPhone=recphone;RecAddress=recadd;
        RecZip=reczip;Sender=sen;SenPhone=senphone;SenAddress=senadd;SenZip=senzip;
        SearchID=searid;Dat=date;State=state;
            }

    void SetID(const string& text) { ID= text; }
    void SetExpressCompany(const string& text) { Company = text; }
    void SetRecipient(const string& text) { Recipient = text; }
    void SetRecPhone(const string& text) { RecPhone = text; }
    void SetRecAddress(const string& text) { RecAddress = text; }
    void SetRecZip(const string& text) { RecZip = text; }
    void SetSender(const string& text) { Sender = text; }
    void SetSenPhone(const string& text) { SenPhone = text; }
    void SetSenAddress(const string& text) { SenAddress = text; }
    void SetSenZip(const string& text) { SenZip = text; }
    void SetSearchID(const string& text) { SearchID = text; }
    void SetDate(const string& text) { Dat =text; }
    void SetState(int flag) { State = flag; }
    //void SetStores(bool flag) { Stores = flag; }
    string GetID() { return ID; }
    string GetExpressCompany() { return Company; }
    string GetRecipient() { return Recipient; }
    string GetRecPhone() { return RecPhone; }
    string GetRecAddress() { return RecAddress; }
    string GetRecZip() { return RecZip; }
    string GetSender() { return Sender; }
    string GetSenPhone() { return SenPhone; }
    string GetSenAddress() { return SenAddress; }
    string GetSenZip() { return SenZip; }
    string GetSearchID() { return SearchID; }
    string GetState() { return State; }
    //bool GetStores() { return Stores; }
    string GetDate() { return Dat; }

};


#endif //EXPRESSMANAGE_PACKAGE_H
