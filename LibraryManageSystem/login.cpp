#include "login.h"
#include "ui_login.h"
#include"userinterface.h"
#include"usertype.h"
#include<QMessageBox>
#include"admininterface.h"

User* Login::user = nullptr;
Admin* Login::admin = nullptr;
Login* Login::login = nullptr;


Login *Login::GetLogin()
{
    return login;
}

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setFixedSize(541,425);
    login = this;

    user = new User();
    //user->Init();
    admin = new Admin();
    admin->Init();


    this->setWindowTitle("登录界面");

//    connect(UserInterface::GetUserInterface(),UserInterface::UserInterfaceIsClose,[=](){
//        this->show();
//    });
}

Login::~Login()
{
    delete ui;
}

void Login::UserLoginCheck()
{
    user->Init();
    QString id = ui->UserIdEdit->text();
    QString password = ui->PasswordEdit->text();

    // 判断用户输入是否正确
    UserType* _user = (UserType*)user->GetNode(id);
    if(_user)
    {
        if(_user->GetId() == id && _user->GetPassword() == password)
        {
            UserInterface::GetUserInterface()->move(this->pos());
            this->hide();
            UserInterface::GetUserInterface()->SetUserInfo(id,password);
            UserInterface::GetUserInterface()->Init();
            UserInterface::GetUserInterface()->show();
        }
        else{
            // 如果链表中没有用户输入的用户名和密码，表示输入错误
            QMessageBox::information(this, "Error Message", "Login Error, Name Or Password Error");
        }
    }

}

void Login::AdminLoginCheck()
{
    QString id = ui->UserIdEdit->text();
    QString password = ui->PasswordEdit->text();

    qDebug()<<"登录";
    // 判断用户输入是否正确
    AdminType* _admin = (AdminType*)admin->GetNode(id);
    if(_admin)
    {
        if(_admin->GetId() == id && _admin->GetPassword() == password)
        {
            AdminInterface::GetAdminInterface()->move(this->pos());
            this->hide();
            AdminInterface::GetAdminInterface()->show();
        }
        else{
            // 如果链表中没有用户输入的用户名和密码，表示输入错误
            QMessageBox::information(this, "Error Message", "Login Error, Name Or Password Error");
        }
    }

}


void Login::on_LoginBtn_clicked()
{
    if(ui->AdminBtn->isChecked())
    {
        this->AdminLoginCheck();
    }
    else if(ui->UserBtn->isChecked())
    {
        this->UserLoginCheck();
//        this->hide();
//        UserForm::GetUserForm()->show();
    }
    else{
        QMessageBox::warning(this,"提示","请选择登录类型");
    }

}


void Login::on_QuitBtn_clicked()
{
    this->close();
}

