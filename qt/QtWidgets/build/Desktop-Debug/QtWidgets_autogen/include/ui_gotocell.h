/********************************************************************************
** Form generated from reading UI file 'gotocell.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTOCELL_H
#define UI_GOTOCELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GoToCell
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *GoToCell)
    {
        if (GoToCell->objectName().isEmpty())
            GoToCell->setObjectName("GoToCell");
        GoToCell->resize(512, 343);
        verticalLayout = new QVBoxLayout(GoToCell);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(GoToCell);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(GoToCell);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(320, 123, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(GoToCell);
        okButton->setObjectName("okButton");
        okButton->setEnabled(false);

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(GoToCell);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_2);

#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(GoToCell);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(GoToCell);
    } // setupUi

    void retranslateUi(QDialog *GoToCell)
    {
        GoToCell->setWindowTitle(QCoreApplication::translate("GoToCell", "Go to Cell", nullptr));
        label->setText(QCoreApplication::translate("GoToCell", "<html><head/><body><p>Cell Location</p></body></html>", nullptr));
        okButton->setText(QCoreApplication::translate("GoToCell", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("GoToCell", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GoToCell: public Ui_GoToCell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTOCELL_H
