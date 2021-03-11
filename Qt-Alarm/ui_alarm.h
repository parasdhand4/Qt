/********************************************************************************
** Form generated from reading UI file 'alarm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARM_H
#define UI_ALARM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Alarm
{
public:
    QLCDNumber *timeLCD;
    QLCDNumber *alarmLCD;
    QLabel *label;
    QLabel *label_2;
    QLabel *lblalarmstatus;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBoxHrs;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBoxMinutes;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnSetAlarm;
    QPushButton *btnEnableAlarm;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnStopAlarm;

    void setupUi(QWidget *Alarm)
    {
        if (Alarm->objectName().isEmpty())
            Alarm->setObjectName(QString::fromUtf8("Alarm"));
        Alarm->setWindowModality(Qt::WindowModal);
        Alarm->resize(580, 541);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Alarm->sizePolicy().hasHeightForWidth());
        Alarm->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush1(QColor(119, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Alarm->setPalette(palette);
        Alarm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        timeLCD = new QLCDNumber(Alarm);
        timeLCD->setObjectName(QString::fromUtf8("timeLCD"));
        timeLCD->setGeometry(QRect(10, 30, 561, 181));
        sizePolicy.setHeightForWidth(timeLCD->sizePolicy().hasHeightForWidth());
        timeLCD->setSizePolicy(sizePolicy);
        QPalette palette1;
        QBrush brush2(QColor(0, 85, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        timeLCD->setPalette(palette1);
        alarmLCD = new QLCDNumber(Alarm);
        alarmLCD->setObjectName(QString::fromUtf8("alarmLCD"));
        alarmLCD->setGeometry(QRect(10, 240, 561, 191));
        sizePolicy.setHeightForWidth(alarmLCD->sizePolicy().hasHeightForWidth());
        alarmLCD->setSizePolicy(sizePolicy);
        QPalette palette2;
        QBrush brush3(QColor(255, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        alarmLCD->setPalette(palette2);
        label = new QLabel(Alarm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 121, 18));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QPalette palette3;
        QBrush brush4(QColor(0, 0, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label->setPalette(palette3);
        label_2 = new QLabel(Alarm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 220, 91, 18));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_2->setPalette(palette4);
        lblalarmstatus = new QLabel(Alarm);
        lblalarmstatus->setObjectName(QString::fromUtf8("lblalarmstatus"));
        lblalarmstatus->setGeometry(QRect(200, 220, 121, 18));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        lblalarmstatus->setPalette(palette5);
        widget = new QWidget(Alarm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(13, 448, 251, 81));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(42, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(false);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_6 = new QSpacerItem(22, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        spinBoxHrs = new QSpinBox(widget);
        spinBoxHrs->setObjectName(QString::fromUtf8("spinBoxHrs"));
        spinBoxHrs->setMaximum(23);

        horizontalLayout_2->addWidget(spinBoxHrs);

        horizontalSpacer = new QSpacerItem(66, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        spinBoxMinutes = new QSpinBox(widget);
        spinBoxMinutes->setObjectName(QString::fromUtf8("spinBoxMinutes"));
        spinBoxMinutes->setMaximum(59);

        horizontalLayout_2->addWidget(spinBoxMinutes);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        widget1 = new QWidget(Alarm);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(360, 450, 208, 81));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnSetAlarm = new QPushButton(widget1);
        btnSetAlarm->setObjectName(QString::fromUtf8("btnSetAlarm"));

        horizontalLayout_3->addWidget(btnSetAlarm);

        btnEnableAlarm = new QPushButton(widget1);
        btnEnableAlarm->setObjectName(QString::fromUtf8("btnEnableAlarm"));

        horizontalLayout_3->addWidget(btnEnableAlarm);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btnStopAlarm = new QPushButton(widget1);
        btnStopAlarm->setObjectName(QString::fromUtf8("btnStopAlarm"));

        horizontalLayout_4->addWidget(btnStopAlarm);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(Alarm);

        QMetaObject::connectSlotsByName(Alarm);
    } // setupUi

    void retranslateUi(QWidget *Alarm)
    {
        Alarm->setWindowTitle(QApplication::translate("Alarm", "Alarm", nullptr));
        label->setText(QApplication::translate("Alarm", "Current Time Now", nullptr));
        label_2->setText(QApplication::translate("Alarm", "Alarm Time", nullptr));
        lblalarmstatus->setText(QApplication::translate("Alarm", "Alarm Switched Off", nullptr));
        label_3->setText(QApplication::translate("Alarm", "Set Hours", nullptr));
        label_4->setText(QApplication::translate("Alarm", "Set Minutes", nullptr));
        btnSetAlarm->setText(QApplication::translate("Alarm", "Set Alarm Time", nullptr));
        btnEnableAlarm->setText(QApplication::translate("Alarm", "Activate Alarm", nullptr));
        btnStopAlarm->setText(QApplication::translate("Alarm", "Stop  Alarm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Alarm: public Ui_Alarm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARM_H
