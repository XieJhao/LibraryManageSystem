/********************************************************************************
** Form generated from reading UI file 'usermanageform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMANAGEFORM_H
#define UI_USERMANAGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserManageForm
{
public:
    QLabel *userinfoLabel;
    QPushButton *addUserBtn;
    QPushButton *alterUserinfoBtn;
    QPushButton *removeUserBtn;
    QPushButton *bookRecordsBtn;
    QPushButton *deleteBtn;
    QFrame *frame;
    QTreeWidget *treeWidget;
    QPushButton *renovateBtn;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *IdEdit;
    QPushButton *IdQueryBtn;
    QLineEdit *nameEdit;
    QPushButton *nameQueryBtn;

    void setupUi(QWidget *UserManageForm)
    {
        if (UserManageForm->objectName().isEmpty())
            UserManageForm->setObjectName(QString::fromUtf8("UserManageForm"));
        UserManageForm->resize(846, 510);
        userinfoLabel = new QLabel(UserManageForm);
        userinfoLabel->setObjectName(QString::fromUtf8("userinfoLabel"));
        userinfoLabel->setGeometry(QRect(520, 40, 301, 21));
        addUserBtn = new QPushButton(UserManageForm);
        addUserBtn->setObjectName(QString::fromUtf8("addUserBtn"));
        addUserBtn->setGeometry(QRect(550, 100, 111, 31));
        alterUserinfoBtn = new QPushButton(UserManageForm);
        alterUserinfoBtn->setObjectName(QString::fromUtf8("alterUserinfoBtn"));
        alterUserinfoBtn->setGeometry(QRect(690, 100, 111, 31));
        removeUserBtn = new QPushButton(UserManageForm);
        removeUserBtn->setObjectName(QString::fromUtf8("removeUserBtn"));
        removeUserBtn->setGeometry(QRect(550, 160, 111, 31));
        bookRecordsBtn = new QPushButton(UserManageForm);
        bookRecordsBtn->setObjectName(QString::fromUtf8("bookRecordsBtn"));
        bookRecordsBtn->setGeometry(QRect(690, 160, 111, 31));
        deleteBtn = new QPushButton(UserManageForm);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));
        deleteBtn->setGeometry(QRect(530, 430, 111, 31));
        frame = new QFrame(UserManageForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 501, 521));
        frame->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(122, 122, 122);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        treeWidget = new QTreeWidget(frame);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setBackground(2, QColor(111, 111, 111));
        __qtreewidgetitem->setBackground(1, QColor(111, 111, 111));
        __qtreewidgetitem->setBackground(0, QColor(111, 111, 111));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 501, 521));
        treeWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        treeWidget->setLineWidth(1);
        treeWidget->setMidLineWidth(0);
        renovateBtn = new QPushButton(UserManageForm);
        renovateBtn->setObjectName(QString::fromUtf8("renovateBtn"));
        renovateBtn->setGeometry(QRect(620, 220, 111, 31));
        layoutWidget = new QWidget(UserManageForm);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(520, 260, 301, 123));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        IdEdit = new QLineEdit(layoutWidget);
        IdEdit->setObjectName(QString::fromUtf8("IdEdit"));

        gridLayout->addWidget(IdEdit, 0, 0, 1, 1);

        IdQueryBtn = new QPushButton(layoutWidget);
        IdQueryBtn->setObjectName(QString::fromUtf8("IdQueryBtn"));
        IdQueryBtn->setMinimumSize(QSize(90, 30));

        gridLayout->addWidget(IdQueryBtn, 0, 1, 1, 1);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 1, 0, 1, 1);

        nameQueryBtn = new QPushButton(layoutWidget);
        nameQueryBtn->setObjectName(QString::fromUtf8("nameQueryBtn"));
        nameQueryBtn->setMinimumSize(QSize(90, 30));

        gridLayout->addWidget(nameQueryBtn, 1, 1, 1, 1);


        retranslateUi(UserManageForm);

        QMetaObject::connectSlotsByName(UserManageForm);
    } // setupUi

    void retranslateUi(QWidget *UserManageForm)
    {
        UserManageForm->setWindowTitle(QCoreApplication::translate("UserManageForm", "Form", nullptr));
        userinfoLabel->setText(QCoreApplication::translate("UserManageForm", "\345\275\223\345\211\215\351\200\211\346\213\251\347\232\204\347\224\250\346\210\267\346\230\257\357\274\232", nullptr));
        addUserBtn->setText(QCoreApplication::translate("UserManageForm", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        alterUserinfoBtn->setText(QCoreApplication::translate("UserManageForm", "\344\277\256\346\224\271\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        removeUserBtn->setText(QCoreApplication::translate("UserManageForm", "\347\247\273\351\231\244\347\224\250\346\210\267", nullptr));
        bookRecordsBtn->setText(QCoreApplication::translate("UserManageForm", "\346\237\245\347\234\213\345\200\237\344\271\246\350\256\260\345\275\225", nullptr));
        deleteBtn->setText(QCoreApplication::translate("UserManageForm", "\345\244\232\350\241\214\345\210\240\351\231\244", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("UserManageForm", "\346\234\252\350\277\230\344\271\246\347\261\215\346\225\260", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("UserManageForm", "\347\224\250\346\210\267\345\220\215", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("UserManageForm", "Id", nullptr));
        renovateBtn->setText(QCoreApplication::translate("UserManageForm", "\345\210\267\346\226\260", nullptr));
        IdQueryBtn->setText(QCoreApplication::translate("UserManageForm", "Id\346\237\245\350\257\242", nullptr));
        nameQueryBtn->setText(QCoreApplication::translate("UserManageForm", "\347\224\250\346\210\267\345\220\215\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserManageForm: public Ui_UserManageForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMANAGEFORM_H
