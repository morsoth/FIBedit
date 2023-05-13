#include <QApplication>
#include <QFile>
#include "MyForm.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    
    QFile styleFile("stylesheet.qss");
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = styleFile.readAll();

    app.setStyleSheet(styleSheet);

    MyForm form;
    form.show();
    
    return app.exec();
}