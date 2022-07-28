/********************************************************************************
** Form generated from reading UI file 'userinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINTERFACE_H
#define UI_USERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInterface
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTreeWidget *BorrorTreeWidget;
    QPushButton *BorrorBookBtn;
    QWidget *tab_2;
    QTreeWidget *ReturnTreeWidget;
    QPushButton *RestoreBookBtn;

    void setupUi(QWidget *UserInterface)
    {
        if (UserInterface->objectName().isEmpty())
            UserInterface->setObjectName(QString::fromUtf8("UserInterface"));
        UserInterface->resize(673, 501);
        tabWidget = new QTabWidget(UserInterface);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 671, 501));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        BorrorTreeWidget = new QTreeWidget(tab);
        BorrorTreeWidget->setObjectName(QString::fromUtf8("BorrorTreeWidget"));
        BorrorTreeWidget->setGeometry(QRect(0, 0, 671, 421));
        BorrorBookBtn = new QPushButton(tab);
        BorrorBookBtn->setObjectName(QString::fromUtf8("BorrorBookBtn"));
        BorrorBookBtn->setGeometry(QRect(275, 430, 121, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        ReturnTreeWidget = new QTreeWidget(tab_2);
        ReturnTreeWidget->setObjectName(QString::fromUtf8("ReturnTreeWidget"));
        ReturnTreeWidget->setGeometry(QRect(0, 0, 671, 421));
        RestoreBookBtn = new QPushButton(tab_2);
        RestoreBookBtn->setObjectName(QString::fromUtf8("RestoreBookBtn"));
        RestoreBookBtn->setGeometry(QRect(275, 430, 121, 31));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(UserInterface);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UserInterface);
    } // setupUi

    void retranslateUi(QWidget *UserInterface)
    {
        UserInterface->setWindowTitle(QCoreApplication::translate("UserInterface", "Form", nullptr));
#if QT_CONFIG(whatsthis)
        tab->setWhatsThis(QCoreApplication::translate("UserInterface", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        QTreeWidgetItem *___qtreewidgetitem = BorrorTreeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("UserInterface", "\345\272\223\345\255\230", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("UserInterface", "\345\207\272\347\211\210\347\244\276", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("UserInterface", "\344\275\234\350\200\205", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("UserInterface", "\344\271\246\345\220\215", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("UserInterface", "\344\271\246\345\217\267", nullptr));
        BorrorBookBtn->setText(QCoreApplication::translate("UserInterface", "\345\200\237\345\207\272\345\233\276\344\271\246", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("UserInterface", "\345\200\237\344\271\246", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = ReturnTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(4, QCoreApplication::translate("UserInterface", "\345\275\222\350\277\230\346\227\245\346\234\237", nullptr));
        ___qtreewidgetitem1->setText(3, QCoreApplication::translate("UserInterface", "\345\207\272\347\211\210\347\244\276", nullptr));
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("UserInterface", "\344\275\234\350\200\205", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("UserInterface", "\344\271\246\345\220\215", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("UserInterface", "\344\271\246\345\217\267", nullptr));
        RestoreBookBtn->setText(QCoreApplication::translate("UserInterface", "\345\275\222\350\277\230\345\233\276\344\271\246", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("UserInterface", "\350\277\230\344\271\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInterface: public Ui_UserInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
