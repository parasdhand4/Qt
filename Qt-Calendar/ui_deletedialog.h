/********************************************************************************
** Form generated from reading UI file 'deletedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEDIALOG_H
#define UI_DELETEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeleteDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_instance;
    QRadioButton *radioButton_series;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DeleteDialog)
    {
        if (DeleteDialog->objectName().isEmpty())
            DeleteDialog->setObjectName(QString::fromUtf8("DeleteDialog"));
        DeleteDialog->setWindowModality(Qt::ApplicationModal);
        DeleteDialog->resize(310, 126);
        verticalLayout_2 = new QVBoxLayout(DeleteDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton_instance = new QRadioButton(DeleteDialog);
        radioButton_instance->setObjectName(QString::fromUtf8("radioButton_instance"));
        radioButton_instance->setChecked(true);

        verticalLayout->addWidget(radioButton_instance);

        radioButton_series = new QRadioButton(DeleteDialog);
        radioButton_series->setObjectName(QString::fromUtf8("radioButton_series"));

        verticalLayout->addWidget(radioButton_series);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DeleteDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(DeleteDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DeleteDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DeleteDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DeleteDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteDialog)
    {
        DeleteDialog->setWindowTitle(QApplication::translate("DeleteDialog", "Delete event", nullptr));
        radioButton_instance->setText(QApplication::translate("DeleteDialog", "Delete this instance only", nullptr));
        radioButton_series->setText(QApplication::translate("DeleteDialog", "Delete the whole series of events", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteDialog: public Ui_DeleteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEDIALOG_H
