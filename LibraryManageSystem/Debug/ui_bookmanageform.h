/********************************************************************************
** Form generated from reading UI file 'bookmanageform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMANAGEFORM_H
#define UI_BOOKMANAGEFORM_H

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

class Ui_BookManageForm
{
public:
    QLabel *label;
    QPushButton *addBookBtn;
    QPushButton *changeBookinfoBtn;
    QPushButton *deleteBookBtn;
    QPushButton *removationBtn;
    QPushButton *moreLinesDaleteBtn;
    QFrame *frame;
    QTreeWidget *treeWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *IdEdit;
    QPushButton *IdLookupBtn;
    QLineEdit *nameEdit;
    QPushButton *nameLookupBtn;

    void setupUi(QWidget *BookManageForm)
    {
        if (BookManageForm->objectName().isEmpty())
            BookManageForm->setObjectName(QString::fromUtf8("BookManageForm"));
        BookManageForm->resize(865, 521);
        label = new QLabel(BookManageForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(540, 20, 291, 31));
        addBookBtn = new QPushButton(BookManageForm);
        addBookBtn->setObjectName(QString::fromUtf8("addBookBtn"));
        addBookBtn->setGeometry(QRect(550, 100, 111, 31));
        changeBookinfoBtn = new QPushButton(BookManageForm);
        changeBookinfoBtn->setObjectName(QString::fromUtf8("changeBookinfoBtn"));
        changeBookinfoBtn->setGeometry(QRect(690, 100, 111, 31));
        deleteBookBtn = new QPushButton(BookManageForm);
        deleteBookBtn->setObjectName(QString::fromUtf8("deleteBookBtn"));
        deleteBookBtn->setGeometry(QRect(550, 160, 111, 31));
        removationBtn = new QPushButton(BookManageForm);
        removationBtn->setObjectName(QString::fromUtf8("removationBtn"));
        removationBtn->setGeometry(QRect(690, 160, 111, 31));
        moreLinesDaleteBtn = new QPushButton(BookManageForm);
        moreLinesDaleteBtn->setObjectName(QString::fromUtf8("moreLinesDaleteBtn"));
        moreLinesDaleteBtn->setGeometry(QRect(550, 420, 111, 31));
        frame = new QFrame(BookManageForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 501, 521));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 135, 135);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        treeWidget = new QTreeWidget(frame);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 501, 521));
        treeWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        treeWidget->setMidLineWidth(0);
        treeWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        treeWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        treeWidget->setColumnCount(5);
        layoutWidget = new QWidget(BookManageForm);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(530, 240, 301, 121));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        IdEdit = new QLineEdit(layoutWidget);
        IdEdit->setObjectName(QString::fromUtf8("IdEdit"));

        gridLayout->addWidget(IdEdit, 0, 0, 1, 1);

        IdLookupBtn = new QPushButton(layoutWidget);
        IdLookupBtn->setObjectName(QString::fromUtf8("IdLookupBtn"));
        IdLookupBtn->setMinimumSize(QSize(90, 30));

        gridLayout->addWidget(IdLookupBtn, 0, 1, 1, 1);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 1, 0, 1, 1);

        nameLookupBtn = new QPushButton(layoutWidget);
        nameLookupBtn->setObjectName(QString::fromUtf8("nameLookupBtn"));
        nameLookupBtn->setMinimumSize(QSize(90, 30));

        gridLayout->addWidget(nameLookupBtn, 1, 1, 1, 1);


        retranslateUi(BookManageForm);

        QMetaObject::connectSlotsByName(BookManageForm);
    } // setupUi

    void retranslateUi(QWidget *BookManageForm)
    {
        BookManageForm->setWindowTitle(QCoreApplication::translate("BookManageForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("BookManageForm", "\345\275\223\345\211\215\351\200\211\344\270\255\347\232\204\345\233\276\344\271\246\346\230\257\357\274\232", nullptr));
        addBookBtn->setText(QCoreApplication::translate("BookManageForm", "\346\267\273\345\212\240\345\233\276\344\271\246", nullptr));
        changeBookinfoBtn->setText(QCoreApplication::translate("BookManageForm", "\344\277\256\346\224\271\345\233\276\344\271\246", nullptr));
        deleteBookBtn->setText(QCoreApplication::translate("BookManageForm", "\345\210\240\351\231\244\345\233\276\344\271\246", nullptr));
        removationBtn->setText(QCoreApplication::translate("BookManageForm", "\345\210\267\346\226\260", nullptr));
        moreLinesDaleteBtn->setText(QCoreApplication::translate("BookManageForm", "\345\244\232\350\241\214\345\210\240\351\231\244", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("BookManageForm", "\345\272\223\345\255\230", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("BookManageForm", "\345\207\272\347\211\210\347\244\276", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("BookManageForm", "\344\275\234\350\200\205", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("BookManageForm", "\344\271\246\345\220\215", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("BookManageForm", "\344\271\246\345\217\267", nullptr));
        IdLookupBtn->setText(QCoreApplication::translate("BookManageForm", "\344\271\246\345\217\267\346\237\245\350\257\242", nullptr));
        nameLookupBtn->setText(QCoreApplication::translate("BookManageForm", "\344\271\246\345\220\215\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookManageForm: public Ui_BookManageForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMANAGEFORM_H
