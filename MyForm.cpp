#include "MyForm.h"

MyForm::MyForm(QWidget *parent) : QMainWindow(parent) {
    ui.setupUi(this);
}

void MyForm::newFile() {
    ui.tabWidget->insertTab(ui.tabWidget->count(), new MyPlainTextEdit(this), QIcon(QString("")), "New File");
    ui.tabWidget->setCurrentIndex(ui.tabWidget->count()-1);
}

void MyForm::openFile() {
    QString filename = QFileDialog::getOpenFileName(this, "Open File:", "~");
    QFile file(filename);
    if (file.open(QFile::ReadOnly)) {
        newFile();
        getCurrentText()->file = &file;
        QTextStream in(&file);
        getCurrentText()->setPlainText(in.readAll());
        file.close();
    }
}

void MyForm::saveFile() {
    if (true) {
        QString filename = QFileDialog::getSaveFileName(this, "Save File As:", "~");
        getCurrentText()->file = new QFile(filename);
    }
    else {
        QString text = getCurrentText()->toPlainText();
        if (getCurrentText()->file->open(QFile::WriteOnly)) {
            QTextStream out(getCurrentText()->file);
            out << text;
            getCurrentText()->file->close();
        }
    }
}

void MyForm::closeFile() {
    if (ui.tabWidget->count() == 0) return;
    //check if is not saved
    QWidget *tab = getCurrentTab();
    tab->close();
    delete tab;
}

void MyForm::closeFile(int index) {
    if (ui.tabWidget->count() == 0) return;
    //check if is not saved
    ui.tabWidget->removeTab(index);
}

QWidget* MyForm::getCurrentTab() {
    return dynamic_cast<QWidget*>(ui.tabWidget->currentWidget());
}

MyPlainTextEdit* MyForm::getCurrentText() {
    return dynamic_cast<MyPlainTextEdit*>(ui.tabWidget->currentWidget());
}
