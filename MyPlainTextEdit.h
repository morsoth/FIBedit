#pragma once

#include "QPlainTextEdit"
#include <QFile>
#include <QDateTime>
#include <QFileSystemWatcher>

class MyPlainTextEdit : public QPlainTextEdit {
    Q_OBJECT

public:
    MyPlainTextEdit(QWidget *parent);
    QFile *file;
    bool modified;
};
