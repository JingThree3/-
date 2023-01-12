#include <bits/stdc++.h>
#include <mysql.h>
#include "mysql_operation.h"
#include "menu_selectrole.h"
#include <QApplication>
#include "Package.h"
#include <vector>
#include "Staff.h"
using namespace std;
//show variables like 'character\_set\_%';
//SET character_set_database = gbk ;
//SET character_set_server= gbk ;
//SET character_set_filesystem= gbk ;
mysql_operation db;
vector<Package> package;
Staff staff;
Date today;

int main(int argc, char *argv[])
{

    db.mysql_connect();


    //初始化快件信息
    string sql;
    sql="select * from packagetable";
    MYSQL_RES res=db.mysql_QueryData(sql.data());
    MYSQL_ROW row;string s;
    while((row= mysql_fetch_row(&res))){
        Package tem(row[0], row[1], row[2], row[3], row[4], row[5], row[6], row[7], row[8], row[9], row[10], row[11],
                    row[12]);
        package.push_back(tem);
    }
    for(int i=0;i<package.size();i++)
    {
        if(package[i].GetDate()==today.getDate())
        {
            today.No++;
        }
    }

    QApplication a(argc, argv);
    Menu_SelectRole w;
    w.show();
    return a.exec();


}
