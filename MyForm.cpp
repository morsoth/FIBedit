#include "MyForm.h"
#include "MyPlainTextEdit.h"

MyForm::MyForm(QWidget *parent) : QMainWindow(parent) {
    ui.setupUi(this);
}

void MyForm::newTab() {
    ui.tabWidget->insertTab(ui.tabWidget->count(), new MyPlainTextEdit(this), QIcon(QString("")), "New File");
    ui.tabWidget->setCurrentIndex(ui.tabWidget->count()-1);
}

void MyForm::closeTab() {
    if (ui.tabWidget->count() == 0) return;
    QWidget *tab = dynamic_cast<QWidget*>(ui.tabWidget->currentWidget());
    disconnect(tab, 0, 0, 0);
    tab->close();
    delete tab;
    tab = NULL;
}
