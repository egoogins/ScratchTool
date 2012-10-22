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

    //Create the toolbar
    toolbar = new QToolBar();
    previousButton = new QPushButton("previous", this);
    nextButton = new QPushButton("next", this);
    toolbar->addWidget(previousButton);
    toolbar->addWidget(nextButton);
    this->addToolBar(toolbar);

    //Connect the buttons with appropriate slots
    connect(previousButton, SIGNAL(released()),
            central, SLOT(previousButtonClicked()));
    connect(nextButton, SIGNAL(released()),
            central, SLOT(nextButtonClicked()));
}

MainWidget::MainWidget(QWidget *parent) : QWidget(parent)
{
   // Create all of the Layouts and Widgets
    QWidget* fieldMaps = new QWidget(this);
    QVBoxLayout* fieldLayout = new QVBoxLayout(this);


    field = new FieldView();
    QLabel* fieldLabel = new QLabel(tr("Field View"));

    // Setup each Layout and Widget
    fieldLayout->addWidget(fieldLabel);
    fieldLayout->addWidget(field);

    fieldMaps->setLayout(fieldLayout);

    // Add all of the widgets to the mainLayout
    QHBoxLayout* mainLayout = new QHBoxLayout(this);
    mainLayout->addWidget(fieldMaps);

    this->setLayout(mainLayout);
}

void MainWidget::previousButtonClicked()
{
    // Print to confirm signal/slot
    std::cout << "Clicked the PREVIOUS button" << std::endl;
}

void MainWidget::nextButtonClicked()
{
    // Print to confirm signal/slot
    std::cout << "Clicked the NEXT button" << std::endl;
}
