#include "book.h"
#include<QSqlError>
#include<QDebug>

Book::Book()
{

}

void Book::Init()
{
    qDebug()<<"Init Book";

    if (!this->db.open())
    {
        qDebug() << "Open Book Database Error";
        return;
    }
    else qDebug() << "Open Book Database Success" ;

    // 该类提供了一些执行MySql语句函数
    // 同时也保存了执行的结果
    QSqlQuery query;
    QString qStr = "select * from book";

    QStringList tables = db.tables();
    if(!tables.contains("book"))
    {
        QString sqlCreate = QString("create table book(id varchar(15) primary key ,"
                                    "name varchar(20)not null,author varchar(16)not null,"
                                    "press varchar(20),price int not null);");
        if(!query.exec(sqlCreate))
        {
             qDebug()<<"生成表失败"<<db.lastError().text();
        }
    }
    else
    {
        // 执行MySql语句，从查询users表中所有信息
        if(!query.exec(qStr))
        {
            qDebug()<<"初始化链表失败"<<db.lastError().text();
        }
    }
    while(query.next())
    {
        BookType* node = new BookType();

        node->SetId(query.value(0).toString());
        node->SetName(query.value(1).toString());
        node->SetAuthor(query.value(2).toString());
        node->SetPress(query.value(3).toString());
        node->SetPrice(query.value(4).toInt());
        node->SetIsNew(false);

        if(!dataList.contains(node))
        {
            dataList.append(node);
        }

        qDebug() << node->GetId() << " "
                 << node->GetName() << " ";

    }

    db.close();
}

void Book::SaveAdd()
{
    qDebug() << "Save Add book";
    if (!this->db.open())
    {
        qDebug() << "Open book Database Error"<<this->db.lastError().text() ;
    }
    qDebug() << "Open book Database Success";

    QString statement;
    QSqlQuery query;
    foreach(auto _node,dataList)
    {
        BookType* node = (BookType*)_node;
        if(_node->GetIsNew())
        {
            statement = QString("insert into book(id, name,author,press,price) values "
                                "('%1', '%2', '%3','%4','%5');")
                    .arg(node->GetId()).arg(node->GetName()).arg(node->GetAuthor()).arg(node->GetPress())
                    .arg(node->GetPrice());
            qDebug() << statement ;
            // 执行MySql语句，向users表中添加一条记录
            if(!query.exec(statement))
            {
                qDebug()<<"图书添加失败"<<db.lastError().text();
            }
        }
    }
    db.close();
}

void Book::SaveDelete(NodeType*_node)
{
    qDebug() << "Save Delete book" ;
    if (!this->db.open())
    {
        qDebug() << "Open book Database Error" ;
    }
    qDebug() << "Open book Database Success" ;

    QString statement;
    QSqlQuery query;

    foreach(auto nodeT,dataList)
    {
        BookType* node = (BookType*)nodeT;
        if(node->GetId() == _node->GetId())
        {
            statement = QString("delete from book where id = '%1';").arg(node->GetId());
            qDebug() << statement ;
            // 执行MySql语句，从users表中删除一条记录

            // 执行MySql语句，从查询users表中所有信息
            if(!query.exec(statement))
            {
                qDebug()<<"book 移除失败"<<db.lastError().text();
            }
            break;
        }
    }


    this->db.close();
}

void Book::SqlDataChange(NodeType *_node, QString id)
{
    BookType* node = (BookType*)_node;
    qDebug() << "Save Change book";
    if (!this->db.open())
    {
        qDebug() << "Open book Database Error"<<this->db.lastError().text() ;
    }
    qDebug() << "Open book Database Success";

    QString statement;
    QSqlQuery query;
        //UserType* node = (UserType*)_node;

    statement = QString("update book set id='%1' ,name='%2',author='%3',press='%4',price=%5 where "
                        "id='%6';")
            .arg(node->GetId()).arg(node->GetName()).arg(node->GetAuthor()).arg(node->GetPress())
            .arg(node->GetPrice()).arg(id);
    qDebug() << statement ;
    // 执行MySql语句，向users表中添加一条记录

    if(!query.exec(statement))
    {
        qDebug()<<"修改图书信息错误"<<db.lastError().text();
    }


    db.close();
}

BookType::BookType()
{

}

QString BookType::GetName()
{
    return this->name;
}

void BookType::SetName(QString _name)
{
    this->name = _name;
}

QString BookType::GetAuthor()
{
    return this->author;
}

void BookType::SetAuthor(QString _author)
{
    this->author = _author;
}

QString BookType::GetPress()
{
    return this->press;
}

void BookType::SetPress(QString _press)
{
    this->press = _press;
}

int BookType::GetPrice()
{
    return this->price;
}

void BookType::SetPrice(int _price)
{
    this->price = _price;
}

void BookType::SetNode(NodeType *node)
{
    BookType* book = (BookType*)node;
    this->id = book->GetId();
    this->name = book->GetName();
    this->author = book->GetAuthor();
    this->press = book->GetPress();
    this->price = book->GetPrice();
}
