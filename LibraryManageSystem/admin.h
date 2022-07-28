#ifndef ADMIN_H
#define ADMIN_H

#include "datalist.h"
#include"nodetype.h"

class AdminType : public NodeType
{
public:
    AdminType();
    QString GetPassword();
    void SetPassword(QString _password);
protected:
    QString password;
};

class Admin : public DataList
{
public:
    Admin();
    virtual void Init();

};

#endif // ADMIN_H
