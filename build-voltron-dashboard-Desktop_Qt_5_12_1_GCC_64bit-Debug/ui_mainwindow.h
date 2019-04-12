/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Widgets/BatteryWidget.h"
#include "Widgets/ConsoleWidget.h"
#include "Widgets/LidarWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QSplitter *splitter_2;
    QSplitter *splitter;
    LidarWidget *lidarWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lidarLabel;
    QOpenGLWidget *openGLWidget;
    BatteryWidget *batteryWidget;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *batteryLabel;
    QFrame *line;
    QTableWidget *batteryTable;
    ConsoleWidget *consoleWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *consoleBrowser;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(983, 604);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207)"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter_2->setChildrenCollapsible(false);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        lidarWidget = new LidarWidget(splitter);
        lidarWidget->setObjectName(QString::fromUtf8("lidarWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lidarWidget->sizePolicy().hasHeightForWidth());
        lidarWidget->setSizePolicy(sizePolicy);
        lidarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236)"));
        verticalLayout_2 = new QVBoxLayout(lidarWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lidarLabel = new QLabel(lidarWidget);
        lidarLabel->setObjectName(QString::fromUtf8("lidarLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lidarLabel->sizePolicy().hasHeightForWidth());
        lidarLabel->setSizePolicy(sizePolicy1);
        lidarLabel->setFrameShape(QFrame::StyledPanel);

        verticalLayout_2->addWidget(lidarLabel);

        openGLWidget = new QOpenGLWidget(lidarWidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));

        verticalLayout_2->addWidget(openGLWidget);

        splitter->addWidget(lidarWidget);
        batteryWidget = new BatteryWidget(splitter);
        batteryWidget->setObjectName(QString::fromUtf8("batteryWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(batteryWidget->sizePolicy().hasHeightForWidth());
        batteryWidget->setSizePolicy(sizePolicy2);
        batteryWidget->setMinimumSize(QSize(200, 200));
        batteryWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(batteryWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame = new QFrame(batteryWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236)"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        batteryLabel = new QLabel(frame);
        batteryLabel->setObjectName(QString::fromUtf8("batteryLabel"));
        QFont font;
        font.setPointSize(14);
        batteryLabel->setFont(font);
        batteryLabel->setAutoFillBackground(false);
        batteryLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(batteryLabel);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        batteryTable = new QTableWidget(frame);
        if (batteryTable->columnCount() < 2)
            batteryTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        batteryTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        batteryTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        batteryTable->setObjectName(QString::fromUtf8("batteryTable"));
        batteryTable->setColumnCount(2);
        batteryTable->horizontalHeader()->setStretchLastSection(true);
        batteryTable->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(batteryTable);


        verticalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_4->addWidget(frame);

        splitter->addWidget(batteryWidget);
        splitter_2->addWidget(splitter);
        consoleWidget = new ConsoleWidget(splitter_2);
        consoleWidget->setObjectName(QString::fromUtf8("consoleWidget"));
        consoleWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236)"));
        verticalLayout = new QVBoxLayout(consoleWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(consoleWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAutoFillBackground(false);
        label->setFrameShape(QFrame::VLine);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(1);
        label->setMidLineWidth(0);

        verticalLayout->addWidget(label);

        consoleBrowser = new QTextBrowser(consoleWidget);
        consoleBrowser->setObjectName(QString::fromUtf8("consoleBrowser"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(consoleBrowser->sizePolicy().hasHeightForWidth());
        consoleBrowser->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(consoleBrowser);

        splitter_2->addWidget(consoleWidget);

        verticalLayout_6->addWidget(splitter_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 983, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        lidarLabel->setText(QApplication::translate("MainWindow", "LIDAR", nullptr));
        batteryLabel->setText(QApplication::translate("MainWindow", "Battery Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem = batteryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Cell Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = batteryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Charge Level", nullptr));
        label->setText(QApplication::translate("MainWindow", "Console", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
