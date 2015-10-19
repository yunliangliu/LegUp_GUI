#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void newFile();
    void open();
    void openProject();
    void save();
    void saveAs();
    void run();
    void about();

private:
    Ui::MainWindow *ui;

    QAction *newAct;
    QAction *openAct;
    QAction *openProjectAct;
    QAction *saveAct;
    QAction *saveAsAct;
    QAction *exitAct;
    QAction *runAct;
    QAction *aboutAct;

    QToolBar *toolBar;

    void init();
    void createActions();
    void createToolBar();
};

#endif // MAINWINDOW_H
