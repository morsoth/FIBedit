#include "ui_Form.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

class MyForm : public QMainWindow {
    Q_OBJECT

public:
    MyForm(QWidget *parent = 0);

private:
    Ui::MyForm ui;

public slots:
    void newFile();
    void openFile();
    void saveFile();
    void closeFile();
    void closeFile(int index);

    QWidget* getCurrentTab();
};
