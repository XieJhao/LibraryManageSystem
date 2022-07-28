#ifndef NODETYPE_H
#define NODETYPE_H

#include<QString>

class NodeType
{
public:
    NodeType();
//    virtual bool C
    QString GetId();
    void SetId(QString id);
    void SetIsNew(bool _isNew);
    bool GetIsNew();
    virtual void SetNode(NodeType*node);

protected:
    QString id;
    bool isNew;


};

#endif // NODETYPE_H
