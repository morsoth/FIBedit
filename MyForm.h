#include "ui_Form.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include "MyPlainTextEdit.h"

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

    Theme defaultTheme;

private:
    Ui::MyForm ui;
    QFileSystemWatcher *watcher;

public slots:
    void newFile();
    void openFile();
    void saveFile();
    void closeFile();
    void closeFile(int index);
    void onFileChanged(const QString &path);
    void onTextChanged();
    int existsFile(const QString &path);

private slots:
    QWidget *getCurrentTab();
    MyPlainTextEdit *getCurrentText();
    MyPlainTextEdit *getTextByIndex(int index);
    MyPlainTextEdit *getTextByPath(const QString &path);

signals:
    void line(const QString &l);
    void column(const QString &c);
};
