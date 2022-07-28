#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <QWidget>
#include"user.h"
#include"usertype.h"
#include<QPushButton>
#include<QDateEdit>
#include<QTreeWidgetItem>
#include"login.h"

namespace Ui {
class UserInterface;
}

class UserInterface : public QWidget
{
    Q_OBJECT
    static UserInterface* form;
public:
    static UserInterface* GetUserInterface();
    explicit UserInterface(QWidget *parent = nullptr);
    ~UserInterface();

    void Init();

    void BorrowBooks();
    void ReturnBooks();

    void SetUserInfo(QString Id,QString password);
    void SetReturnBookDate();
    void SaveBorrowInfo();

    void closeEvent(QCloseEvent* e);

signals:
    void UserInterfaceIsClose();

private slots:
    void on_BorrorBookBtn_clicked();

    void on_tabWidget_tabBarClicked(int index);

    void on_RestoreBookBtn_clicked();


private:
    Ui::UserInterface *ui;
    UserType  user;
    QWidget* dateWidget = nullptr;
    QString return_Date;
    QPushButton* SaveBtn  = nullptr;
    QDateEdit* restoreDate = nullptr;
    QTreeWidgetItem *Item = nullptr;
    QTreeWidgetItem* BorrowItem = nullptr;
    QTreeWidgetItem* restoreItem = nullptr;

};

#endif // USERINTERFACE_H
