#include "MyForm.h"

MyForm::MyForm(QWidget *parent) : QMainWindow(parent) {
    ui.setupUi(this);
}

void MyForm::newFile() {
    ui.tabWidget->insertTab(ui.tabWidget->count(), new MyPlainTextEdit(this), QIcon(QString("")), "New File");
    ui.tabWidget->setCurrentIndex(ui.tabWidget->count()-1);
}

void MyForm::openFile() {
    QString path = QFileDialog::getOpenFileName(this, "Open File:", "~");
    QFile *nfile = new QFile(path);
    if (nfile->open(QFile::ReadOnly)) {
        newFile();
        getCurrentText()->file = nfile;
        QTextStream in(nfile);
        getCurrentText()->setPlainText(in.readAll());
        nfile->close();
    }
}

void MyForm::saveFile() {
    if (getCurrentText()->file == nullptr) {
        QString path = QFileDialog::getSaveFileName(this, "Save File As:");
        getCurrentText()->file = new QFile(path);
    }
    QString text = getCurrentText()->toPlainText();
    if (getCurrentText()->file->open(QFile::WriteOnly)) {
        QTextStream out(getCurrentText()->file);
        out << text;
        getCurrentText()->file->close();
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
