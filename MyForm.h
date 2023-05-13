#pragma once

#include "ui_Form.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include "MyPlainTextEdit.h"

#include <map>

struct Theme {
    QString themeName;
    QString backgroundColor;
    QString fontColor;
    QString secondaryColor;
    QString fontName;
    int fontSize;
};

class MyForm : public QMainWindow {
    Q_OBJECT

public:
    MyForm(QWidget *parent = 0);
    std::map<QString, QString> languages; //TODO
    Theme defaultTheme;

private:
    Ui::MyForm ui;
    QFileSystemWatcher *watcher;
<<<<<<< HEAD
=======

    void setupLangMap();
>>>>>>> b82c67d34441946bdb5991fa3d4863d7cb8d6d4f

public slots:
    void newFile();
    void openFile();
    void saveFile();
    void closeFile();
    void closeFile(int index);
    void onFileChanged(const QString &path);
    void onCursorChanged();
    int existsFile(const QString &path);
    void showFileSize();

private slots:
    QWidget *getCurrentTab();
    MyPlainTextEdit *getCurrentText();
    MyPlainTextEdit *getTextByIndex(int index);
    MyPlainTextEdit *getTextByPath(const QString &path);

signals:
    void line(const QString &l);
    void column(const QString &c);
    void fileSize(const QString &s);
    void tabChanged();
};
