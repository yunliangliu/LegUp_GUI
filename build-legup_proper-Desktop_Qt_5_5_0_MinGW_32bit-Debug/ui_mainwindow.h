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
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeView *treeView;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QTextBrowser *textBrowser_2;
    QLabel *label_5;
    QTextBrowser *textBrowser_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOpen;
    QMenu *menuNew;
    QMenu *menuBuild;
    QMenu *menuHelp;
    QMenu *menuOptions;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(530, 365);
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
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QStringLiteral("treeView"));

        verticalLayout->addWidget(treeView);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        textBrowser_2 = new QTextBrowser(centralWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        verticalLayout_2->addWidget(textBrowser_2);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        textBrowser_3 = new QTextBrowser(centralWidget);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));

        verticalLayout_2->addWidget(textBrowser_3);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 530, 21));
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
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuBuild->menuAction());
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
        label->setText(QApplication::translate("MainWindow", "Projects", 0));
        label_2->setText(QApplication::translate("MainWindow", "About", 0));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">LegUp is an open source high-level synthesis tool being developed at the University of Toronto. The LegUp framework allows researchers to improve C to Verilog synthesis without building an infrastructure from scratch.</p></body></html>", 0));
        label_3->setText(QApplication::translate("MainWindow", "File Edit", 0));
        label_4->setText(QApplication::translate("MainWindow", "Output", 0));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Error: File 'hello.c' not found! Error code: 123</p></body></html>", 0));
        label_5->setText(QApplication::translate("MainWindow", "Console", 0));
        textBrowser_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ang-PC: $ gcc hello.c -o hello</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ang-PC: $ ./hello</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ang-PC: $ Hello World</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ang-PC: $ </p></body></html>", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuOpen->setTitle(QApplication::translate("MainWindow", "Open", 0));
        menuNew->setTitle(QApplication::translate("MainWindow", "New", 0));
        menuBuild->setTitle(QApplication::translate("MainWindow", "Build", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
