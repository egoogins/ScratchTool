/*
 * @author EJ Googins <egoogins@bowdoin.edu>
 */

#include "ScratchTool.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>

#include <iostream>

ScratchTool::ScratchTool() : QMainWindow(),
                             central(new MainWidget(this))
{
    this->setWindowTitle(tr("LocTool"));
    this->setCentralWidget(central);
}

MainWidget::MainWidget(QWidget *parent) : QWidget(parent)
{
    QWidget* fieldMaps = new QWidget(this);
    QVBoxLayout* fieldLayout = new QVBoxLayout(this);

    field = new FieldView();
    QLabel* fieldLabel = new QLabel(tr("Field View"));
    fieldLayout->addWidget(fieldLabel);
    fieldLayout->addWidget(field);

    fieldMaps->setLayout(fieldLayout);

    QHBoxLayout* mainLayout = new QHBoxLayout(this);

    mainLayout->addWidget(fieldMaps);
    this->setLayout(mainLayout);
}
