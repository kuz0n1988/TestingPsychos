#ifndef BUILDINGINPROGRESS_H
#define BUILDINGINPROGRESS_H

#include <QMainWindow>

class QLabel;

class buildingInProgress : public QMainWindow
{
    Q_OBJECT
private:
    QLabel                     *m_statusbar;
    static const QList<QString> menu_menu_status;
public:
    buildingInProgress(QWidget *parent = nullptr);
private slots:
    void slotChangeStatusBar();

signals:

};
#endif // BUILDINGINPROGRESS_H
