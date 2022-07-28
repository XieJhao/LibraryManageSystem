#include "usertype.h"

UserType::UserType()
{

}

QString UserType::GetName()
{
    return this->name;
}

void UserType::SetName(QString _name)
{
    this->name = _name;
}

QString UserType::GetPassword()
{
    return this->password;
}

void UserType::SetPassword(QString _password)
{
    this->password = _password;
}

void UserType::SetNode(NodeType *node)
{
    UserType * user = (UserType*)node;
    this->id = user->GetId();
    this->name = user->GetName();
    this->password = user->GetPassword();
}
