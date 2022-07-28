/********************************************************************************
** Form generated from reading UI file 'bookinfoform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINFOFORM_H
#define UI_BOOKINFOFORM_H

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

class Ui_BookInfoForm
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *BookIdEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *BookNameEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *AuthorEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *PressEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *PriceEdit;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *SaveBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *CancelBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *BookInfoForm)
    {
        if (BookInfoForm->objectName().isEmpty())
            BookInfoForm->setObjectName(QString::fromUtf8("BookInfoForm"));
        BookInfoForm->resize(443, 418);
        widget = new QWidget(BookInfoForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 401, 391));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        BookIdEdit = new QLineEdit(widget);
        BookIdEdit->setObjectName(QString::fromUtf8("BookIdEdit"));

        horizontalLayout->addWidget(BookIdEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        BookNameEdit = new QLineEdit(widget);
        BookNameEdit->setObjectName(QString::fromUtf8("BookNameEdit"));

        horizontalLayout_2->addWidget(BookNameEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        AuthorEdit = new QLineEdit(widget);
        AuthorEdit->setObjectName(QString::fromUtf8("AuthorEdit"));

        horizontalLayout_3->addWidget(AuthorEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        PressEdit = new QLineEdit(widget);
        PressEdit->setObjectName(QString::fromUtf8("PressEdit"));

        horizontalLayout_4->addWidget(PressEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        PriceEdit = new QLineEdit(widget);
        PriceEdit->setObjectName(QString::fromUtf8("PriceEdit"));

        horizontalLayout_5->addWidget(PriceEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        SaveBtn = new QPushButton(widget);
        SaveBtn->setObjectName(QString::fromUtf8("SaveBtn"));

        horizontalLayout_6->addWidget(SaveBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        CancelBtn = new QPushButton(widget);
        CancelBtn->setObjectName(QString::fromUtf8("CancelBtn"));

        horizontalLayout_6->addWidget(CancelBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(BookInfoForm);

        QMetaObject::connectSlotsByName(BookInfoForm);
    } // setupUi

    void retranslateUi(QWidget *BookInfoForm)
    {
        BookInfoForm->setWindowTitle(QCoreApplication::translate("BookInfoForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("BookInfoForm", "\344\271\246\345\217\267   \357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("BookInfoForm", "\344\271\246\345\220\215   \357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("BookInfoForm", "\344\275\234\350\200\205   : ", nullptr));
        label_4->setText(QCoreApplication::translate("BookInfoForm", "\345\207\272\347\211\210\347\244\276 \357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("BookInfoForm", "\345\272\223\345\255\230   \357\274\232", nullptr));
        SaveBtn->setText(QCoreApplication::translate("BookInfoForm", "\347\241\256\350\256\244", nullptr));
        CancelBtn->setText(QCoreApplication::translate("BookInfoForm", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookInfoForm: public Ui_BookInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFOFORM_H
