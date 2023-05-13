#pragma once

#include "QPlainTextEdit"
#include <QFile>

class MyPlainTextEdit : public QPlainTextEdit {
    Q_OBJECT

public:
    MyPlainTextEdit(QWidget *parent);
    QFile *file;
    bool modified;

    void loadFile();
};
