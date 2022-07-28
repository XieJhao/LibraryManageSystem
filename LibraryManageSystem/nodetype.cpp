#include "nodetype.h"

NodeType::NodeType()
{
    isNew = false;
}

QString NodeType::GetId()
{
    return id;
}

void NodeType::SetId(QString id)
{
    this->id = id;
}

void NodeType::SetIsNew(bool _isNew)
{
    this->isNew = _isNew;
}

bool NodeType::GetIsNew()
{
    return isNew;
}

void NodeType::SetNode(NodeType *node)
{

}
