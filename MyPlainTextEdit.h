#include <QPlainTextEdit>

class MyPlainTextEdit : public QPlainTextEdit {
    Q_OBJECT

public:
        MyPlainTextEdit(QWidget *parent);
        QFile currentFile;

public slots:
    void openFile();
    //void newFile();
    void saveFile();

signals:
};
