//
// Created by Administrator on 2022/12/21.
//

#ifndef EXPRESSMANAGE_DATE_H
#define EXPRESSMANAGE_DATE_H
#include <string>
#include <ctime>

using namespace std;

class Date {
public:
    string date;
    string year;
    string month;
    string day;
    int No;
    Date(){

        date=getDate();
//        year=dat.substr(0,4);
//        month=dat.substr(4,2);
//        day=dat.substr(6,2);
        No=1;
    }
    int SetNo();
    string getDate();

};


#endif //EXPRESSMANAGE_DATE_H
