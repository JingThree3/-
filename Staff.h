//
// Created by Administrator on 2022/12/6.
//

#ifndef EXPRESSMANAGE_STAFF_H
#define EXPRESSMANAGE_STAFF_H
#include <string>
#include "Package.h"
#include <vector>
//#include "mysql_operation.h"
using std::string;

class Staff {
private:
    string ID;
    string stName;
    string stPassword;
public:

    void setID(string id){ ID=id;}
    void setName(string nam){ stName=nam;}
    void setPassword(string ke){ stPassword=ke;}

    bool AddPackage(string id,string com,string rec,string recphone,string recadd,
                    string reczip,string sen,string senphone,string senadd,string senzip,
                    string date,string state);
    vector<Package> SearchPacphone(string s);
    vector<Package> SearchPacsearchid(string s);
    bool YesRec(string id);
    vector<Package> SearchPacid(string s);
    vector<Package> QueryUnrecPac();
    //void QueryDAYRecState();
   void UpdatePacList();
   void DelPackagemysql(string s);
    bool SetPackage(string _id,string id,string com,string rec,string recphone,string recadd,
                    string reczip,string sen,string senphone,string senadd,string senzip,string searid,
                    string date);
};



#endif //EXPRESSMANAGE_STAFF_H
