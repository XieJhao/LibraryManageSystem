#ifndef ADDUSERFORM_H
#define ADDUSERFORM_H

#include <QWidget>

namespace Ui {
class AddUserForm;
}

class AddUserForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddUserForm(QWidget *parent = nullptr);
    ~AddUserForm();

private slots:
    void on_SaveBtn_clicked();

    void on_cancelBtn_clicked();

private:
    Ui::AddUserForm *ui;
};

#endif // ADDUSERFORM_H
