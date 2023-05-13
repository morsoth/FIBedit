#include <QApplication>
#include <QFile>
#include <QFontDatabase>
#include "MyForm.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    QString fontPath = "/font/Mononoki-Regular.ttf";

    QFontDatabase::addApplicationFont(fontPath);
    
    QFile styleSheet("stylesheet.qss");
    styleSheet.open(QFile::ReadOnly);

    app.setStyleSheet(styleSheet.readAll());

    MyForm form;
    form.show();
    
    return app.exec();
}