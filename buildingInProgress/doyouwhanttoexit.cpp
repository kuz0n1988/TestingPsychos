#include "doyouwhanttoexit.h"

#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>


DoYouWhantToExit::DoYouWhantToExit(QWidget *parent) : QDialog(parent)
{
    setFixedSize(300, 150);

    // кнопки ок и отмена
    QPushButton *okBtn = new QPushButton("Ok", this); // в идеале должна закрывать файл без сохранения
    QPushButton *cancelBtn = new QPushButton("Отмена",this); // должна возвращать setEnable(true) родителю

    QHBoxLayout *hbox = new QHBoxLayout(this);  // горизонтальное ориентирование
    hbox->addWidget(okBtn);
    hbox->addWidget(cancelBtn);

    // купидоним кнопки и слоты
    connect(okBtn, &QPushButton::clicked, this, &DoYouWhantToExit::pushOk);
    connect(cancelBtn, &QPushButton::clicked, this, &DoYouWhantToExit::pushCancel);
}

void DoYouWhantToExit::pushOk()
{
    qApp->exit();
}

void DoYouWhantToExit::pushCancel()
{
//    parent()->setEnabled(true); // это говно не компилится
    this->close();
    emit closeDialog();
}
