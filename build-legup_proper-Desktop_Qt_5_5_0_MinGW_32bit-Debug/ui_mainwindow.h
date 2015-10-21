/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout_LegUp;
    QAction *actionRun;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionExit;
    QAction *actionOpen_Project;
    QAction *actionNew_Project;
    QAction *actionNew_File;
    QAction *actionOpen_Project_2;
    QAction *actionOpen_File;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *fileLabel;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOpen;
    QMenu *menuNew;
    QMenu *menuBuild;
    QMenu *menuHelp;
    QMenu *menuOptions;
    QMenu *menuView;
    QMenu *menuDebug;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *outputDock;
    QWidget *dockWidgetContents_6;
    QHBoxLayout *horizontalLayout_5;
    QTextBrowser *textBrowser_2;
    QDockWidget *projectDock;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QTreeView *treeView;
    QDockWidget *aboutDock;
    QWidget *dockWidgetContents_9;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *aboutText;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(540, 605);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionAbout_LegUp = new QAction(MainWindow);
        actionAbout_LegUp->setObjectName(QStringLiteral("actionAbout_LegUp"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/About.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_LegUp->setIcon(icon);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QStringLiteral("actionRun"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/Run.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionOpen_Project = new QAction(MainWindow);
        actionOpen_Project->setObjectName(QStringLiteral("actionOpen_Project"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Project->setIcon(icon3);
        actionNew_Project = new QAction(MainWindow);
        actionNew_Project->setObjectName(QStringLiteral("actionNew_Project"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/NewProject.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Project->setIcon(icon4);
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName(QStringLiteral("actionNew_File"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/NewFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_File->setIcon(icon5);
        actionOpen_Project_2 = new QAction(MainWindow);
        actionOpen_Project_2->setObjectName(QStringLiteral("actionOpen_Project_2"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/OpenProject.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Project_2->setIcon(icon6);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QStringLiteral("actionOpen_File"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/OpenFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_File->setIcon(icon7);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        fileLabel = new QLabel(centralWidget);
        fileLabel->setObjectName(QStringLiteral("fileLabel"));

        verticalLayout_2->addWidget(fileLabel);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(10);
        textEdit->setFont(font);

        verticalLayout_2->addWidget(textEdit);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 540, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuOpen = new QMenu(menuFile);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        menuBuild = new QMenu(menuBar);
        menuBuild->setObjectName(QStringLiteral("menuBuild"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuDebug = new QMenu(menuBar);
        menuDebug->setObjectName(QStringLiteral("menuDebug"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        outputDock = new QDockWidget(MainWindow);
        outputDock->setObjectName(QStringLiteral("outputDock"));
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QStringLiteral("dockWidgetContents_6"));
        horizontalLayout_5 = new QHBoxLayout(dockWidgetContents_6);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        textBrowser_2 = new QTextBrowser(dockWidgetContents_6);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        horizontalLayout_5->addWidget(textBrowser_2);

        outputDock->setWidget(dockWidgetContents_6);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), outputDock);
        projectDock = new QDockWidget(MainWindow);
        projectDock->setObjectName(QStringLiteral("projectDock"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        horizontalLayout_3 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(dockWidgetContents);
        treeView->setObjectName(QStringLiteral("treeView"));

        horizontalLayout_3->addWidget(treeView);

        projectDock->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), projectDock);
        aboutDock = new QDockWidget(MainWindow);
        aboutDock->setObjectName(QStringLiteral("aboutDock"));
        dockWidgetContents_9 = new QWidget();
        dockWidgetContents_9->setObjectName(QStringLiteral("dockWidgetContents_9"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents_9);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        aboutText = new QTextBrowser(dockWidgetContents_9);
        aboutText->setObjectName(QStringLiteral("aboutText"));

        horizontalLayout->addWidget(aboutText);

        aboutDock->setWidget(dockWidgetContents_9);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), aboutDock);
        outputDock->raise();
        projectDock->raise();
        aboutDock->raise();

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuBuild->menuAction());
        menuBar->addAction(menuDebug->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(menuOpen->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuOpen->addAction(actionOpen_Project_2);
        menuOpen->addAction(actionOpen_File);
        menuNew->addAction(actionNew_Project);
        menuNew->addAction(actionNew_File);
        menuBuild->addAction(actionRun);
        menuHelp->addAction(actionAbout_LegUp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LegUp", 0));
        actionAbout_LegUp->setText(QApplication::translate("MainWindow", "About LegUp", 0));
        actionRun->setText(QApplication::translate("MainWindow", "Run", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionOpen_Project->setText(QApplication::translate("MainWindow", "Open Project", 0));
        actionNew_Project->setText(QApplication::translate("MainWindow", "New Project", 0));
        actionNew_File->setText(QApplication::translate("MainWindow", "New File", 0));
        actionOpen_Project_2->setText(QApplication::translate("MainWindow", "Open Project", 0));
        actionOpen_File->setText(QApplication::translate("MainWindow", "Open File", 0));
        fileLabel->setText(QApplication::translate("MainWindow", "untitled", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuOpen->setTitle(QApplication::translate("MainWindow", "Open", 0));
        menuNew->setTitle(QApplication::translate("MainWindow", "New", 0));
        menuBuild->setTitle(QApplication::translate("MainWindow", "Build", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0));
        menuDebug->setTitle(QApplication::translate("MainWindow", "Debug", 0));
        outputDock->setWindowTitle(QApplication::translate("MainWindow", "Output", 0));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Fatal Error: File &quot;hello.c&quot; not found! Error code: 123</p></body></html>", 0));
        projectDock->setWindowTitle(QApplication::translate("MainWindow", "Projects", 0));
        aboutDock->setWindowTitle(QApplication::translate("MainWindow", "About LegUp", 0));
        aboutText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">LegUp is an open source high-level synthesis tool being developed at the University of Toronto. The LegUp framework allows researchers to improve C to Verilog synthesis without building an infrastructure from scratch.</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
