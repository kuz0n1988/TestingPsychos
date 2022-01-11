#ifndef BUILDINGINPROGRESS_H
#define BUILDINGINPROGRESS_H

#include <QMainWindow>

class buildingInProgress : public QMainWindow
{
    Q_OBJECT
private:
    QStatusBar *m_statusbar;
public:
    buildingInProgress(QWidget *parent = nullptr);
private slots:
//    void slot_changeStatusBar();
signals:

};
#endif // BUILDINGINPROGRESS_H
