#include "alteruserinfoform.h"
#include "ui_alteruserinfoform.h"
#include<QMessageBox>
#include"user.h"
#include<QDebug>

alterUserinfoForm::alterUserinfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alterUserinfoForm)
{
    ui->setupUi(this);
    this->setFixedSize(395,327);
    this->setWindowTitle("修改用户信息");
    this->userNode = new UserType();
}

alterUserinfoForm::~alterUserinfoForm()
{
    if(this->userNode != nullptr)
    {
        delete this->userNode;
        this->userNode = nullptr;
    }
    delete ui;
}

void alterUserinfoForm::SetUserNode(UserType *node)
{

    this->userNode->SetId(node->GetId());
    this->userNode->SetName(node->GetName());
    this->userNode->SetPassword(node->GetPassword());
    ui->UserIdEdit->setText(this->userNode->GetId());
    ui->UserNameEdit->setText(this->userNode->GetName());
    ui->UserPasswordEdit->setText(this->userNode->GetPassword());

}

void alterUserinfoForm::on_SaveBtn_clicked()
{

    User user;
    user.Init();
    UserType node;
    node.SetId(ui->UserIdEdit->text());
    node.SetName(ui->UserNameEdit->text());
    node.SetPassword(ui->UserPasswordEdit->text());
    int click =  QMessageBox::warning(this,"提示","确认修改用户信息",
                                      QMessageBox::Yes,QMessageBox::No);
    if(click == QMessageBox::Yes)
    {
        user.SqlDataChange(&node,this->userNode->GetId());
        this->close();
    }
    else if(click == QMessageBox::No)
    {
        return;
    }

}


void alterUserinfoForm::on_cancelBtn_clicked()
{
    this->close();
}

