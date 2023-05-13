#pragma once

#include "QPlainTextEdit"
#include <QFile>
#include <QDateTime>

class MyPlainTextEdit : public QPlainTextEdit {
    Q_OBJECT

public:
    MyPlainTextEdit(QWidget *parent);
    QFile *file;
    QDateTime lastModified;
    bool modified;

    void loadFile();
};
