#include "ui_Form.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include "MyPlainTextEdit.h"

struct Theme {
    QString themeName;
    QString backgroundColor;
    QString fontColor;
};

class MyForm : public QMainWindow {
    Q_OBJECT

public:
    MyForm(QWidget *parent = 0);

    Theme theme;

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
    int existsFile(const QString &path);

private slots:
    QWidget *getCurrentTab();
    MyPlainTextEdit *getCurrentText();
    MyPlainTextEdit *getTextByIndex(int index);
    MyPlainTextEdit *getTextByPath(const QString &path);

signals:
    void line(int l);
    void column(int c);
};

/* void MainWindow::onTextChanged()
{
    QTextCursor cursor = ui->plainTextEdit->textCursor();
    int linea = cursor.blockNumber() + 1; // El número de línea comienza en 0
    int columna = cursor.columnNumber() + 1; // El número de columna comienza en 0

    // Actualizar la etiqueta que muestra la línea y la columna
    ui->etiquetaLineaColumna->setText(QString("Línea %1, columna %2").arg(linea).arg(columna));
} */

