/********************************************************************************
** Form generated from reading UI file 'eventdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTDIALOG_H
#define UI_EVENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_EventDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_title;
    QLabel *label_3;
    QLineEdit *lineEdit_location;
    QComboBox *comboBox_repeat;
    QTimeEdit *timeEdit_start;
    QLabel *label_10;
    QLabel *label_12;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_delete;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_repeatInterval;
    QLabel *label_repeatInterval_1;
    QLineEdit *lineEdit_repeatInterval;
    QLabel *label_repeatInterval_2;
    QLabel *label_11;
    QLabel *label;
    QDateEdit *dateEdit;
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox_color;
    QTextEdit *textEdit_comments;
    QHBoxLayout *horizontalLayout_repeatCount;
    QLabel *label_repeatCount_1;
    QLineEdit *lineEdit_repeatCount;
    QLabel *label_repeatCount_2;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QTimeEdit *timeEdit_end;

    void setupUi(QDialog *EventDialog)
    {
        if (EventDialog->objectName().isEmpty())
            EventDialog->setObjectName(QString::fromUtf8("EventDialog"));
        EventDialog->setWindowModality(Qt::ApplicationModal);
        EventDialog->resize(517, 453);
        gridLayout = new QGridLayout(EventDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_title = new QLineEdit(EventDialog);
        lineEdit_title->setObjectName(QString::fromUtf8("lineEdit_title"));

        gridLayout->addWidget(lineEdit_title, 0, 1, 1, 4);

        label_3 = new QLabel(EventDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_location = new QLineEdit(EventDialog);
        lineEdit_location->setObjectName(QString::fromUtf8("lineEdit_location"));

        gridLayout->addWidget(lineEdit_location, 5, 1, 1, 4);

        comboBox_repeat = new QComboBox(EventDialog);
        comboBox_repeat->addItem(QString());
        comboBox_repeat->addItem(QString());
        comboBox_repeat->addItem(QString());
        comboBox_repeat->addItem(QString());
        comboBox_repeat->addItem(QString());
        comboBox_repeat->addItem(QString());
        comboBox_repeat->setObjectName(QString::fromUtf8("comboBox_repeat"));

        gridLayout->addWidget(comboBox_repeat, 2, 1, 1, 1);

        timeEdit_start = new QTimeEdit(EventDialog);
        timeEdit_start->setObjectName(QString::fromUtf8("timeEdit_start"));

        gridLayout->addWidget(timeEdit_start, 3, 1, 1, 1);

        label_10 = new QLabel(EventDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        label_12 = new QLabel(EventDialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 194, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);

        pushButton_delete = new QPushButton(EventDialog);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));

        gridLayout->addWidget(pushButton_delete, 8, 0, 1, 1);

        label_2 = new QLabel(EventDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout_repeatInterval = new QHBoxLayout();
        horizontalLayout_repeatInterval->setObjectName(QString::fromUtf8("horizontalLayout_repeatInterval"));
        label_repeatInterval_1 = new QLabel(EventDialog);
        label_repeatInterval_1->setObjectName(QString::fromUtf8("label_repeatInterval_1"));

        horizontalLayout_repeatInterval->addWidget(label_repeatInterval_1);

        lineEdit_repeatInterval = new QLineEdit(EventDialog);
        lineEdit_repeatInterval->setObjectName(QString::fromUtf8("lineEdit_repeatInterval"));

        horizontalLayout_repeatInterval->addWidget(lineEdit_repeatInterval);

        label_repeatInterval_2 = new QLabel(EventDialog);
        label_repeatInterval_2->setObjectName(QString::fromUtf8("label_repeatInterval_2"));

        horizontalLayout_repeatInterval->addWidget(label_repeatInterval_2);


        gridLayout->addLayout(horizontalLayout_repeatInterval, 2, 2, 1, 2);

        label_11 = new QLabel(EventDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 5, 0, 1, 1);

        label = new QLabel(EventDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dateEdit = new QDateEdit(EventDialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(EventDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 3, 1, 2);

        comboBox_color = new QComboBox(EventDialog);
        comboBox_color->setObjectName(QString::fromUtf8("comboBox_color"));

        gridLayout->addWidget(comboBox_color, 4, 1, 1, 1);

        textEdit_comments = new QTextEdit(EventDialog);
        textEdit_comments->setObjectName(QString::fromUtf8("textEdit_comments"));

        gridLayout->addWidget(textEdit_comments, 6, 1, 2, 4);

        horizontalLayout_repeatCount = new QHBoxLayout();
        horizontalLayout_repeatCount->setObjectName(QString::fromUtf8("horizontalLayout_repeatCount"));
        label_repeatCount_1 = new QLabel(EventDialog);
        label_repeatCount_1->setObjectName(QString::fromUtf8("label_repeatCount_1"));

        horizontalLayout_repeatCount->addWidget(label_repeatCount_1);

        lineEdit_repeatCount = new QLineEdit(EventDialog);
        lineEdit_repeatCount->setObjectName(QString::fromUtf8("lineEdit_repeatCount"));

        horizontalLayout_repeatCount->addWidget(lineEdit_repeatCount);

        label_repeatCount_2 = new QLabel(EventDialog);
        label_repeatCount_2->setObjectName(QString::fromUtf8("label_repeatCount_2"));

        horizontalLayout_repeatCount->addWidget(label_repeatCount_2);


        gridLayout->addLayout(horizontalLayout_repeatCount, 2, 4, 1, 1);

        label_8 = new QLabel(EventDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_9 = new QLabel(EventDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        timeEdit_end = new QTimeEdit(EventDialog);
        timeEdit_end->setObjectName(QString::fromUtf8("timeEdit_end"));

        horizontalLayout_2->addWidget(timeEdit_end);


        gridLayout->addLayout(horizontalLayout_2, 3, 4, 1, 1);

        buttonBox->raise();
        label->raise();
        label_2->raise();
        dateEdit->raise();
        label_3->raise();
        lineEdit_title->raise();
        comboBox_repeat->raise();
        label_8->raise();
        timeEdit_start->raise();
        label_10->raise();
        comboBox_color->raise();
        label_11->raise();
        lineEdit_location->raise();
        label_12->raise();
        textEdit_comments->raise();
        pushButton_delete->raise();
#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(comboBox_repeat);
        label_10->setBuddy(comboBox_color);
        label_12->setBuddy(textEdit_comments);
        label_2->setBuddy(dateEdit);
        label_repeatInterval_1->setBuddy(lineEdit_repeatInterval);
        label_11->setBuddy(lineEdit_location);
        label->setBuddy(lineEdit_title);
        label_repeatCount_1->setBuddy(lineEdit_repeatCount);
        label_repeatCount_2->setBuddy(lineEdit_repeatCount);
        label_8->setBuddy(timeEdit_start);
        label_9->setBuddy(timeEdit_end);
#endif // QT_NO_SHORTCUT

        retranslateUi(EventDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EventDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EventDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EventDialog);
    } // setupUi

    void retranslateUi(QDialog *EventDialog)
    {
        EventDialog->setWindowTitle(QApplication::translate("EventDialog", "Event Details", nullptr));
        label_3->setText(QApplication::translate("EventDialog", "Repeat:", nullptr));
        comboBox_repeat->setItemText(0, QApplication::translate("EventDialog", "Once", nullptr));
        comboBox_repeat->setItemText(1, QApplication::translate("EventDialog", "Daily", nullptr));
        comboBox_repeat->setItemText(2, QApplication::translate("EventDialog", "Weekly", nullptr));
        comboBox_repeat->setItemText(3, QApplication::translate("EventDialog", "Monthly", nullptr));
        comboBox_repeat->setItemText(4, QApplication::translate("EventDialog", "Yearly", nullptr));
        comboBox_repeat->setItemText(5, QApplication::translate("EventDialog", "Custom", nullptr));

        label_10->setText(QApplication::translate("EventDialog", "Color:", nullptr));
        label_12->setText(QApplication::translate("EventDialog", "Comments:", nullptr));
        pushButton_delete->setText(QApplication::translate("EventDialog", "Delete event", nullptr));
        label_2->setText(QApplication::translate("EventDialog", "Date:", nullptr));
        label_repeatInterval_1->setText(QApplication::translate("EventDialog", "Once every", nullptr));
        label_repeatInterval_2->setText(QApplication::translate("EventDialog", "days", nullptr));
        label_11->setText(QApplication::translate("EventDialog", "Location:", nullptr));
        label->setText(QApplication::translate("EventDialog", "Title:", nullptr));
        label_repeatCount_1->setText(QApplication::translate("EventDialog", "for", nullptr));
        label_repeatCount_2->setText(QApplication::translate("EventDialog", "times", nullptr));
        label_8->setText(QApplication::translate("EventDialog", "Starting time:", nullptr));
        label_9->setText(QApplication::translate("EventDialog", "Ending time:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventDialog: public Ui_EventDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTDIALOG_H
