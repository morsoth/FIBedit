#include "MyForm.h"

MyForm::MyForm(QWidget *parent) : QMainWindow(parent) {
    ui.setupUi(this);
}

void MyForm::newTab() {
    ui.tabWidget->insertTab(ui.tabWidget->count(), new QWidget, QIcon(QString("")), "New File");
    ui.tabWidget->setCurrentIndex(ui.tabWidget->count()-1);
}
