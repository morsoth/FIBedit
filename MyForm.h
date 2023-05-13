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
    static std::map<QString, QString> languages; //TODO
    Theme defaultTheme;

private:
    Ui::MyForm ui;
    QFileSystemWatcher *watcher;
<<<<<<< HEAD
    void setupLangs();
=======
    void setupLangMap();
>>>>>>> 2446dc44ba635075e3fdc1a97f6c7532a1b3dd96

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
<<<<<<< HEAD
};
=======
};

void MyForm::setupLangMap() {
    languages = {
        // c, c++
        {".cpp", "C++"},
        {".hpp", "C++"},
        {".cc", "C++"},
        {".hh", "C++"},
        {".c", "C"},
        {".h", "C"},
        {".txt", "Plain Text"},
        {".py", "Python"},
        {".java", "Java"},
        {".html", "HTML"},
        {".css", "CSS"},
        {".js", "JavaScript"},
        {".xml", "XML"},
        {".json", "JSON"},
        {".sql", "SQL"},
        {".md", "Markdown"},
        {".sh", "Shell"},
        {".bash", "Bash"},
        {".el", "Emacs Lisp"},
        {".lua", "Lua"},
        {".scm", "Scheme"},
        {".lisp", "Common Lisp"},
        {".php", "PHP"},
        {".cs", "C#"},
        {".go", "Go"},
        {".kt", "Kotlin"},
        {".swift", "Swift"},
        {".rs", "Rust"},
        {".rb", "Ruby"},
        {".ts", "TypeScript"},
        {".org", "Org"},
        {".yml", "Yaml"},
    };
}
>>>>>>> 2446dc44ba635075e3fdc1a97f6c7532a1b3dd96
