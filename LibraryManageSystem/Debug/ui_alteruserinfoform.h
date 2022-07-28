/********************************************************************************
** Form generated from reading UI file 'alteruserinfoform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERUSERINFOFORM_H
#define UI_ALTERUSERINFOFORM_H

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

class Ui_alterUserinfoForm
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *UserIdEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *UserNameEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *UserPasswordEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *SaveBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *alterUserinfoForm)
    {
        if (alterUserinfoForm->objectName().isEmpty())
            alterUserinfoForm->setObjectName(QString::fromUtf8("alterUserinfoForm"));
        alterUserinfoForm->resize(395, 327);
        widget = new QWidget(alterUserinfoForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 371, 301));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        UserIdEdit = new QLineEdit(widget);
        UserIdEdit->setObjectName(QString::fromUtf8("UserIdEdit"));

        horizontalLayout->addWidget(UserIdEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        UserNameEdit = new QLineEdit(widget);
        UserNameEdit->setObjectName(QString::fromUtf8("UserNameEdit"));

        horizontalLayout_2->addWidget(UserNameEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        UserPasswordEdit = new QLineEdit(widget);
        UserPasswordEdit->setObjectName(QString::fromUtf8("UserPasswordEdit"));

        horizontalLayout_3->addWidget(UserPasswordEdit);


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


        retranslateUi(alterUserinfoForm);

        QMetaObject::connectSlotsByName(alterUserinfoForm);
    } // setupUi

    void retranslateUi(QWidget *alterUserinfoForm)
    {
        alterUserinfoForm->setWindowTitle(QCoreApplication::translate("alterUserinfoForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("alterUserinfoForm", "\347\224\250\346\210\267Id   \357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("alterUserinfoForm", "\347\224\250\346\210\267\345\220\215   \357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("alterUserinfoForm", "\347\224\250\346\210\267\345\257\206\347\240\201 : ", nullptr));
        SaveBtn->setText(QCoreApplication::translate("alterUserinfoForm", "\347\241\256\345\256\232", nullptr));
        cancelBtn->setText(QCoreApplication::translate("alterUserinfoForm", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alterUserinfoForm: public Ui_alterUserinfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERUSERINFOFORM_H
