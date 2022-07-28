#ifndef USERMANAGEFORM_H
#define USERMANAGEFORM_H

#include <QWidget>
#include"adduserform.h"
#include"alteruserinfoform.h"
#include"bookrecordsform.h"
#include<QTreeWidgetItem>

namespace Ui {
class UserManageForm;
}

class UserManageForm : public QWidget
{
    Q_OBJECT

public:
    static UserManageForm*GetUForm();
    explicit UserManageForm(QWidget *parent = nullptr);
    ~UserManageForm();

    void Init();

private slots:
    void on_deleteBtn_clicked();

    void on_IdQueryBtn_clicked();

    void on_nameQueryBtn_clicked();

    void on_addUserBtn_clicked();

    void on_alterUserinfoBtn_clicked();

    void on_removeUserBtn_clicked();

    void on_bookRecordsBtn_clicked();

private:
    Ui::UserManageForm *ui;
    static UserManageForm* Uform;
    AddUserForm* addUser =  nullptr;
    alterUserinfoForm* alterInfo = nullptr;
    BookRecordsForm * bookRecord = nullptr;
    QTreeWidgetItem* currentItem = nullptr;
};

#endif // USERMANAGEFORM_H
