/********************************************************************************
** Form generated from reading UI file 'sort.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORT_H
#define UI_SORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Sort
{
public:
    QGridLayout *gridLayout;
    QGroupBox *firstGroupBox;
    QGridLayout *gridLayout1;
    QLabel *label1;
    QComboBox *firstColumnCombo;
    QLabel *label2;
    QComboBox *firstOrderCombo;
    QGroupBox *secondGroupBox;
    QGridLayout *gridLayout2;
    QLabel *label3;
    QComboBox *secondColumnCombo;
    QLabel *label4;
    QComboBox *secondOrderCombo;
    QGroupBox *thirdGroupBox;
    QGridLayout *gridLayout3;
    QLabel *label5;
    QComboBox *thirdColumnCombo;
    QLabel *label6;
    QComboBox *thirdOrderCombo;
    QPushButton *moreButton;

    void setupUi(QDialog *Sort)
    {
        if (Sort->objectName().isEmpty())
            Sort->setObjectName("Sort");
        Sort->resize(400, 300);
        gridLayout = new QGridLayout(Sort);
        gridLayout->setObjectName("gridLayout");
        firstGroupBox = new QGroupBox(Sort);
        firstGroupBox->setObjectName("firstGroupBox");
        gridLayout1 = new QGridLayout(firstGroupBox);
        gridLayout1->setObjectName("gridLayout1");
        label1 = new QLabel(firstGroupBox);
        label1->setObjectName("label1");

        gridLayout1->addWidget(label1, 0, 0, 1, 1);

        firstColumnCombo = new QComboBox(firstGroupBox);
        firstColumnCombo->addItem(QString());
        firstColumnCombo->setObjectName("firstColumnCombo");

        gridLayout1->addWidget(firstColumnCombo, 0, 1, 1, 1);

        label2 = new QLabel(firstGroupBox);
        label2->setObjectName("label2");

        gridLayout1->addWidget(label2, 1, 0, 1, 1);

        firstOrderCombo = new QComboBox(firstGroupBox);
        firstOrderCombo->addItem(QString());
        firstOrderCombo->addItem(QString());
        firstOrderCombo->setObjectName("firstOrderCombo");

        gridLayout1->addWidget(firstOrderCombo, 1, 1, 1, 1);


        gridLayout->addWidget(firstGroupBox, 0, 0, 1, 1);

        secondGroupBox = new QGroupBox(Sort);
        secondGroupBox->setObjectName("secondGroupBox");
        gridLayout2 = new QGridLayout(secondGroupBox);
        gridLayout2->setObjectName("gridLayout2");
        label3 = new QLabel(secondGroupBox);
        label3->setObjectName("label3");

        gridLayout2->addWidget(label3, 0, 0, 1, 1);

        secondColumnCombo = new QComboBox(secondGroupBox);
        secondColumnCombo->addItem(QString());
        secondColumnCombo->setObjectName("secondColumnCombo");

        gridLayout2->addWidget(secondColumnCombo, 0, 1, 1, 1);

        label4 = new QLabel(secondGroupBox);
        label4->setObjectName("label4");

        gridLayout2->addWidget(label4, 1, 0, 1, 1);

        secondOrderCombo = new QComboBox(secondGroupBox);
        secondOrderCombo->addItem(QString());
        secondOrderCombo->addItem(QString());
        secondOrderCombo->setObjectName("secondOrderCombo");

        gridLayout2->addWidget(secondOrderCombo, 1, 1, 1, 1);


        gridLayout->addWidget(secondGroupBox, 1, 0, 1, 1);

        thirdGroupBox = new QGroupBox(Sort);
        thirdGroupBox->setObjectName("thirdGroupBox");
        gridLayout3 = new QGridLayout(thirdGroupBox);
        gridLayout3->setObjectName("gridLayout3");
        label5 = new QLabel(thirdGroupBox);
        label5->setObjectName("label5");

        gridLayout3->addWidget(label5, 0, 0, 1, 1);

        thirdColumnCombo = new QComboBox(thirdGroupBox);
        thirdColumnCombo->addItem(QString());
        thirdColumnCombo->setObjectName("thirdColumnCombo");

        gridLayout3->addWidget(thirdColumnCombo, 0, 1, 1, 1);

        label6 = new QLabel(thirdGroupBox);
        label6->setObjectName("label6");

        gridLayout3->addWidget(label6, 1, 0, 1, 1);

        thirdOrderCombo = new QComboBox(thirdGroupBox);
        thirdOrderCombo->addItem(QString());
        thirdOrderCombo->addItem(QString());
        thirdOrderCombo->setObjectName("thirdOrderCombo");

        gridLayout3->addWidget(thirdOrderCombo, 1, 1, 1, 1);


        gridLayout->addWidget(thirdGroupBox, 2, 0, 1, 1);

        moreButton = new QPushButton(Sort);
        moreButton->setObjectName("moreButton");
        moreButton->setCheckable(true);

        gridLayout->addWidget(moreButton, 3, 0, 1, 1);


        retranslateUi(Sort);

        QMetaObject::connectSlotsByName(Sort);
    } // setupUi

    void retranslateUi(QDialog *Sort)
    {
        Sort->setWindowTitle(QCoreApplication::translate("Sort", "Sort", nullptr));
        firstGroupBox->setTitle(QCoreApplication::translate("Sort", "\320\237\320\265\321\200\320\262\320\270\321\207\320\275\321\213\320\271 \320\272\320\273\321\216\321\207", nullptr));
        label1->setText(QCoreApplication::translate("Sort", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
        firstColumnCombo->setItemText(0, QCoreApplication::translate("Sort", "\320\237\321\203\321\201\321\202\320\276", nullptr));

        label2->setText(QCoreApplication::translate("Sort", "\320\237\320\276\321\200\321\217\320\264\320\276\320\272 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        firstOrderCombo->setItemText(0, QCoreApplication::translate("Sort", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        firstOrderCombo->setItemText(1, QCoreApplication::translate("Sort", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));

        secondGroupBox->setTitle(QCoreApplication::translate("Sort", "\320\222\321\202\320\276\321\200\320\276\320\271 \320\272\320\273\321\216\321\207", nullptr));
        label3->setText(QCoreApplication::translate("Sort", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
        secondColumnCombo->setItemText(0, QCoreApplication::translate("Sort", "\320\237\321\203\321\201\321\202\320\276", nullptr));

        label4->setText(QCoreApplication::translate("Sort", "\320\237\320\276\321\200\321\217\320\264\320\276\320\272 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        secondOrderCombo->setItemText(0, QCoreApplication::translate("Sort", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        secondOrderCombo->setItemText(1, QCoreApplication::translate("Sort", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));

        thirdGroupBox->setTitle(QCoreApplication::translate("Sort", "\320\242\321\200\320\265\321\202\320\270\320\271 \320\272\320\273\321\216\321\207", nullptr));
        label5->setText(QCoreApplication::translate("Sort", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
        thirdColumnCombo->setItemText(0, QCoreApplication::translate("Sort", "\320\237\321\203\321\201\321\202\320\276", nullptr));

        label6->setText(QCoreApplication::translate("Sort", "\320\237\320\276\321\200\321\217\320\264\320\276\320\272 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        thirdOrderCombo->setItemText(0, QCoreApplication::translate("Sort", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        thirdOrderCombo->setItemText(1, QCoreApplication::translate("Sort", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));

        moreButton->setText(QCoreApplication::translate("Sort", "\320\221\320\276\320\273\321\214\321\210\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sort: public Ui_Sort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORT_H
