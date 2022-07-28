#ifndef BOOKMANAGEFORM_H
#define BOOKMANAGEFORM_H

#include <QWidget>
#include"bookinfoform.h"
#include<QTreeWidgetItem>

namespace Ui {
class BookManageForm;
}

class BookManageForm : public QWidget
{
    Q_OBJECT

public:
    static BookManageForm* GetBForm();
    explicit BookManageForm(QWidget *parent = nullptr);
    ~BookManageForm();

    void Init();

private slots:

    void on_addBookBtn_clicked();

    void on_changeBookinfoBtn_clicked();

    void on_deleteBookBtn_clicked();

    void on_IdLookupBtn_clicked();

    void on_nameLookupBtn_clicked();

    void on_moreLinesDaleteBtn_clicked();

private:
    Ui::BookManageForm *ui;
    static BookManageForm* Bform;
    BookInfoForm* bookInfoForm = nullptr;
    QTreeWidgetItem* currentItem = nullptr;

};

#endif // BOOKMANAGEFORM_H
