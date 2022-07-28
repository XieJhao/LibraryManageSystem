#ifndef ADMININTERFACE_H
#define ADMININTERFACE_H

#include <QWidget>

namespace Ui {
class AdminInterface;
}

class AdminInterface : public QWidget
{
    Q_OBJECT
    static AdminInterface* form;
public:
    static AdminInterface* GetAdminInterface();
    explicit AdminInterface(QWidget *parent = nullptr);
    ~AdminInterface();

    void closeEvent(QCloseEvent*e);

private slots:
    void on_userManagementBtn_clicked();

    void on_bookManagementBtn_clicked();

    void on_AF_QuitBtn_clicked();
signals:
    //自定义信号
    void adminQuit();

private:
    Ui::AdminInterface *ui;
};

#endif // ADMININTERFACE_H
