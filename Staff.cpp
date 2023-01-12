//
// Created by Administrator on 2022/12/6.
//
#include <QMessageBox>
#include "mysql_operation.h"
#include "Staff.h"

//#include "mysql_operation.h"

extern vector<Package> package;
extern mysql_operation db;


extern Date today;
vector<Package> Staff::QueryUnrecPac() {
    UpdatePacList();

    vector<Package> packlist;
    for(int i=0;i<package.size();i++)
    {
        if(package[i].GetState()=="0")
        {
            packlist.push_back(package[i]);
        }
    }
    return packlist;

}

void Staff::UpdatePacList() {
    package.clear();
    string sql;
    sql="select * from packagetable";
    MYSQL_RES Res=db.mysql_QueryData(sql.data());
    MYSQL_ROW Row;
    while((Row= mysql_fetch_row(&Res))){
        Package tem(Row[0], Row[1], Row[2], Row[3], Row[4],
                    Row[5], Row[6], Row[7], Row[8], Row[9],
                    Row[10], Row[11], Row[12]);
        package.push_back(tem);
    }

}

bool Staff::AddPackage(string id,string com,string rec,string recphone,string recadd,
                       string reczip,string sen,string senphone,string senadd,string senzip,
                       string date,string state) {
    string searid;//取件号
    if(com=="圆通")searid="YT";else if(com=="申通")searid="ST";
    else if(com=="中通")searid="ZT";else if(com=="韵达")searid="YD";
    else if(com=="极兔")searid="JT";
    string te=recphone.substr(9,2);
    searid+=te;searid+="-";
    string te1=date.substr(6,2);
    searid+=te1;
    //searid拼接TODAY的No
    if(today.No<10)
    searid=searid+"0"+to_string(today.No);
    else
        searid+=searid+to_string(today.No);
    today.No++;


    Package tem(id,com,rec,recphone,recadd,
                reczip,sen,senphone,senadd,senzip,
               searid,date,state);
    package.push_back(tem);
    cout<<searid;
    string sql,sq2;
//    sql="insert into packagetable(ID,Company,Recipient,RecPhone,RecAddress,RecZip,Sender,SenPhone,SenAddress,SenZip,SearchID,Date,State) ";
//    sq2="value('"+id+"','"+com+"','"+rec+"','"+recphone+"','"+recadd+"','"+reczip+"','"+sen+"','"+senphone+"','"+senadd+"','"+senzip+"','"+searid+"','"+date+"','"+state+"')";
//    //sql+=sq2;

    sql="insert into packagetable(ID,Company,Recipient,RecPhone,RecAddress,RecZip,Sender,SenPhone,SenAddress,SenZip,SearchID,Date,State) value('"+id+"','"+com+"','"+rec+"','"+recphone+"','"+recadd+"','"+reczip+"','"+sen+"','"+senphone+"','"+senadd+"','"+senzip+"','"+searid+"','"+date+"','"+state+"')";
    int num=db.mysql_Execute(sql.data());
    return false;
}

vector<Package> Staff::SearchPacsearchid(string s) {
    UpdatePacList();

    vector<Package> packlist;
    for(int i=0;i<package.size();i++)
    {
        if(package[i].GetSearchID()==s)
        {
            packlist.push_back(package[i]);
        }
    }
    return packlist;
}

vector<Package> Staff::SearchPacphone(string s) {
    UpdatePacList();

    vector<Package> packlist;
    for(int i=0;i<package.size();i++)
    {
        if(package[i].GetRecPhone()==s)
        {
            packlist.push_back(package[i]);
        }
    }
    return packlist;
}

bool Staff::YesRec(string id) {
    for(int i=0;i<package.size();i++)
    {
        if(package[i].GetID()==id)
        {
            package[i].SetState(1);
        }
    }

    string sql;
    sql="update packagetable set State=1 where ID='"+id+"'";
    int num=db.mysql_Execute(sql.data());
    if(num!=0)
        QMessageBox::about(NULL,"提示","标记取件成功");
    else
        QMessageBox::about(NULL,"提示","此快件已被取走哦");

    return false;
}

vector<Package> Staff::SearchPacid(string s) {
    UpdatePacList();

    vector<Package> packlist;
    for(int i=0;i<package.size();i++)
    {
        if(package[i].GetID()==s)
        {
            packlist.push_back(package[i]);
        }
    }
    return packlist;
}

void Staff::DelPackagemysql(string s) {

    for (vector<Package>::iterator it = package.begin(); it != package.end(); )
    {
        if (it->GetID()==s)
        {
            it = package.erase(it);
        }
        else
        {
            ++it;
        }
    }
    string sql;

    sql="delete from packagetable where ID='"+s+"'";
    int num=db.mysql_Execute(sql.data());
    if(num!=0)
        QMessageBox::about(NULL,"提示","删除成功");
    else
        QMessageBox::about(NULL,"提示","此快件不存在哦");

}

bool Staff::SetPackage(string _id, string id, string com, string rec, string recphone, string recadd, string reczip,
                       string sen, string senphone, string senadd, string senzip,  string searid,string date) {
    //UPDATE table_name SET field1=new-value1, field2=new-value2[WHERE Clause]

    string sq;
    sq="update packagetable set Company='"+com+"',Recipient='"+rec+"',RecPhone='"+recphone+"',RecAddress='"+
            recadd+"',RecZip='"+reczip+"',Sender='"+sen+"',SenPhone='"+senphone+"',SenAddress='"+senadd+
            "',SenZip='"+senzip+"',SearchID='"+searid+"',Date='"+date+"' where ID='"+_id+"'";
    int num=db.mysql_Execute(sq.data());

    string sql;
    sql="update packagetable set ID='"+id+"' where SearchID='"+searid+"'";
    int n=db.mysql_Execute(sql.data());

    if(num!=0)
        QMessageBox::about(NULL,"提示","修改成功");
    else
        QMessageBox::about(NULL,"提示","修改失败");
    return false;
}
