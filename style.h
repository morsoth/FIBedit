#pragma once

#include <QString>
#include <map>

struct Theme {
    QString fontColor;
    QString backgroundColor;
    QString secondaryColor;
    QString tertiaryColor;
    QString detailColor;
};

//36 - 45 - 60 - 209 - (250, 210, 60)

class Style {
private:
    static std::map<QString, Theme> themes;

public:
    static int fontSize;
    static QString fontName;
    static QString selectTheme(const QString &themeName);

    static void addTheme(const QString &themeName, Theme theme);
};

QString Style::selectTheme(const QString &themeName) {
    std::map<QString, Theme>::iterator it = themes.find(ext);
    if (it == themes.end()) return "QMainWindow { background-color: rgb(255, 0, 0) }";
    else
        return
            "QMainWindow { " +
                "color: " + it->second.fontColor + "; " +
                "background-color: " + it->second.backgroundColor + "; " +
                "padding: 0px; " +
            "} " +
            "QTabWidget::pane { " +
                "padding: 0px; " +
                "background-color: " + it->second.backgroundColor + "; " +
            "} " +
            "QTabWidget { " +
                "background-color: " + it->second.backgroundColor + "; " +
                "border-bottom: 1px solid " + it->second.fontColor + "; " +
            "} " +
            "QTabBar::tab { " +
                "color: " + it->second.fontColor + "; " +
                "background-color: " + it->second.backgroundColor + "; " +
                "padding: 5px 15px; " +
                "font-size : 14px; " +
            "} " +
            "QTabBar::tab:selected { " +
                "color: " + it->second.detailColor + "; " +
                "background-color: " + it->second.secondaryColor + "; " +
                "border-bottom: 2px solid " + it->second.detailColor + "; " +
            "} " +
            "MyPlainTextEdit { " +
                "color: " + it->second.fontColor + "; " +
                "background-color: " + it->second.backgroundColor + "; " +
                "padding: 10px; " +
                "font-size: " + QString::number(fontSize) + "; " +
            "} " +
            "QMenuBar { " +
                "color: " + it->second.fontColor + "; " +
                "background-color: " + it->second.secondaryColor + "; " +
                "font-size: 14px; " +
            "} " +
            "QMenuBar::item { " +
                "padding: 5px; " +
            "} "+
            "QMenuBar::item:selected { "+
                "background-color: " + it->second.tertiaryColor + "; " +
            "} " +
            "QMenu { " +
                "color: " + it->second.fontColor + "; "+
                "background-color: " + it->second.secondaryColor + "; " +
            "} " +
            "QMenu::item { " +
                "padding: 7px 20px; " +
            "} " +
            "QMenu::item:selected { " +
                "background-color: " + it->second.tertiaryColor + "; " +
            "} " +
            "QLabel { " +
                "color: " + it->second.fontColor + "; " +
                "font-size: 14px; " +
                "padding: 5px; " +
            "} "
}

void Style::addTheme(const QString &themeName, Theme theme) {
    
}