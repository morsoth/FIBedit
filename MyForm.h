#include "ui_Form.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QTimer>
#include "MyPlainTextEdit.h"

class MyForm : public QMainWindow {
    Q_OBJECT

public:
    MyForm(QWidget *parent = 0);

private:
    Ui::MyForm ui;
    QTimer *timer;

public slots:
    void newFile();
    void openFile();
    void saveFile();
    void closeFile();
    void closeFile(int index);
    void checkFileChanged();

    QWidget* getCurrentTab();
    MyPlainTextEdit* getCurrentText();
};
