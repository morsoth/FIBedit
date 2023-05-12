#include <QPlainTextEdit>

class MyPlainTextEdit : public QPlainTextEdit {
    Q_OBJECT

public:
        MyPlainTextEdit(QWidget *parent);

public slots:
    void openFile();
    //void newFile();
    //void saveFile();

signals:
};
