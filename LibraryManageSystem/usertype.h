#ifndef USERTYPE_H
#define USERTYPE_H

#include"nodetype.h"


class UserType : public NodeType
{
public:
    UserType();

    QString GetName();
    void SetName(QString _name);
    QString GetPassword();
    void SetPassword(QString _password);

    virtual void SetNode(NodeType*node);
protected:
    QString name;
    QString password;
};

#endif // USERTYPE_H
