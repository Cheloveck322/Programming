#include "sort.h"
#include "ui_sort.h"

Sort::Sort(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sort)
{
    ui->setupUi(this);

    // Скрываем вторую и третью группы при старте
    ui->secondGroupBox->setVisible(false);
    ui->thirdGroupBox->setVisible(false);

    // Соединяем кнопку "Больше" с показом/скрытием групп
    connect(ui->moreButton, &QPushButton::toggled, ui->secondGroupBox, &QGroupBox::setVisible);
    connect(ui->moreButton, &QPushButton::toggled, ui->thirdGroupBox, &QGroupBox::setVisible);
}

Sort::~Sort()
{
    delete ui;
}
