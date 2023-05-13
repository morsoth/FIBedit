#include "ui_Form.h"

class MyForm : public QMainWindow {
    Q_OBJECT

public:
    MyForm(QWidget *parent = 0);

private:
    Ui::MyForm ui;

public slots:
    void newTab();
    void closeTab();
    void closeTab(int index);
};
