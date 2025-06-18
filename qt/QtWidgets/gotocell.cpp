#include "gotocell.h"
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QTextEdit>

GoToCell::GoToCell(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GoToCell)
{
    ui->setupUi(this);
}

GoToCell::~GoToCell()
{
    delete ui;
}

GoToCellDialog:: GoToCellDialog(QWidget *parent): QDialog(parent)
{
    setupUi(this);

    QRegularExpression regExp("[A-Za-z][1-9][0-9]{0,2}");
    lineEdit->setValidator(new QRegularExpressionValidator(regExp, this));

    connect(cancelButton, SIGNAL(clicked()), this, SLOT(reject()));
    connect(okButton, SIGNAL(clicked()), this, SLOT(accept()));

    connect(lineEdit, SIGNAL(textChanged(const QString&)), this,
            SLOT(lineEditChange(const QString&)));

}

void GoToCellDialog::lineEditChange(const QString &text)
{
    okButton->setEnabled(lineEdit->hasAcceptableInput());
}
