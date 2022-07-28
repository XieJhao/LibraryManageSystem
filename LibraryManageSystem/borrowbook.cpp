#include "borrowbook.h"
#include<QDebug>
#include<QSqlError>


BorrowBook::BorrowBook()
{

}

void BorrowBook::Init()
{
    qDebug()<<"Init borrowbook";

    if (!this->db.open())
    {
        qDebug() << "Open borrowbook Database Error";
        return;
    }
    else qDebug() << "Open borrowbook Database Success" ;

    // 该类提供了一些执行MySql语句函数
    // 同时也保存了执行的结果
    QSqlQuery query;
    QString qStr = "select * from borrowbook";

    QStringList tables = db.tables();
    if(!tables.contains("borrowbook"))
    {
        QString sqlCreate = QString("create table borrowbook(userId varchar(15), bookId varchar(15),"
                                    "loanDate varchar(20) not null, returnDate varchar(20) not null,"
                                    "primary kry(userId,bookId));");
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
        BorrowType* node = new BorrowType();

        node->SetId(query.value(0).toString());
        node->SetBookId(query.value(1).toString());
        node->SetLoanDate(query.value(2).toString());
        node->SetReturnDate(query.value(3).toString());
        node->SetIsNew(false);

        if(!dataList.contains(node))
        {
            dataList.append(node);
        }
    }

    db.close();
}

void BorrowBook::SaveAdd()
{
    qDebug() << "Save Add borrowbook新增借出记录";
    if (!this->db.open())
    {
        qDebug() << "Open borrowbook Database Error"<<this->db.lastError().text() ;
    }
    qDebug() << "Open borrowbook Database Success";

    QString statement;
    QSqlQuery query;
    foreach(auto _node,dataList)
    {
        BorrowType* node = (BorrowType*)_node;
        if(_node->GetIsNew())
        {
            statement = QString("insert into borrowbook(userId,bookId, loanDate, returnDate) values "
                                "('%1', '%2', '%3','%4');")
                    .arg(node->GetId()).arg(node->GetBookId()).arg(node->GetLoanDate()).arg(node->GetReturnDate());
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

void BorrowBook::SaveDelete(NodeType *_node)
{
    qDebug() << "Save Delete borrowbook" ;
    if (!this->db.open())
    {
        qDebug() << "Open borrowbook Database Error" ;
    }
    qDebug() << "Open borrowbook Database Success" ;

    QString statement;
    QSqlQuery query;
    BorrowType* node0 = (BorrowType*)_node;
    foreach(auto nodeT,dataList)
    {
        BorrowType* node = (BorrowType*)nodeT;
        if(node->GetBookId() == node0->GetBookId()&&node->GetReturnDate() == node0->GetReturnDate())
        {
            statement = QString("delete from borrowbook where bookId = '%1' and returnDate='%2';")
                    .arg(node->GetBookId()).arg(node->GetReturnDate());
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

void BorrowBook::SqlDataChange(NodeType *_node, QString id)
{
    BorrowType *node = (BorrowType*)_node;
    qDebug() << "Save Change borrowbook修改用户信息";
    if (!this->db.open())
    {
        qDebug() << "Open borrowbook Database Error"<<this->db.lastError().text() ;
    }
    qDebug() << "Open borrowbook Database Success";

    QString statement;
    QSqlQuery query;
        //UserType* node = (UserType*)_node;loanDate, returnDate

    statement = QString("update borrowbook set userId='%1',bookId='%2' , loanDate='%3',returnDate='%4' where "
                        "id='%4';")
            .arg(node->GetId()).arg(node->GetBookId()).arg(node->GetLoanDate()).arg(node->GetReturnDate()).arg(id);
    qDebug() << statement ;
    // 执行MySql语句，向users表中添加一条记录

    if(!query.exec(statement))
    {
        qDebug()<<"修改失败"<<db.lastError().text();
    }


    db.close();
}

BorrowType::BorrowType()
{

}

QString BorrowType::GetBookId()
{
    return this->bookId;
}

void BorrowType::SetBookId(QString _bookId)
{
    this->bookId = _bookId;
}

QString BorrowType::GetLoanDate()
{
    return this->loanDate;
}

void BorrowType::SetLoanDate(QString L_date)
{
    this->loanDate = L_date;
}

QString BorrowType::GetReturnDate()
{
    return this->returnDate;
}

void BorrowType::SetReturnDate(QString R_date)
{
    this->returnDate = R_date;
}

void BorrowType::SetNode(NodeType *node)
{
    BorrowType* borrow = (BorrowType*)node;
    this->id = borrow->GetId();
    this->bookId = borrow->GetBookId();
    this->loanDate = borrow->GetLoanDate();
    this->returnDate = borrow->GetReturnDate();
}
