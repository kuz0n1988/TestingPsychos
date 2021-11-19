#ifndef DOYOUWHANTTOEXIT_H
#define DOYOUWHANTTOEXIT_H

#include <QWidget>
#include <QDialog>  // это диалоговое окно

class DoYouWhantToExit : public QDialog
{
    Q_OBJECT
public:
    explicit DoYouWhantToExit(QWidget *parent = nullptr);

private slots :
    void pushOk();
    void pushCancel();
signals:
    void closeDialog();
};

#endif // DOYOUWHANTTOEXIT_H
