#include "buildinginprogress.h"

#include <QTextStream>  // для stdout (только для прототипов и заглушек)
#include <QApplication> // в основном для qApp QApplication::auit
#include <QAction>
#include <QString>
#include <QMenuBar> // для главного меню
#include <QList>
#include <QStatusBar>
#include <QActionGroup>

buildingInProgress::buildingInProgress(QWidget *parent)
    : QMainWindow(parent)
{
    // Рисуем главное окно
    resize(800, 600);
    setWindowTitle("Психологическое тестирование");

    // Программа делается по образу и подобию продукта МП Психологический центр " К А Т А Р С И С "
    // Пакет психодиагностических программ ТЕСТ Версия 1.0 Луганск 1992
    // Для простоты внедрения программы на рабочие места, нагло воруем у неё интерфейс

    // =====Меню: Меню=====
    QList<QAction*> menu_menu;


    // Шапка для меню явно должна делаться совершенно не так. Но раз работает - менять не буду
    QAction *menu_head = new QAction("    Методика                               \tОбъём   \tВремя");
    menu_head->setDisabled(true);

    menu_menu.push_back (new QAction(" 1. Тест Стреляу                           \t134     \t    30"));
    menu_menu.push_back (new QAction(" 2. Порог активности                       \t18      \t    10"));
    menu_menu.push_back (new QAction(" 3. Краткий ориентировочный тест           \t50      \t    15"));
    menu_menu.push_back (new QAction(" 4. Школьный тест умственного развития     \t119     \t    44"));
    menu_menu.push_back (new QAction(" 5. Тест мотивации одобрения               \t20      \t    10"));
    menu_menu.push_back (new QAction(" 6. Тест родительского отношения           \t61      \t    15"));
    menu_menu.push_back (new QAction(" 7. Тест Басса-Дарки                       \t75      \t    20"));
    menu_menu.push_back (new QAction(" 8. Тест склонности к риску                \t25      \t    10"));
    menu_menu.push_back (new QAction(" 9. Тест эмоциональной напряженности       \t30      \t    10"));
    menu_menu.push_back (new QAction("10. Тест Дженкинса                         \t61      \t    15"));

    QList<QString> menu_menu_status;    // Подписи для статусбара
    menu_menu_status.push_back("Исследование основных свойств нервной системы");
    menu_menu_status.push_back("Диагностика готовности совершения реальных действий (решительности)");
    menu_menu_status.push_back("Исследование общих способностей (интеллект)");
    menu_menu_status.push_back("Диагностика умственного развития учащихся - подростков и юношей");
    menu_menu_status.push_back("Диагностика установки на социально желательное поведение");
    menu_menu_status.push_back("Выявление родительского отношения в связи с проблемами в воспитании детей");
    menu_menu_status.push_back("Исследование агрессивного поведения");
    menu_menu_status.push_back("Оценка склонности к риску");
    menu_menu_status.push_back("Определение степени эмоциональной напряженности у детей (с 12 лет)");
    menu_menu_status.push_back("Диагностика поведенческого фактора риска сердечно-сосудистых заболеваний");

    QAction *app_exit                  = new QAction("Выход из программы");



    // Формируем главное меню
    QMenu *mainMenu;

    mainMenu = menuBar()->addMenu("Меню");
    mainMenu->addAction(menu_head);
    mainMenu->addSeparator();
    mainMenu->addActions(menu_menu);
    mainMenu->addSeparator();
    mainMenu->addAction(app_exit);

    mainMenu = menuBar()->addMenu("Данные");
    mainMenu = menuBar()->addMenu("Тест");
    mainMenu = menuBar()->addMenu("Результат");
    mainMenu = menuBar()->addMenu("Бланк");
    mainMenu = menuBar()->addMenu("Печать");
    mainMenu = menuBar()->addMenu("Инфо");
    mainMenu = menuBar()->addMenu("Опции");
    mainMenu = menuBar()->addMenu("F1 Помощь");

    // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    // ======не забыть назначить горячую клавишу F1============
    // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


}
