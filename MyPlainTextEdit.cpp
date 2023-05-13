#include "MyPlainTextEdit.h"
#include <QPlainTextEdit>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>

MyPlainTextEdit::MyPlainTextEdit(QWidget *parent) : QPlainTextEdit(parent) {}

void MyPlainTextEdit::openFile() {
    QString filename = QFileDialog::getOpenFileName(this, "Open File:", "~");
    currentFile = new QFile(filename);
    
    if (currentFile->open(QFile::ReadOnly)) {
        QTextStream in(currentFile);
        this->document()->setPlainText(in.readAll());
        currentFile->close();
    }
}

void MyPlainTextEdit::saveFile() {
    QString text = this->toPlainText();
        
    if (currentFile->open(QFile::WriteOnly)) {
        QTextStream out(currentFile);
        out << text;
        currentFile->close();
    }
}
