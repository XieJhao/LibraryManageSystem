#include "userinterface.h"
#include "ui_userinterface.h"
#include"book.h"
#include"borrowbook.h"
#include<QDate>
#include<QPushButton>
#include<QDateEdit>

UserInterface* UserInterface::form = nullptr;

UserInterface *UserInterface::GetUserInterface()
{
    if(form == nullptr)
    {
        form  = new UserInterface();
    }
    return form;
}

UserInterface::UserInterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserInterface)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());


}

UserInterface::~UserInterface()
{
    if(SaveBtn != nullptr)
    {
        delete SaveBtn;
        SaveBtn = nullptr;
    }
    if(restoreDate != nullptr)
    {
        delete restoreDate;
        restoreDate = nullptr;
    }
    if(dateWidget != nullptr)
    {
        delete dateWidget;
        dateWidget = nullptr;
    }
    if(restoreItem != nullptr)
    {
        delete restoreItem;
        restoreItem = nullptr;
    }
    if(BorrowItem != nullptr)
    {
        delete BorrowItem;
        BorrowItem = nullptr;
    }
    delete ui;
}

void UserInterface::Init()
{
    this->BorrowBooks();
    this->ReturnBooks();
    this->return_Date = '\0';
}

void UserInterface::BorrowBooks()
{
    ui->BorrorTreeWidget->clear();
    if(BorrowItem != nullptr)
    {
        delete BorrowItem;
        BorrowItem = nullptr;
    }
    Book books;
    books.Init();

    for(int i = 0;i < ui->BorrorTreeWidget->columnCount();i++)
    {
        ui->BorrorTreeWidget->setColumnWidth(i,ui->BorrorTreeWidget->width()/ui->BorrorTreeWidget->columnCount());
    }
    foreach(auto _node,books.GetList())
    {
        BookType* node = (BookType*)_node;
        QStringList bookInfo;
        bookInfo<<node->GetId()<<node->GetName()<<node->GetAuthor()
                <<node->GetPress()<<QString::number( node->GetPrice());
        BorrowItem = new QTreeWidgetItem(ui->BorrorTreeWidget,bookInfo);

    }

}

void UserInterface::ReturnBooks()
{
    ui->ReturnTreeWidget->clear();
    if(restoreItem != nullptr)
    {
        delete restoreItem;
        restoreItem = nullptr;
    }
    //QString restoreStr;
    for(int i = 0;i < ui->ReturnTreeWidget->columnCount();i++)
    {
        ui->ReturnTreeWidget->setColumnWidth(i,ui->ReturnTreeWidget->width()/ui->ReturnTreeWidget->columnCount());
    }
    Book books;
    books.Init();
    BorrowBook borrow;
    borrow.Init();
    QStringList bookInfo;

    foreach (auto _bor, borrow.GetList())
    {
        BorrowType*bor = (BorrowType*)_bor;
        if(user.GetId() == bor->GetId())
        {
            foreach(auto _node,books.GetList())
            {
                BookType* node = (BookType*)_node;
                if(bor->GetBookId() == node->GetId())
                {
                    bookInfo.clear();

                    bookInfo<<node->GetId()<<node->GetName()<<node->GetAuthor()
                            <<node->GetPress()<<bor->GetReturnDate();
                    restoreItem = new QTreeWidgetItem(ui->ReturnTreeWidget,bookInfo);
                    break;
                }

            }
        }
    }


}

void UserInterface::SetUserInfo(QString Id, QString password)
{
    this->user.SetId(Id);
    this->user.SetPassword(password);
}

void UserInterface::SetReturnBookDate()
{
    dateWidget = new QWidget();
    SaveBtn = new QPushButton(dateWidget);
    restoreDate = new QDateEdit(dateWidget);
    //returnDate.setParent(dateWidget);


    dateWidget->setWindowTitle("请选择还书时间");
    dateWidget->setFixedSize(260,111);
    dateWidget->move(this->pos().x()+100,this->pos().y()+100);
    SaveBtn->setGeometry(75,80,90,25);
    SaveBtn->setText("确认");
    restoreDate->setGeometry(0,0,260,51);
    restoreDate->setMinimumDate(QDate::currentDate().addDays(1));
    //阻塞父窗口
    dateWidget->setWindowModality(Qt::ApplicationModal);
    dateWidget->show();

    connect(SaveBtn,QPushButton::clicked,[=](){
        this->return_Date = restoreDate->date().toString("yyyy-MM-dd");
        this->SaveBorrowInfo();

        dateWidget->close();
        if(SaveBtn != nullptr)
        {
            delete SaveBtn;
            SaveBtn = nullptr;
        }
        if(restoreDate != nullptr)
        {
            delete restoreDate;
            restoreDate = nullptr;
        }
        if(dateWidget != nullptr)
        {
            delete dateWidget;
            dateWidget = nullptr;
        }
    });


}

void UserInterface::SaveBorrowInfo()
{
    if(this->return_Date == '\0')
    {
        return;
    }
    Book books;
    books.Init();
    BookType bookNode;
    bookNode.SetId(Item->text(0));
    bookNode.SetName(Item->text(1));
    bookNode.SetAuthor(Item->text(2));
    bookNode.SetPress(Item->text(3));
    bookNode.SetPrice(Item->text(4).toInt()-1);

    books.SqlDataChange(&bookNode,Item->text(0));
    BorrowBook borrorBook;
    borrorBook.Init();

    QString loanStr = QDate::currentDate().toString("yyyy-MM-dd");
    BorrowType* borrorNode = new BorrowType();

    borrorNode->SetId(user.GetId());
    borrorNode->SetBookId(Item->text(0));
    borrorNode->SetLoanDate(loanStr);

    borrorNode->SetReturnDate(this->return_Date);

    borrorBook.AddNode(borrorNode);
    borrorBook.SaveAdd();

    this->BorrowBooks();
}

void UserInterface::closeEvent(QCloseEvent* e)
{
    Login::GetLogin()->show();
    this->UserInterfaceIsClose();
    qDebug()<<"触发了关闭信号";
}

void UserInterface::on_BorrorBookBtn_clicked()
{
    Item = ui->BorrorTreeWidget->currentItem();
    if(!Item)
    {
        return;
    }
    this->SetReturnBookDate();


}


void UserInterface::on_tabWidget_tabBarClicked(int index)
{
    if(index == 0)
    {

        this->BorrowBooks();
    }
    if(index == 1)
    {
        this->ReturnBooks();
    }
}


void UserInterface::on_RestoreBookBtn_clicked()
{
    Item = ui->ReturnTreeWidget->currentItem();
    if(!Item)
    {
        return;
    }
    Book books;
    books.Init();
    BorrowBook borrorBook;
    borrorBook.Init();

    BookType book;
    book.SetNode(books.GetNode(Item->text(0)));
    book.SetPrice(book.GetPrice()+1);

    books.SqlDataChange(&book,Item->text(0));

    BorrowType borrowNode;
    qDebug()<<" 设置变量";
    borrowNode.SetId(user.GetId());
    borrowNode.SetBookId(Item->text(0));
    borrowNode.SetLoanDate("");
    borrowNode.SetReturnDate(Item->text(4));
    qDebug()<<" 赋值变量";
    borrorBook.SaveDelete(&borrowNode);
    this->ReturnBooks();

}

