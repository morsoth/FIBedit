#pragma once

#include "QPlainTextEdit"
#include <QFile>
#include <QDateTime>
#include <QFileSystemWatcher>

class LineNumberArea;

class MyPlainTextEdit : public QPlainTextEdit {
    Q_OBJECT

public:

    MyPlainTextEdit(QWidget *parent);
    QFile *file;
    bool modified;
    bool saved;
    void lineNumberAreaPaintEvent(QPaintEvent *event);
    int lineNumberAreaWidth();

protected:
    void resizeEvent(QResizeEvent *event) override;

private slots:
    void updateLineNumberAreaWidth(int newBlockCount);
    void highlightCurrentLine();
    void updateLineNumberArea(const QRect &rect, int dy);
private:
    QWidget *lineNumberArea;

};

class LineNumberArea : public QWidget
{
public:
    LineNumberArea(MyPlainTextEdit *editor) : QWidget(editor), codeEditor(editor)
    {}

    QSize sizeHint() const override
    {
        return QSize(codeEditor->lineNumberAreaWidth(), 0);
    }

protected:
    void paintEvent(QPaintEvent *event) override
    {
        codeEditor->lineNumberAreaPaintEvent(event);
    }

private:
    MyPlainTextEdit *codeEditor;
};
