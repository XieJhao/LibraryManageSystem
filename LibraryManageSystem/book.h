#ifndef BOOK_H
#define BOOK_H

#include"datalist.h"
#include"nodetype.h"
class BookType : public NodeType
{
public:
    BookType();
    QString GetName();
    void SetName(QString _name);
    QString GetAuthor();
    void SetAuthor(QString _author);
    QString GetPress();
    void SetPress(QString _press);
    int GetPrice();
    void SetPrice(int _price);

    virtual void SetNode(NodeType*node);
protected:
    QString name;
    QString author;
    QString press;
    int price;
};

class Book : public DataList
{
public:
    Book();

    virtual void Init();
    virtual void SaveAdd();
    virtual void SaveDelete(NodeType*_node);
    virtual void SqlDataChange(NodeType* _node,QString id);
};

#endif // BOOK_H
