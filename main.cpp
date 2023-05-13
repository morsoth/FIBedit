#include <QApplication>
#include <QFile>
#include "MyForm.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    QFile styleSheet("stylesheet.qss");
    styleSheet.open(QFile::ReadOnly);

    app.setStyleSheet(styleSheet.readAll());

    MyForm form;
    form.show();
    
    return app.exec();
}
