#ifndef BUILDINGINPROGRESS_H
#define BUILDINGINPROGRESS_H

#include <QMainWindow>

class buildingInProgress : public QMainWindow
{
    Q_OBJECT
private:

public:
    buildingInProgress(QWidget *parent = nullptr);
    ~buildingInProgress();

private slots:
    void tryToExit();
    void cancelExit();
};
#endif // BUILDINGINPROGRESS_H
