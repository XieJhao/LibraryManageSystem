#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include"user.h"
#include"admin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QWidget
{
    Q_OBJECT

public:
    static Login* GetLogin();
    Login(QWidget *parent = nullptr);
    ~Login();

    void UserLoginCheck();
    void AdminLoginCheck();

private slots:
    void on_LoginBtn_clicked();

    void on_QuitBtn_clicked();

private:
    Ui::Login *ui;
    static Admin* admin;
    static User* user;
    static Login* login;

};
#endif // LOGIN_H
