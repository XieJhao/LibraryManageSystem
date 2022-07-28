#include "user.h"
#include<QDebug>
#include"usertype.h"
#include<QSqlError>

User::User()
{

}

void User::Init()
{
    qDebug()<<"Init User";

    if (!this->db.open())
    {
        qDebug() << "Open User Database Error";
        return;
    }
    else qDebug() << "Open User Database Success" ;

    // 该类提供了一些执行MySql语句函数
    // 同时也保存了执行的结果
    QSqlQuery query;
    QString qStr = "select * from user";

    QStringList tables = db.tables();
    if(!tables.contains("user"))
    {
        QString sqlCreate = QString("create table user(id varchar(15) primary key ,"
                                    "password varchar(16) not null, name varchar(20) not null);");
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
        UserType* node = new UserType();

        node->SetId(query.value(0).toString());
        node->SetPassword(query.value(1).toString());
        node->SetName(query.value(2).toString());
        node->SetIsNew(false);

        if(!dataList.contains(node))
        {
            dataList.append(node);
        }
    }

    db.close();

}

void User::SaveAdd()
{
    qDebug() << "Save Add User添加新用户";
    if (!this->db.open())
    {
        qDebug() << "Open User Database Error"<<this->db.lastError().text() ;
    }
    qDebug() << "Open User Database Success";

    QString statement;
    QSqlQuery query;
    foreach(auto _node,dataList)
    {
        UserType* node = (UserType*)_node;
        if(_node->GetIsNew())
        {
            statement = QString("insert into user(id, password, name) values "
                                "('%1', '%2', '%3');")
                    .arg(node->GetId()).arg(node->GetPassword()).arg(node->GetName());
            qDebug() << statement ;
            // 执行MySql语句，向users表中添加一条记录
            if(!query.exec(statement))
            {
                qDebug()<<"添加失败"<<db.lastError().text();
            }
            break;
        }
    }
    db.close();
}

void User::SaveDelete(NodeType*_node)
{
    qDebug() << "Save Delete User" ;
    if (!this->db.open())
    {
        qDebug() << "Open User Database Error" ;
    }
    qDebug() << "Open User Database Success" ;

    QString statement;
    QSqlQuery query;

    foreach(auto nodeT,dataList)
    {
        UserType* node = (UserType*)nodeT;
        if(node->GetId() == _node->GetId())
        {
            statement = QString("delete from user where id = '%1';").arg(node->GetId());
            qDebug() << statement ;
            // 执行MySql语句，从users表中删除一条记录

            // 执行MySql语句，从查询users表中所有信息
            if(!query.exec(statement))
            {
                qDebug()<<"select 语句错误"<<db.lastError().text();
            }
            break;
        }
    }


    this->db.close();
}

void User::SqlDataChange(NodeType *_node,QString id)
{
    UserType *node = (UserType*)_node;
    qDebug() << "Save Change User修改用户信息";
    if (!this->db.open())
    {
        qDebug() << "Open User Database Error"<<this->db.lastError().text() ;
    }
    qDebug() << "Open User Database Success";

    QString statement;
    QSqlQuery query;
        //UserType* node = (UserType*)_node;

    statement = QString("update user set id='%1',password='%2' , name='%3' where "
                        "id='%4';")
            .arg(node->GetId()).arg(node->GetPassword()).arg(node->GetName()).arg(id);
    qDebug() << statement ;
    // 执行MySql语句，向users表中添加一条记录

    if(!query.exec(statement))
    {
        qDebug()<<"修改失败"<<db.lastError().text();
    }


    db.close();
}
