#ifndef ALTERUSERINFOFORM_H
#define ALTERUSERINFOFORM_H

#include <QWidget>
#include"usertype.h"

namespace Ui {
class alterUserinfoForm;
}

class alterUserinfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit alterUserinfoForm(QWidget *parent = nullptr);
    ~alterUserinfoForm();

    void SetUserNode(UserType* node);

private slots:
    void on_SaveBtn_clicked();

    void on_cancelBtn_clicked();

private:
    Ui::alterUserinfoForm *ui;

    UserType *userNode;

};

#endif // ALTERUSERINFOFORM_H
