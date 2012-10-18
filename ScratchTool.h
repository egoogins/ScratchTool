/*
 *LocTool main class that brings everything together
 *
 * @author EJ Googins <egoogins@bowdoin.edu>
 * @date Fall 2012
 */

#ifndef SCRATCHTOOL_H
#define SCRATCHTOOL_H

#include <qmainwindow.h>

class MainWidget;

class ScratchTool : public QMainWindow {

Q_OBJECT

public:
    ScratchTool();
    ~ScratchTool() {};

private:
    MainWidget *central;
};

class MainWidget : public QWidget {
Q_OBJECT

public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget() {};

};

#endif //SCRATCHTOOL_H
