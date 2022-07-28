/********************************************************************************
** Form generated from reading UI file 'bookrecordsform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKRECORDSFORM_H
#define UI_BOOKRECORDSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookRecordsForm
{
public:
    QTreeWidget *treeWidget;

    void setupUi(QWidget *BookRecordsForm)
    {
        if (BookRecordsForm->objectName().isEmpty())
            BookRecordsForm->setObjectName(QString::fromUtf8("BookRecordsForm"));
        BookRecordsForm->resize(586, 468);
        treeWidget = new QTreeWidget(BookRecordsForm);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 585, 465));

        retranslateUi(BookRecordsForm);

        QMetaObject::connectSlotsByName(BookRecordsForm);
    } // setupUi

    void retranslateUi(QWidget *BookRecordsForm)
    {
        BookRecordsForm->setWindowTitle(QCoreApplication::translate("BookRecordsForm", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("BookRecordsForm", "\345\275\222\350\277\230\346\227\245\346\234\237", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("BookRecordsForm", "\345\200\237\345\207\272\346\227\245\346\234\237", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("BookRecordsForm", "\344\271\246\345\217\267", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("BookRecordsForm", "\347\224\250\346\210\267ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookRecordsForm: public Ui_BookRecordsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKRECORDSFORM_H
