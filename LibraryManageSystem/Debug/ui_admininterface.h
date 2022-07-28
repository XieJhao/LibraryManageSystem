/********************************************************************************
** Form generated from reading UI file 'admininterface.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININTERFACE_H
#define UI_ADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminInterface
{
public:
    QLabel *label;
    QPushButton *userManagementBtn;
    QPushButton *bookManagementBtn;
    QPushButton *AF_QuitBtn;

    void setupUi(QWidget *AdminInterface)
    {
        if (AdminInterface->objectName().isEmpty())
            AdminInterface->setObjectName(QString::fromUtf8("AdminInterface"));
        AdminInterface->resize(602, 434);
        label = new QLabel(AdminInterface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 210, 441, 131));
        QFont font;
        font.setFamilies({QString::fromUtf8("Adobe Arabic")});
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        userManagementBtn = new QPushButton(AdminInterface);
        userManagementBtn->setObjectName(QString::fromUtf8("userManagementBtn"));
        userManagementBtn->setGeometry(QRect(70, 80, 151, 51));
        bookManagementBtn = new QPushButton(AdminInterface);
        bookManagementBtn->setObjectName(QString::fromUtf8("bookManagementBtn"));
        bookManagementBtn->setGeometry(QRect(230, 80, 151, 51));
        AF_QuitBtn = new QPushButton(AdminInterface);
        AF_QuitBtn->setObjectName(QString::fromUtf8("AF_QuitBtn"));
        AF_QuitBtn->setGeometry(QRect(390, 80, 151, 51));

        retranslateUi(AdminInterface);

        QMetaObject::connectSlotsByName(AdminInterface);
    } // setupUi

    void retranslateUi(QWidget *AdminInterface)
    {
        AdminInterface->setWindowTitle(QCoreApplication::translate("AdminInterface", "Form", nullptr));
        label->setText(QCoreApplication::translate("AdminInterface", "\346\254\242\350\277\216\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        userManagementBtn->setText(QCoreApplication::translate("AdminInterface", "\347\224\250\346\210\267\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        bookManagementBtn->setText(QCoreApplication::translate("AdminInterface", "\344\271\246\347\261\215\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        AF_QuitBtn->setText(QCoreApplication::translate("AdminInterface", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminInterface: public Ui_AdminInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININTERFACE_H
