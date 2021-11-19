#include "buildinginprogress.h"

#include <QTextStream>  // для stdout (только для прототипов и заглушек)
#include <QApplication> // в основном для qApp QApplication::auit
#include <QAction>
#include <QString>
#include <QMenuBar> // для главного меню

#include "doyouwhanttoexit.h"   // реализация окна-вопроса перед выходом


buildingInProgress::buildingInProgress(QWidget *parent)
    : QMainWindow(parent)
{
    // Рисуем главное окно
    resize(800, 600);
    setWindowTitle("Психологическое тестирование");

    // Объявляем пункты меню + заодно пару фич
    QAction *file_new = new QAction("Создать новый опрос", this);
    file_new->setEnabled(true);
    QAction *file_open = new QAction("Открыть архивный опрос", this);
    file_open->setEnabled(true);
    QAction *file_export_result = new QAction("Экспортировать результаты опроса в *.odf", this);
    file_export_result->setDisabled(true);
    QAction *file_print = new QAction("Распечатать результаты опроса", this);
    file_print->setDisabled(true);
    QAction *file_close = new QAction("Закрыть файл-опроса", this);
    file_close->setDisabled(true);
    QAction *exit = new QAction("Выход", this);

    // Формируем главное меню
    QMenu *mainMenu;
    mainMenu = menuBar()->addMenu("&Файл");
    mainMenu->addAction(file_new);              // заглушка
    mainMenu->addAction(file_open);             // заглушка
    mainMenu->addAction(file_export_result);    // заглушка
    mainMenu->addSeparator();                   // заглушка
    mainMenu->addAction(file_print);            // заглушка
    mainMenu->addSeparator();                   // заглушка
    mainMenu->addAction(file_close);            // заглушка
    mainMenu->addSeparator();                   // заглушка
    mainMenu->addAction(exit);                  // выход

    // соединяем пункты меню с событиями и слотами
    connect(exit, &QAction::triggered, this, &buildingInProgress::tryToExit);

    //
}

buildingInProgress::~buildingInProgress()
{
}

void buildingInProgress::tryToExit()
{
    QTextStream out (stdout);
    this->setDisabled(true);

    DoYouWhantToExit *exitDialog = new DoYouWhantToExit(this);
    exitDialog->show();
    out << Qt::endl << "Заглушка: \"Bыход из программы\"";
    connect(exitDialog, &DoYouWhantToExit::closeDialog, this, &buildingInProgress::cancelExit);
}

void buildingInProgress::cancelExit()
{
    this->setEnabled(true);
    QTextStream out (stdout);
    out << Qt::endl << "Заглушка: \"Отмена выхода\"";
}
