#include "adduserform.h"
#include "ui_adduserform.h"
#include"user.h"
#include"usertype.h"
#include<QMessageBox>

AddUserForm::AddUserForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddUserForm)
{
    ui->setupUi(this);
    this->setFixedSize(395,327);
}

AddUserForm::~AddUserForm()
{
    delete ui;
}

void AddUserForm::on_SaveBtn_clicked()
{
    User user;
    user.Init();

    UserType *node = new UserType();
    node->SetId(ui->userIdEdit->text());
    node->SetName(ui->userNameEdit->text());
    node->SetPassword(ui->userPasswordEdit->text());
    node->SetIsNew(true);
    int click =  QMessageBox::warning(this,"提示","确认添加新用户",
                                      QMessageBox::Yes,QMessageBox::No);
    if(click == QMessageBox::Yes)
    {
        user.AddNode(node);
        user.SaveAdd();
        int click2 =  QMessageBox::warning(this,"提示","是否继续添加新用户",
                                          QMessageBox::Yes,QMessageBox::No);
        if(click2 == QMessageBox::No)
        {

            this->close();
        }

    }
    else if(click == QMessageBox::No)
    {
        return;
    }
}


void AddUserForm::on_cancelBtn_clicked()
{
    this->close();
}

