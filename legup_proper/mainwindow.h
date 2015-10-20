#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

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
    void newProject();
    void newFile();
    void openProject();
    void openFile();
    bool save();
    bool saveAs();
    void run();
    void about();

    void documentWasModified();

    void on_treeView_doubleClicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;

    QAction *newProjectAct;
    QAction *newFileAct;
    QAction *openProjectAct;
    QAction *openFileAct;
    QAction *saveAct;
    QAction *saveAsAct;
    QAction *exitAct;
    QAction *runAct;
    QAction *aboutAct;

    QToolBar *toolBar;
    QStatusBar *statusBar;

    QTextEdit *fileEdit;

    QString curFile;

    QTreeView *treeView;

    QFileSystemModel *dirModel;

    void init();
    void createActions();
    void createToolBar();

    void loadFile(const QString &fileName);
    bool saveFile(const QString &fileName);
    bool maybeSave();
    void setCurrentFile(const QString &fileName);
    void loadProject(const QString &pPath);

};

#endif // MAINWINDOW_H
