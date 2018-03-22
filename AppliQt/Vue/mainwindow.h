#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "controleur_client.h"
#include "controleur_personnel.h"
#include <QTreeView>
#include <QStandardItemModel>


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();

    public slots:
        void slotAPropos();
        void slotAjouterClient();
        void slotModifierClient();
        void slotSupprimerClient();
        void slotMiseAJourTableView();
        void slotAjouterPersonnel();
        void slotModifierPersonnel();
        void slotSupprimerPersonnel();

    private:
        Ui::MainWindow *ui;
        QSqlTableModel *tableModel;
        QStandardItemModel *treeModel;
        Controleur_Client *controleur_client;
        Controleur_Personnel *controleur_personnel;

        void InitialiseGraphique();
        void InitialiseTableView();
        void InitialiseTreeView();
        void MiseAJourTeeView();
};

#endif // MAINWINDOW_H
