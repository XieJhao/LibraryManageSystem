/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *PasswordEdit;
    QLabel *label_3;
    QLineEdit *UserIdEdit;
    QLabel *label_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *AdminBtn;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *UserBtn;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *LoginBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *QuitBtn;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(541, 425);
        Login->setMinimumSize(QSize(30, 20));
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 50, 330, 39));
        label->setMaximumSize(QSize(1000, 200));
        QFont font;
        font.setFamilies({QString::fromUtf8("Adobe Arabic")});
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(Login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 120, 401, 71));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        PasswordEdit = new QLineEdit(widget);
        PasswordEdit->setObjectName(QString::fromUtf8("PasswordEdit"));

        gridLayout->addWidget(PasswordEdit, 2, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        UserIdEdit = new QLineEdit(widget);
        UserIdEdit->setObjectName(QString::fromUtf8("UserIdEdit"));

        gridLayout->addWidget(UserIdEdit, 1, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        widget1 = new QWidget(Login);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(40, 240, 441, 23));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(100, 0, 100, 0);
        AdminBtn = new QRadioButton(widget1);
        AdminBtn->setObjectName(QString::fromUtf8("AdminBtn"));

        horizontalLayout_2->addWidget(AdminBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        UserBtn = new QRadioButton(widget1);
        UserBtn->setObjectName(QString::fromUtf8("UserBtn"));

        horizontalLayout_2->addWidget(UserBtn);

        widget2 = new QWidget(Login);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(90, 310, 341, 41));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LoginBtn = new QPushButton(widget2);
        LoginBtn->setObjectName(QString::fromUtf8("LoginBtn"));

        horizontalLayout->addWidget(LoginBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        QuitBtn = new QPushButton(widget2);
        QuitBtn->setObjectName(QString::fromUtf8("QuitBtn"));
        QuitBtn->setMinimumSize(QSize(30, 0));

        horizontalLayout->addWidget(QuitBtn);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "\346\254\242\350\277\216\347\231\273\345\275\225\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        PasswordEdit->setText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201   \357\274\232", nullptr));
        UserIdEdit->setText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267Id", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "\347\224\250\346\210\267Id :", nullptr));
        AdminBtn->setText(QCoreApplication::translate("Login", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        UserBtn->setText(QCoreApplication::translate("Login", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        LoginBtn->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        QuitBtn->setText(QCoreApplication::translate("Login", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
