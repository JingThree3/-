//
// Created by Administrator on 2022/12/8.
//

#include "mysql_operation.h"
#include <QMessageBox>
bool mysql_operation::mysql_connect() {
    mysql_init(&mysqld);//初始化mysql
    mysql_query(&mysqld, "set names gbk");
    if (!(mysql_real_connect(&mysqld, "localhost", "root", "123456", "expressmanage", 3306, NULL, 0)))
    {
        cout << "Error connecting to database:" + (string) mysql_error(&mysqld) << endl;
        return false;
    }
    else
    {
        puts("Connected...");
        return true;
    }
    return false;
}

void mysql_operation::mysql_FreeConnect() {
    //mysql_free_result(res);
    mysql_close(&mysqld);

}
//query
MYSQL_RES mysql_operation::mysql_QueryData(const char* sql) {

    int res= mysql_query(&mysqld, sql);

    // 0 执行成功
    // 1 执行失败
    if (res)
    {
        cout << "Query failed ( " + (string) mysql_error(&mysqld) + " )" << endl;
        QMessageBox::about(NULL,"提示","未找到相关数据");
        //return false;
    }
    else
    {
        cout << "query success..." << endl;

        MYSQL_RES * res_ptr= mysql_store_result(&mysqld);
        if(res_ptr)
            return *res_ptr;
        else
            cout << "Query failed ( " + (string) mysql_error(&mysqld) + " )" << endl;
    }

}
//insert update delete
int mysql_operation::mysql_Execute(const char* sql) {
    int res= mysql_query(&mysqld, sql);

    if(res) {
        cout << "execute failed ( " + (string) mysql_error(&mysqld) + " )" << endl;
        QMessageBox::about(NULL,"提示","未找到相关数据");
    }
    else{
        return mysql_affected_rows(&mysqld);
    }
    return 0;
}

