#include "MyPlainTextEdit.h"
#include <QPlainTextEdit>

MyPlainTextEdit::MyPlainTextEdit(QWidget *parent) : QPlainTextEdit(parent) {
    file = nullptr;
    modified = false;
}

void MyPlainTextEdit::loadFile() {
    //if (not file.isNull()) return;
}
