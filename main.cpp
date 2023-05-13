#include <QApplication>
#include <QFile>
#include "MyForm.h"
//#include "style.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    //Style::addTheme("default", { "rgb(209, 209, 209)", "rgb(36, 36, 36)", "rgb(45, 45, 45)", "rgb(60, 60, 60)", "rgb(250, 210, 60)"});
    //Style::fontSize = 14;
    //Style::fontName = "";

    //app.setStyleSheet(Style::selectTheme("default"));

    MyForm form;
    form.show();
    
    return app.exec();
}