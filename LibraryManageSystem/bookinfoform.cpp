#include "bookinfoform.h"
#include "ui_bookinfoform.h"
#include<QMessageBox>

BookInfoForm::BookInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookInfoForm)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());
    this->bookInfo = nullptr;
    this->setWindowTitle("添加图书");
}

BookInfoForm::~BookInfoForm()
{
    delete ui;
}

void BookInfoForm::SetBookInfo(BookType *node)
{
    this->setWindowTitle("修改图书信息");
    this->bookInfo = new BookType();
    this->bookInfo->SetNode(node);

    ui->BookIdEdit->setText(this->bookInfo->GetId());
    ui->BookNameEdit->setText(this->bookInfo->GetName());
    ui->AuthorEdit->setText(this->bookInfo->GetAuthor());
    ui->PressEdit->setText(this->bookInfo->GetPress());
    ui->PriceEdit->setText(QString::number(this->bookInfo->GetPrice()));

}

void BookInfoForm::AddBook()
{
    Book book;
    book.Init();

    BookType *node = new BookType();
    node->SetId(ui->BookIdEdit->text());
    node->SetName(ui->BookNameEdit->text());
    node->SetAuthor(ui->AuthorEdit->text());
    node->SetPress(ui->PressEdit->text());
    node->SetPrice(ui->PriceEdit->text().toInt());
    node->SetIsNew(true);
    int click =  QMessageBox::warning(this,"提示","确认添加新类型书",
                                      QMessageBox::Yes,QMessageBox::No);
    if(click == QMessageBox::Yes)
    {
        book.AddNode(node);
        book.SaveAdd();
        int click2 =  QMessageBox::warning(this,"提示","是否继续添加新类型书",
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

void BookInfoForm::ChangeBookInfo()
{
    Book book;
    book.Init();
    BookType node;
    node.SetId(ui->BookIdEdit->text());
    node.SetName(ui->BookNameEdit->text());
    node.SetAuthor(ui->AuthorEdit->text());
    node.SetPress(ui->PressEdit->text());
    node.SetPrice(ui->PriceEdit->text().toInt());
    int click =  QMessageBox::warning(this,"提示","确认修改图书信息",
                                      QMessageBox::Yes,QMessageBox::No);
    if(click == QMessageBox::Yes)
    {
        book.SqlDataChange(&node,this->bookInfo->GetId());
        this->close();
    }
    else if(click == QMessageBox::No)
    {
        return;
    }
}

void BookInfoForm::on_SaveBtn_clicked()
{
    if(!this->bookInfo)
    {
        this->AddBook();
    }
    else
    {
        this->ChangeBookInfo();
    }
}


void BookInfoForm::on_CancelBtn_clicked()
{
    this->close();
}

