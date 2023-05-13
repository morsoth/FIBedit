#include "MyPlainTextEdit.h"
#include <QPlainTextEdit>

MyPlainTextEdit::MyPlainTextEdit(QWidget *parent) : QPlainTextEdit(parent) {
    file = nullptr;
    modified = false;
}

void MyPlainTextEdit::loadFile() {
    //if (not file.isNull()) return;

}

/* void MyPlainTextEdit::saveFile() {
    if (currentFile == NULL) {
        QString filename = QFileDialog::getSaveFileName(this, "Save File As:", "~");
        currentFile = new QFile(filename);
    } else {
        QString text = this->toPlainText();
        if (currentFile->open(QFile::WriteOnly)) {
            QTextStream out(currentFile);
            out << text;
            currentFile->close();
        }
    }
} */
