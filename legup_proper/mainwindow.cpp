#include <QtWidgets>

#include "mainwindow.h"
#include "ui_mainwindow.h"

/***constructor and destructor***/
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    init();
    createActions();
    createToolBar();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/***initial setup functions***/
void MainWindow::init(){
    newAct = ui->actionNew;
    openAct = ui->actionOpen;
    openProjectAct = ui->actionOpen_Project;
    saveAct = ui->actionSave;
    saveAsAct = ui->actionSave_As;
    runAct = ui->actionRun;
    exitAct = ui->actionExit;
    aboutAct = ui->actionAbout_LegUp;

    toolBar = ui->mainToolBar;
}

void MainWindow::createActions(){
    connect(newAct, SIGNAL(triggered()), this, SLOT(newFile()));
    connect(openAct, SIGNAL(triggered()), this, SLOT(open()));
    connect(openProjectAct, SIGNAL(triggered()), this, SLOT(openProject()));
    connect(saveAct, SIGNAL(triggered()), this, SLOT(save()));
    connect(saveAsAct, SIGNAL(triggered()), this, SLOT(saveAs()));
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));
    connect(runAct, SIGNAL(triggered()), this, SLOT(run()));
    connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));
}

void MainWindow::createToolBar(){
    toolBar->addAction(newAct);
    toolBar->addAction(openAct);
    toolBar->addAction(openProjectAct);
    toolBar->addAction(saveAct);
    toolBar->addAction(saveAsAct);
    toolBar->addSeparator();
    toolBar->addAction(runAct);
    toolBar->addSeparator();
    toolBar->addAction(aboutAct);
}

/***slot functions***/
void MainWindow::newFile(){

}

void MainWindow::open(){

}

void MainWindow::openProject(){

}

void MainWindow::save(){

}

void MainWindow::saveAs(){

}

void MainWindow::run(){

}

void MainWindow::about(){
    QMessageBox::about(this, tr("About LegUp"),
             tr("LegUp is an open source <b>high-level synthesis</b> "
                "tool being developed at the University of Toronto."));
}
