/********************************************************************************
** Form generated from reading UI file 'userform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERFORM_H
#define UI_USERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserForm
{
public:
    QLabel *label;

    void setupUi(QWidget *UserForm)
    {
        if (UserForm->objectName().isEmpty())
            UserForm->setObjectName(QString::fromUtf8("UserForm"));
        UserForm->resize(400, 300);
        label = new QLabel(UserForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 70, 211, 111));

        retranslateUi(UserForm);

        QMetaObject::connectSlotsByName(UserForm);
    } // setupUi

    void retranslateUi(QWidget *UserForm)
    {
        UserForm->setWindowTitle(QCoreApplication::translate("UserForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("UserForm", "         UserForm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInterface: public Ui_UserForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERFORM_H
