//
// Created by Administrator on 2022/12/8.
//

#ifndef EXPRESSMANAGE_MYSQL_OPERATION_H
#define EXPRESSMANAGE_MYSQL_OPERATION_H
#include <mysql.h>
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;



class mysql_operation {
public:
    MYSQL mysqld;
    //MYSQL_RES *res;

    bool mysql_connect();
    void mysql_FreeConnect();
    MYSQL_RES mysql_QueryData(const char* sql);
    int mysql_Execute(const char* sql);

};


#endif //EXPRESSMANAGE_MYSQL_OPERATION_H
