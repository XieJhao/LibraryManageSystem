#include "usermanageform.h"
#include "ui_usermanageform.h"

#include"user.h"
#include"borrowbook.h"
#include<QList>
#include<QMessageBox>


UserManageForm *UserManageForm::Uform = nullptr;
UserManageForm *UserManageForm::GetUForm()
{
    if(Uform == nullptr)
    {
        Uform = new UserManageForm();
    }
    return Uform;
}

UserManageForm::UserManageForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserManageForm)
{
    ui->setupUi(this);
    this->setFixedSize(846,510);
    this->setWindowTitle("用户管理");

    this->Init();
    //隐藏滑动条
    ui->treeWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //按住ctrl键多选
    ui->treeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);


    connect(ui->renovateBtn,QPushButton::clicked,[=](){
        this->Init();
    });

}

UserManageForm::~UserManageForm()
{

    if(addUser != nullptr)
    {
        delete addUser;
        addUser = nullptr;
    }
    if(alterInfo != nullptr)
    {
        delete alterInfo;
        alterInfo = nullptr;
    }
    if(this->bookRecord != nullptr)
    {
        delete this->bookRecord;
        this->bookRecord = nullptr;
    }
    if(this->currentItem != nullptr)
    {
        delete currentItem;
        currentItem = nullptr;
    }
    delete ui;
}

void UserManageForm::Init()
{
    ui->treeWidget->clear();

    User users;
    users.Init();
    for(int i = 0;i < ui->treeWidget->columnCount();i++)
    {
        ui->treeWidget->setColumnWidth(i,167);
    }
    BorrowBook borrowNum;
    borrowNum.Init();


    foreach(auto _node,users.GetList())
    {
        int bNum = 0;
        UserType* node = (UserType*)_node;
        foreach(auto num,borrowNum.GetList())
        {
            if(node->GetId() == num->GetId())
            {
                bNum++;
            }
        }
        QStringList userInfo;
        userInfo<<node->GetId()<<node->GetName()<<QString::number(bNum);

        currentItem = new QTreeWidgetItem(ui->treeWidget,userInfo);



    }
}

void UserManageForm::on_deleteBtn_clicked()
{
    if(!ui->treeWidget->currentItem())
    {
        return;
    }
    QList<QTreeWidgetItem*> ItemList = ui->treeWidget->selectedItems();
    int flag = QMessageBox::warning(this,"提示","数据删除将无法恢复",QMessageBox::Yes,QMessageBox::No);
    if(flag == QMessageBox::Yes)
    {
        User users;
        users.Init();
        foreach(auto Item,ItemList)
        {
            UserType user;
            user.SetId(Item->text(0));
            user.SetName(Item->text(1));
            user.SetPassword(Item->text(2));
            users.SaveDelete(&user);
        }
        this->Init();
    }

}


void UserManageForm::on_IdQueryBtn_clicked()
{
    QTreeWidgetItemIterator it(ui->treeWidget);
    while(*it)
    {
        if((*it)->text(0).contains(ui->IdEdit->text()))
        {
            (*it)->setHidden(false);
            QTreeWidgetItem *item = *it;
        }
        else{
            (*it)->setHidden(true);
        }
        ++it;
    }
}


void UserManageForm::on_nameQueryBtn_clicked()
{
    QTreeWidgetItemIterator it(ui->treeWidget);
    while(*it)
    {
        if((*it)->text(1).contains(ui->nameEdit->text()))
        {
            (*it)->setHidden(false);
            QTreeWidgetItem *item = *it;
        }
        else{
            (*it)->setHidden(true);
        }
        ++it;
    }
}


void UserManageForm::on_addUserBtn_clicked()
{
    if(addUser != nullptr)
    {
        delete addUser;
        addUser = nullptr;
    }
    addUser = new AddUserForm();
    addUser->show();
}


void UserManageForm::on_alterUserinfoBtn_clicked()
{
    if(alterInfo != nullptr)
    {
        delete alterInfo;
        alterInfo = nullptr;
    }
    alterInfo = new alterUserinfoForm();
    QTreeWidgetItem *pCurrentItem = ui->treeWidget->currentItem();
    if(!pCurrentItem)
    {
        return;
    }

    UserType userNode;
    userNode.SetId(pCurrentItem->text(0));
    userNode.SetName(pCurrentItem->text(1));
    userNode.SetPassword(pCurrentItem->text(2));
    alterInfo->SetUserNode(&userNode);
    alterInfo->show();
}


void UserManageForm::on_removeUserBtn_clicked()
{

    QTreeWidgetItem *pItem = ui->treeWidget->currentItem();
    if(!pItem)
    {
        return;
    }
    User user;
    user.Init();
    UserType userNode;
    userNode.SetId(pItem->text(0));
    userNode.SetName(pItem->text(1));
    userNode.SetPassword(pItem->text(2));
    user.SaveDelete(&userNode);
    this->Init();
}


void UserManageForm::on_bookRecordsBtn_clicked()
{
    QTreeWidgetItem *pItem = ui->treeWidget->currentItem();
    if(!pItem)
    {
        return;
    }

    if(this->bookRecord != nullptr)
    {
        delete this->bookRecord;
        this->bookRecord = nullptr;
    }
    this->bookRecord = new BookRecordsForm();
    this->bookRecord->init(pItem->text(0));
    this->bookRecord->show();
}

