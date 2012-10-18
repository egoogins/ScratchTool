#include <QtGui/QApplication>
#include "ScratchTool.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    ScratchTool tool;
    tool.show();

    return app.exec();
}
