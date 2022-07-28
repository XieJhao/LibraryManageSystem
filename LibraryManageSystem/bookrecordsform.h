#ifndef BOOKRECORDSFORM_H
#define BOOKRECORDSFORM_H

#include <QWidget>
#include<QList>
#include"borrowbook.h"
#include<QTreeWidgetItem>

namespace Ui {
class BookRecordsForm;
}

class BookRecordsForm : public QWidget
{
    Q_OBJECT

public:
    explicit BookRecordsForm(QWidget *parent = nullptr);
    void init(QString userId);
    ~BookRecordsForm();

private:
    Ui::BookRecordsForm *ui;
    QTreeWidgetItem* currentItem = nullptr;
};

#endif // BOOKRECORDSFORM_H
