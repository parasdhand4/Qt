/********************************************************************************
** Form generated from reading UI file 'eventlistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTLISTDIALOG_H
#define UI_EVENTLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EventListDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EventListDialog)
    {
        if (EventListDialog->objectName().isEmpty())
            EventListDialog->setObjectName(QString::fromUtf8("EventListDialog"));
        EventListDialog->setWindowModality(Qt::ApplicationModal);
        EventListDialog->resize(304, 401);
        verticalLayout = new QVBoxLayout(EventListDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listView = new QListView(EventListDialog);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout->addWidget(listView);

        buttonBox = new QDialogButtonBox(EventListDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EventListDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EventListDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EventListDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EventListDialog);
    } // setupUi

    void retranslateUi(QDialog *EventListDialog)
    {
        EventListDialog->setWindowTitle(QApplication::translate("EventListDialog", "Please select an event", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventListDialog: public Ui_EventListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTLISTDIALOG_H
