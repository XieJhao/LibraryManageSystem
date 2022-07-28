#ifndef USER_H
#define USER_H

#include"datalist.h"

class User : public DataList
{
public:
    User();

    virtual void Init();
    virtual void SaveAdd();
    virtual void SaveDelete(NodeType*_node);
    virtual void SqlDataChange(NodeType* _node,QString id);
};

#endif // USER_H
