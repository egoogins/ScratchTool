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
// Create all of the Layouts, Widgets, and Toolbars
    QWidget* fieldMaps = new QWidget(this);
    QVBoxLayout* fieldLayout = new QVBoxLayout(this);

    QWidget* buttonWidget = new QWidget(this);
    QHBoxLayout* buttonLayout = new QHBoxLayout(this);

    next = new QPushButton("Next", this);
    previous = new QPushButton("Previous", this);

    field = new FieldView();
    QLabel* fieldLabel = new QLabel(tr("Field View"));

// Setup each Layout and Widget
    fieldLayout->addWidget(fieldLabel);
    fieldLayout->addWidget(field);
    buttonLayout->addWidget(previous);
    buttonLayout->addWidget(next);

    fieldMaps->setLayout(fieldLayout);
    buttonWidget->setLayout(buttonLayout);


// Add all of the widgets to the mainLayout
    QHBoxLayout* mainLayout = new QHBoxLayout(this);
    mainLayout->addWidget(fieldMaps);
    mainLayout->addWidget(buttonWidget);
    this->setLayout(mainLayout);

// Connect button signals to the appropriate slots
    connect(next, SIGNAL(released()), this, SLOT(handleButton()));
    connect(previous, SIGNAL(released()), this, SLOT(handleButton()));
}

void MainWidget::handleButton()
{
    // change the text
    std::cout << "Click!" << std::endl;

}
