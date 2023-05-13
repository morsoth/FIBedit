#include "MyPlainTextEdit.h"
#include <QPlainTextEdit>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>

MyPlainTextEdit::MyPlainTextEdit(QWidget *parent) : QPlainTextEdit(parent) {}

/* void MyPlainTextEdit::openFile() {
    QString filename = QFileDialog::getOpenFileName(this, "Open File:", "~");
    currentFile = new QFile(filename);
    if (currentFile->open(QFile::ReadOnly)) {
        QTextStream in(currentFile);
        this->document()->setPlainText(in.readAll());
        currentFile->close();
    }
}

void MyPlainTextEdit::saveFile() {
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
}

void MyPlainTextEdit::newFile() {
    delete currentFile;
    currentFile = NULL;
    this->clear();
} */
