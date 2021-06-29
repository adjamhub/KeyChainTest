/*
 * Copyright (C) Andrea Diamantini 2021 <adjam@protonmail.com>
 *
 * KeyChainTest project
 *
 * @license GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>
 */


#include <QApplication>

#include "mainview.h"


int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    
    app.setApplicationName("KeyChainTest");
    app.setApplicationVersion("0.0.0");
    app.setOrganizationName("adjam");
    app.setOrganizationDomain("adjam.org");

    MainView w;
    w.show();
    
    return app.exec();
}
