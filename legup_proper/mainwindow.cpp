#include <QtWidgets>

#include "mainwindow.h"
#include "ui_mainwindow.h"

/***constructor and destructor***/
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowState(Qt::WindowMaximized);

    init();
    createActions();
    createToolBar();

    statusBar->showMessage(tr("Welcome to LegUp"));

    QString path = "C:/Users/Ang/Documents/legup";
    projectDirModel = new QFileSystemModel(this);
    projectDirModel->setRootPath(path);
    treeView->setModel(projectDirModel);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/***initial setup functions***/
void MainWindow::init(){
    newProjectAct = ui->actionNew_Project;
    newFileAct = ui->actionNew_File;
    openProjectAct = ui->actionOpen_Project_2;
    openFileAct = ui->actionOpen_File;
    saveAct = ui->actionSave;
    saveAsAct = ui->actionSave_As;
    runAct = ui->actionRun;
    exitAct = ui->actionExit;
    aboutAct = ui->actionAbout_LegUp;

    toolBar = ui->mainToolBar;
    statusBar = ui->statusBar;

    fileEdit = ui->textEdit;

    treeView = ui->treeView;

    connect(fileEdit->document(), SIGNAL(contentsChanged()),
            this, SLOT(documentWasModified()));
}

void MainWindow::createActions(){
    newProjectAct->setStatusTip(tr("Create a new project"));
    connect(newProjectAct, SIGNAL(triggered()), this, SLOT(newProject()));

    newFileAct->setStatusTip(tr("Create a new file"));
    connect(newFileAct, SIGNAL(triggered()), this, SLOT(newFile()));

    openProjectAct->setStatusTip(tr("Open an existing project"));
    connect(openProjectAct, SIGNAL(triggered()), this, SLOT(openProject()));

    openFileAct->setStatusTip(tr("Open an existing file"));
    connect(openFileAct, SIGNAL(triggered()), this, SLOT(openFile()));

    saveAct->setStatusTip(tr("Save the document to disk"));
    connect(saveAct, SIGNAL(triggered()), this, SLOT(save()));

    saveAsAct->setStatusTip(tr("Save the document under a new name"));
    connect(saveAsAct, SIGNAL(triggered()), this, SLOT(saveAs()));

    exitAct->setStatusTip(tr("Exit LegUp"));
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));

    runAct->setStatusTip(tr("Run the file"));
    connect(runAct, SIGNAL(triggered()), this, SLOT(run()));

    aboutAct->setStatusTip(tr("Learn what is LegUp"));
    connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));
}

void MainWindow::createToolBar(){
    toolBar->addAction(newProjectAct);
    toolBar->addAction(newFileAct);
    toolBar->addAction(openProjectAct);
    toolBar->addAction(openFileAct);
    toolBar->addAction(saveAct);
    toolBar->addSeparator();
    toolBar->addAction(runAct);
    toolBar->addSeparator();
    toolBar->addAction(aboutAct);
}

/***slot functions***/
void MainWindow::newProject(){

}

void MainWindow::newFile(){
    if (maybeSave()) {
        fileEdit->clear();
        setCurrentFile("");
    }
}

void MainWindow::openProject(){

}

void MainWindow::openFile(){
    if (maybeSave()) {
        QString fileName = QFileDialog::getOpenFileName(this);
        if (!fileName.isEmpty())
            loadFile(fileName);
    }
}

bool MainWindow::save(){
    if (curFile.isEmpty()) {
        return saveAs();
    } else {
        return saveFile(curFile);
    }
}

bool MainWindow::saveAs(){
    QFileDialog dialog(this);
    dialog.setWindowModality(Qt::WindowModal);
    dialog.setAcceptMode(QFileDialog::AcceptSave);
    QStringList files;
    if (dialog.exec())
        files = dialog.selectedFiles();
    else
        return false;

    return saveFile(files.at(0));
}

bool MainWindow::saveFile(const QString &fileName)
{
    QFile file(fileName);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("LegUp"),
                             tr("Cannot write file %1:\n%2.")
                             .arg(fileName)
                             .arg(file.errorString()));
        return false;
    }

    QTextStream out(&file);
#ifndef QT_NO_CURSOR
    QApplication::setOverrideCursor(Qt::WaitCursor);
#endif
    out << fileEdit->toPlainText();
#ifndef QT_NO_CURSOR
    QApplication::restoreOverrideCursor();
#endif

    setCurrentFile(fileName);
    statusBar->showMessage(tr("File saved"), 4000);
    return true;
}

void MainWindow::run(){

}

void MainWindow::about(){
    QMessageBox::about(this, tr("About LegUp"),
             tr("<p style='text-align:center;'>LegUp is an open source <b>high-level synthesis</b> "
                "tool being developed at the University of Toronto.<br>"
                "You can learn more about LegUp by visiting its official website: "
                "<a href='http://legup.eecg.utoronto.ca/'>http://legup.eecg.utoronto.ca/</a></p>"));
}

/***misc functions***/
bool MainWindow::maybeSave()
{
    if (fileEdit->document()->isModified()) {
        QMessageBox::StandardButton ret;
        ret = QMessageBox::warning(this, tr("LegUp"),
                     tr("The document has been modified.\n"
                        "Do you want to save your changes?"),
                     QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        if (ret == QMessageBox::Save)
            return save();
        else if (ret == QMessageBox::Cancel)
            return false;
    }
    return true;
}

void MainWindow::loadFile(const QString &fileName)
{
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("LegUp"),
                             tr("Cannot read file %1:\n%2.")
                             .arg(fileName)
                             .arg(file.errorString()));
        return;
    }

    QTextStream in(&file);
#ifndef QT_NO_CURSOR
    QApplication::setOverrideCursor(Qt::WaitCursor);
#endif
    fileEdit->setPlainText(in.readAll());
#ifndef QT_NO_CURSOR
    QApplication::restoreOverrideCursor();
#endif

    setCurrentFile(fileName);
    statusBar->showMessage(tr("File loaded"), 4000);
}

void MainWindow::setCurrentFile(const QString &fileName)
{
    curFile = fileName;
    fileEdit->document()->setModified(false);
    setWindowModified(false);

    QString shownName = curFile;
    if (curFile.isEmpty())
        shownName = "untitled.txt";
    setWindowFilePath(shownName);
}

void MainWindow::documentWasModified()
{
    setWindowModified(fileEdit->document()->isModified());
}
