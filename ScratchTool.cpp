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
    QVBoxLayout* fieldsLayout = new QVBoxLayout(this);

    QLabel* label = new QLabel(tr("Love You Kasey!")) ;

    fieldsLayout->addWidget(label);
    fieldMaps->setLayout(fieldsLayout);

    QHBoxLayout* mainLayout = new QHBoxLayout(this);

    mainLayout->addWidget(fieldMaps);
    this->setLayout(mainLayout);
}
