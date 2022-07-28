#ifndef BORROWBOOK_H
#define BORROWBOOK_H

#include "datalist.h"
#include"nodetype.h"

class BorrowType : public NodeType
{
public:
    BorrowType();
    QString GetBookId();
    void SetBookId(QString _bookId);
    QString GetLoanDate();
    void SetLoanDate(QString L_date);
    QString GetReturnDate();
    void SetReturnDate(QString R_date);

    virtual void SetNode(NodeType*node);
protected:
    QString bookId;
    QString loanDate;
    QString returnDate;

};

class BorrowBook : public DataList
{
public:
    BorrowBook();

    virtual void Init();
    virtual void SaveAdd();
    virtual void SaveDelete(NodeType*_node);
    virtual void SqlDataChange(NodeType* _node,QString id);
};

#endif // BORROWBOOK_H
