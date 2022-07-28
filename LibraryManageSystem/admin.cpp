#include "admin.h"
#include<QDebug>
#include<QSqlError>

Admin::Admin()
{

}

void Admin::Init()
{
    qDebug()<<"Init Admin";

    if (!this->db.open())
    {
        qDebug() << "Open Admin Database Error";
        return;
    }
    else qDebug() << "Open Admin Database Success" ;

    // 该类提供了一些执行MySql语句函数
    // 同时也保存了执行的结果
    QSqlQuery query;
    QString qStr = "select * from administrators";

    QStringList tables = db.tables();
    if(!tables.contains("user"))
    {
        QString sqlCreate = QString("create table administrators(id varchar(15) primary key ,"
                                    "password varchar(16)");
        if(!query.exec(sqlCreate))
        {
             qDebug()<<"Create 语句错误"<<db.lastError().text();
        }
    }
    else
    {
        // 执行MySql语句，从查询users表中所有信息
        if(!query.exec(qStr))
        {
            qDebug()<<"select 语句错误"<<db.lastError().text();
        }
    }
    while(query.next())
    {
        AdminType* node = new AdminType();

        node->SetId(query.value(0).toString());
        node->SetPassword(query.value(1).toString());

        dataList.append(node);

        qDebug() << node->GetId() << " "
                 << node->GetPassword() ;
    }

    db.close();
}


AdminType::AdminType()
{

}

QString AdminType::GetPassword()
{
    return this->password;
}

void AdminType::SetPassword(QString _password)
{
    this->password = _password;
}
