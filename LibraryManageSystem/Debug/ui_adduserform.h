/********************************************************************************
** Form generated from reading UI file 'adduserform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERFORM_H
#define UI_ADDUSERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUserForm
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *userIdEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *userNameEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *userPasswordEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *SaveBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *AddUserForm)
    {
        if (AddUserForm->objectName().isEmpty())
            AddUserForm->setObjectName(QString::fromUtf8("AddUserForm"));
        AddUserForm->resize(395, 327);
        widget = new QWidget(AddUserForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 361, 301));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        userIdEdit = new QLineEdit(widget);
        userIdEdit->setObjectName(QString::fromUtf8("userIdEdit"));

        horizontalLayout->addWidget(userIdEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        userNameEdit = new QLineEdit(widget);
        userNameEdit->setObjectName(QString::fromUtf8("userNameEdit"));

        horizontalLayout_2->addWidget(userNameEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        userPasswordEdit = new QLineEdit(widget);
        userPasswordEdit->setObjectName(QString::fromUtf8("userPasswordEdit"));

        horizontalLayout_3->addWidget(userPasswordEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        SaveBtn = new QPushButton(widget);
        SaveBtn->setObjectName(QString::fromUtf8("SaveBtn"));

        horizontalLayout_4->addWidget(SaveBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        cancelBtn = new QPushButton(widget);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        horizontalLayout_4->addWidget(cancelBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(AddUserForm);

        QMetaObject::connectSlotsByName(AddUserForm);
    } // setupUi

    void retranslateUi(QWidget *AddUserForm)
    {
        AddUserForm->setWindowTitle(QCoreApplication::translate("AddUserForm", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("AddUserForm", "\347\224\250\346\210\267Id  \357\274\232", nullptr));
        label->setText(QCoreApplication::translate("AddUserForm", "\347\224\250\346\210\267\345\220\215  \357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("AddUserForm", "\347\224\250\346\210\267\345\257\206\347\240\201\357\274\232", nullptr));
        SaveBtn->setText(QCoreApplication::translate("AddUserForm", "\347\241\256\345\256\232", nullptr));
        cancelBtn->setText(QCoreApplication::translate("AddUserForm", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUserForm: public Ui_AddUserForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERFORM_H
