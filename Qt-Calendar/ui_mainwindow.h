/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "calendar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFile;
    QAction *actionPreferences;
    QAction *actionExport;
    QAction *actionImport;
    QAction *actionPin_Window;
    QAction *actionDrag_and_Drop;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_month;
    QLabel *label_year;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_previousMonth;
    QPushButton *pushButton_today;
    QPushButton *pushButton_nextMonth;
    QVBoxLayout *verticalLayout;
    Calendar *calendarWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(875, 775);
        MainWindow->setMinimumSize(QSize(500, 400));
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QString::fromUtf8("actionFile"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionPin_Window = new QAction(MainWindow);
        actionPin_Window->setObjectName(QString::fromUtf8("actionPin_Window"));
        actionPin_Window->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/pin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPin_Window->setIcon(icon);
        actionDrag_and_Drop = new QAction(MainWindow);
        actionDrag_and_Drop->setObjectName(QString::fromUtf8("actionDrag_and_Drop"));
        actionDrag_and_Drop->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/dnd.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDrag_and_Drop->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_month = new QLabel(centralwidget);
        label_month->setObjectName(QString::fromUtf8("label_month"));
        label_month->setTextFormat(Qt::RichText);

        horizontalLayout->addWidget(label_month);

        label_year = new QLabel(centralwidget);
        label_year->setObjectName(QString::fromUtf8("label_year"));
        label_year->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout->addWidget(label_year);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_previousMonth = new QPushButton(centralwidget);
        pushButton_previousMonth->setObjectName(QString::fromUtf8("pushButton_previousMonth"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_previousMonth->sizePolicy().hasHeightForWidth());
        pushButton_previousMonth->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_previousMonth);

        pushButton_today = new QPushButton(centralwidget);
        pushButton_today->setObjectName(QString::fromUtf8("pushButton_today"));

        horizontalLayout->addWidget(pushButton_today);

        pushButton_nextMonth = new QPushButton(centralwidget);
        pushButton_nextMonth->setObjectName(QString::fromUtf8("pushButton_nextMonth"));
        sizePolicy.setHeightForWidth(pushButton_nextMonth->sizePolicy().hasHeightForWidth());
        pushButton_nextMonth->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_nextMonth);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        calendarWidget = new Calendar(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        QFont font;
        font.setPointSize(16);
        calendarWidget->setFont(font);

        verticalLayout->addWidget(calendarWidget);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 875, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy1);
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(12, 12));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionPreferences);
        menuFile->addSeparator();
        menuFile->addAction(actionExport);
        menuFile->addAction(actionImport);
        toolBar->addAction(actionPin_Window);
        toolBar->addAction(actionDrag_and_Drop);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_previousMonth, SIGNAL(clicked()), calendarWidget, SLOT(showPreviousMonth()));
        QObject::connect(pushButton_today, SIGNAL(clicked()), calendarWidget, SLOT(showToday()));
        QObject::connect(pushButton_nextMonth, SIGNAL(clicked()), calendarWidget, SLOT(showNextMonth()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QCalendar", nullptr));
        actionFile->setText(QApplication::translate("MainWindow", "File", nullptr));
        actionPreferences->setText(QApplication::translate("MainWindow", "&Preferences", nullptr));
        actionExport->setText(QApplication::translate("MainWindow", "&Export", nullptr));
        actionImport->setText(QApplication::translate("MainWindow", "&Import", nullptr));
        actionPin_Window->setText(QApplication::translate("MainWindow", "Pin Window", nullptr));
#ifndef QT_NO_TOOLTIP
        actionPin_Window->setToolTip(QApplication::translate("MainWindow", "Pin Window", nullptr));
#endif // QT_NO_TOOLTIP
        actionDrag_and_Drop->setText(QApplication::translate("MainWindow", "Drag and Drop", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDrag_and_Drop->setToolTip(QApplication::translate("MainWindow", "Enable Drag & Drop", nullptr));
#endif // QT_NO_TOOLTIP
        label_month->setText(QApplication::translate("MainWindow", "<h1>August</h1>", nullptr));
        label_year->setText(QApplication::translate("MainWindow", "2016", nullptr));
        pushButton_previousMonth->setText(QApplication::translate("MainWindow", "<", nullptr));
        pushButton_today->setText(QApplication::translate("MainWindow", "Today", nullptr));
        pushButton_nextMonth->setText(QApplication::translate("MainWindow", ">", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
