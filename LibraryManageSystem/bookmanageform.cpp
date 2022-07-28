#include "bookmanageform.h"
#include "ui_bookmanageform.h"

#include<QMessageBox>

BookManageForm *BookManageForm::Bform = nullptr;
BookManageForm *BookManageForm::GetBForm()
{
    if(Bform == nullptr)
    {
        Bform = new BookManageForm();
    }
    return Bform;
}

BookManageForm::BookManageForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookManageForm)
{
    ui->setupUi(this);
    this->setFixedSize(846,510);
    this->setWindowTitle("图书管理");
    this->Init();

    ui->treeWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->treeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);

    connect(ui->removationBtn,QPushButton::clicked,[=](){
        this->Init();
    });
}

BookManageForm::~BookManageForm()
{
    if(bookInfoForm != nullptr)
    {
        delete bookInfoForm;
        bookInfoForm = nullptr;
    }
    if(this->currentItem != nullptr)
    {
        delete currentItem;
        currentItem = nullptr;
    }
    delete ui;
}

void BookManageForm::Init()
{
    ui->treeWidget->clear();
    if(this->currentItem != nullptr)
    {
        delete currentItem;
        currentItem = nullptr;
    }
    Book books;
    books.Init();
    for(int i = 0;i < ui->treeWidget->columnCount();i++)
    {
        ui->treeWidget->setColumnWidth(i,ui->treeWidget->width()/ui->treeWidget->columnCount());
    }
    foreach(auto _node,books.GetList())
    {
        BookType* node = (BookType*)_node;
        QStringList bookInfo;
        bookInfo<<node->GetId()<<node->GetName()<<node->GetAuthor()
                <<node->GetPress()<<QString::number( node->GetPrice());
        currentItem = new QTreeWidgetItem(ui->treeWidget,bookInfo);
    }
}

void BookManageForm::on_addBookBtn_clicked()
{
    if(bookInfoForm != nullptr)
    {
        delete bookInfoForm;
        bookInfoForm = nullptr;
    }
    bookInfoForm = new BookInfoForm();
    bookInfoForm->show();
}


void BookManageForm::on_changeBookinfoBtn_clicked()
{
    if(bookInfoForm != nullptr)
    {
        delete bookInfoForm;
        bookInfoForm = nullptr;
    }
    bookInfoForm = new BookInfoForm();

    QTreeWidgetItem *pCurrentItem = ui->treeWidget->currentItem();
    if(!pCurrentItem)
    {
        return;
    }

    BookType bookNode;
    bookNode.SetId(pCurrentItem->text(0));
    bookNode.SetName(pCurrentItem->text(1));
    bookNode.SetAuthor(pCurrentItem->text(2));
    bookNode.SetPress(pCurrentItem->text(3));
    bookNode.SetPrice(pCurrentItem->text(4).toInt());
    bookInfoForm->SetBookInfo(&bookNode);
    bookInfoForm->show();
}


void BookManageForm::on_deleteBookBtn_clicked()
{

    QTreeWidgetItem *pItem = ui->treeWidget->currentItem();
    if(!pItem)
    {
        return;
    }
    Book books;
    books.Init();
    BookType book;
    book.SetId(pItem->text(0));
    book.SetName(pItem->text(1));
    book.SetAuthor(pItem->text(2));
    book.SetPress(pItem->text(3));
    book.SetPrice(pItem->text(4).toInt());
    books.SaveDelete(&book);
    this->Init();
}


void BookManageForm::on_IdLookupBtn_clicked()
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


void BookManageForm::on_nameLookupBtn_clicked()
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


void BookManageForm::on_moreLinesDaleteBtn_clicked()
{
    if(!ui->treeWidget->currentItem())
    {
        return;
    }
    QList<QTreeWidgetItem*> ItemList = ui->treeWidget->selectedItems();
    int flag = QMessageBox::warning(this,"提示","数据删除将无法恢复",QMessageBox::Yes,QMessageBox::No);
    if(flag == QMessageBox::Yes)
    {
        Book books;
        books.Init();
        foreach(auto Item,ItemList)
        {
            BookType book;
            book.SetId(Item->text(0));
            book.SetName(Item->text(1));
            book.SetAuthor(Item->text(2));
            book.SetPress(Item->text(3));
            book.SetPrice(Item->text(4).toInt());
            books.SaveDelete(&book);
        }
        this->Init();
    }
}

