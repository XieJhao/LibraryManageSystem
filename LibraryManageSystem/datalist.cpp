#include "datalist.h"

QSqlDatabase DataList::db = QSqlDatabase::addDatabase("QODBC");

DataList::DataList()
{
    //初始化数据库信息
    db.setDatabaseName("xjh");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPort(3306);
    db.setPassword("admin");
}

DataList::~DataList()
{
    this->Clear();
}

void DataList::Init()
{

}

void DataList::Clear()
{
    foreach(auto node,dataList)
    {
        delete node;
        node = nullptr;
    }
    this->dataList.clear();
}

void DataList::SqlDataChange(NodeType *_node, QString id)
{

}

void DataList::SaveAdd()
{

}

void DataList::SaveDelete(NodeType *_node)
{

}


void DataList::AddNode(NodeType *node)
{
    if(!node)
    {
        return;
    }
    node->SetIsNew(true);
    dataList.append(node);
}

void DataList::DeleteNode(QString id)
{
    foreach(auto node,dataList)
    {
        if(node->GetId() == id)
        {
            delete node;
            node = nullptr;
            return;
        }
    }
}

NodeType *DataList::GetNode(QString id)
{

    foreach(auto node,dataList)
    {
        if(node->GetId() == id)
        {
            return node;
        }
    }
    return nullptr;
}

QList<NodeType *> DataList::GetList()
{
    return this->dataList;
}

