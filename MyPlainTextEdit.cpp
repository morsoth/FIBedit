#include "MyPlainTextEdit.h"
#include <QPlainTextEdit>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>

MyPlainTextEdit::MyPlainTextEdit(QWidget *parent) : QPlainTextEdit(parent) {}

void MyPlainTextEdit::openFile() {
    QString filename = QFileDialog::getOpenFileName(this, "Open File:", "/home");
    currentFile = new QFile(filename);
    QTextStream in(currentFile);
    if (currentFile->open(QFile::ReadWrite))
        this->document()->setPlainText(in.readAll());
}

void MyPlainTextEdit::saveFile() {
    //if (currentFile. == NULL) return;
    //QTextStream out(currentFile);
    //currentFile->write(out.readAll().toLocal8Bit());
    currentFile->write("hola pepe");
}
