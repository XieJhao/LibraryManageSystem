#ifndef DATALIST_H
#define DATALIST_H

#include<QSqlDatabase>
#include<QSqlQuery>
#include"nodetype.h"
#include<QList>
//#include <bits/ios_base.h>

class DataList
{
public:
    DataList();
    ~DataList();

    virtual void Init();

    virtual void Clear();

    virtual void SqlDataChange(NodeType* _node,QString id);

    virtual void SaveAdd();

    virtual void SaveDelete(NodeType*_node);

    virtual void AddNode(NodeType* node);

    virtual void DeleteNode(QString id);

    virtual NodeType* GetNode(QString id);

    QList<NodeType*> GetList();

//    virtual NodeType* Find(QString id);

protected:
    static QSqlDatabase db;
    QList<NodeType*> dataList;


};

#endif // DATALIST_H
