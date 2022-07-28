#include "bookrecordsform.h"
#include "ui_bookrecordsform.h"
#include"book.h"
#include"borrowbook.h"

BookRecordsForm::BookRecordsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookRecordsForm)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());
    this->setWindowTitle("借出记录");
}

void BookRecordsForm::init(QString userId)
{
    ui->treeWidget->clear();
    if(this->currentItem != nullptr)
    {
        delete currentItem;
        currentItem = nullptr;
    }
    for(int i = 0;i < ui->treeWidget->columnCount();i++)
    {
        ui->treeWidget->setColumnWidth(i,ui->treeWidget->size().width()/ui->treeWidget->columnCount());
    }
    Book books;
    books.Init();
    BorrowBook borrow;
    borrow.Init();
    QStringList bookInfo;
    foreach (auto _bor, borrow.GetList())
    {
        BorrowType*bor = (BorrowType*)_bor;
        if(userId == bor->GetId())
        {
            foreach(auto _node,books.GetList())
            {
                BookType* node = (BookType*)_node;
                if(bor->GetBookId() == node->GetId())
                {
                    bookInfo.clear();

                    bookInfo<<bor->GetId()<<bor->GetBookId()<<bor->GetLoanDate()<<bor->GetReturnDate();
                    currentItem = new QTreeWidgetItem(ui->treeWidget,bookInfo);
                    qDebug()<<"打印了"<<bor->GetId()<<bor->GetBookId()<<bor->GetLoanDate()<<bor->GetReturnDate();
                    break;
                }

            }
        }
    }
}

BookRecordsForm::~BookRecordsForm()
{
    if(this->currentItem != nullptr)
    {
        delete currentItem;
        currentItem = nullptr;
    }
    delete ui;
}
