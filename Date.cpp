//
// Created by Administrator on 2022/12/21.
//

#include "Date.h"

int Date::SetNo() {
    No++;
    return No;
}

string Date::getDate() {
    time_t now = time(&now);
    struct tm ti;
    localtime_s(&ti, &now);

    string ret;
    //ret = to_string(ti.tm_year + 1900) + to_string(ti.tm_mon + 1) +to_string(ti.tm_mday);
    ret = to_string(ti.tm_year + 1900);
    if(ti.tm_mon+1<10)
    {
        ret =ret+"0"+ to_string(ti.tm_mon + 1) ;
    }
    else{
        ret =ret+ to_string(ti.tm_mon + 1) ;
    }

    if(ti.tm_mday<10)
    {
        ret =ret+"0"+ to_string(ti.tm_mday) ;
    }else{
        ret =ret+ to_string(ti.tm_mday) ;
    }

    return ret;
}
