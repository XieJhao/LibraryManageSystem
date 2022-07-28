#ifndef BOOKINFOFORM_H
#define BOOKINFOFORM_H

#include <QWidget>
#include"book.h"

namespace Ui {
class BookInfoForm;
}

class BookInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit BookInfoForm(QWidget *parent = nullptr);
    ~BookInfoForm();

    void SetBookInfo(BookType*node);
protected:
    void AddBook();
    void ChangeBookInfo();

private slots:
    void on_SaveBtn_clicked();

    void on_CancelBtn_clicked();

private:
    Ui::BookInfoForm *ui;

    BookType* bookInfo;
};

#endif // BOOKINFOFORM_H
