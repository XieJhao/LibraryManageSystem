#include "admininterface.h"
#include "ui_admininterface.h"
#include"login.h"
#include"usermanageform.h"
#include"bookmanageform.h"
#include"user.h"

AdminInterface *AdminInterface::form = nullptr;

AdminInterface *AdminInterface::GetAdminInterface()
{
    if(form == nullptr)
    {
        form = new AdminInterface();
    }
    return form;
}

AdminInterface::AdminInterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminInterface)
{
    ui->setupUi(this);
    this->setFixedSize(602,434);
    this->setWindowTitle("管理员界面");
}

AdminInterface::~AdminInterface()
{
    delete ui;
}

void AdminInterface::closeEvent(QCloseEvent *e)
{
    UserManageForm::GetUForm()->hide();
    BookManageForm::GetBForm()->hide();
    Login::GetLogin()->show();
}

void AdminInterface::on_userManagementBtn_clicked()
{
    UserManageForm::GetUForm()->move(this->pos());
    UserManageForm::GetUForm()->Init();
    UserManageForm::GetUForm()->show();
}


void AdminInterface::on_bookManagementBtn_clicked()
{
    BookManageForm::GetBForm()->move(this->pos());
    BookManageForm::GetBForm()->show();
}


void AdminInterface::on_AF_QuitBtn_clicked()
{
    Login::GetLogin()->move(this->pos());
    this->hide();
    UserManageForm::GetUForm()->hide();
    BookManageForm::GetBForm()->hide();
    this->adminQuit();

    Login::GetLogin()->show();
}

