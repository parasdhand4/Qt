/********************************************************************************
** Form generated from reading UI file 'preferencedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCEDIALOG_H
#define UI_PREFERENCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PreferenceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_language;
    QComboBox *comboBox_language;
    QLabel *label_startOfWeek;
    QComboBox *comboBox_startOfWeek;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferenceDialog)
    {
        if (PreferenceDialog->objectName().isEmpty())
            PreferenceDialog->setObjectName(QString::fromUtf8("PreferenceDialog"));
        PreferenceDialog->resize(291, 192);
        verticalLayout = new QVBoxLayout(PreferenceDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_language = new QLabel(PreferenceDialog);
        label_language->setObjectName(QString::fromUtf8("label_language"));

        gridLayout->addWidget(label_language, 0, 0, 1, 1);

        comboBox_language = new QComboBox(PreferenceDialog);
        comboBox_language->addItem(QString());
        comboBox_language->addItem(QString());
        comboBox_language->setObjectName(QString::fromUtf8("comboBox_language"));

        gridLayout->addWidget(comboBox_language, 0, 1, 1, 1);

        label_startOfWeek = new QLabel(PreferenceDialog);
        label_startOfWeek->setObjectName(QString::fromUtf8("label_startOfWeek"));

        gridLayout->addWidget(label_startOfWeek, 1, 0, 1, 1);

        comboBox_startOfWeek = new QComboBox(PreferenceDialog);
        comboBox_startOfWeek->addItem(QString());
        comboBox_startOfWeek->addItem(QString());
        comboBox_startOfWeek->addItem(QString());
        comboBox_startOfWeek->addItem(QString());
        comboBox_startOfWeek->addItem(QString());
        comboBox_startOfWeek->addItem(QString());
        comboBox_startOfWeek->addItem(QString());
        comboBox_startOfWeek->setObjectName(QString::fromUtf8("comboBox_startOfWeek"));

        gridLayout->addWidget(comboBox_startOfWeek, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(PreferenceDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label_language->setBuddy(comboBox_language);
        label_startOfWeek->setBuddy(comboBox_startOfWeek);
#endif // QT_NO_SHORTCUT

        retranslateUi(PreferenceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferenceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferenceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PreferenceDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferenceDialog)
    {
        PreferenceDialog->setWindowTitle(QApplication::translate("PreferenceDialog", "Preferences", nullptr));
        label_language->setText(QApplication::translate("PreferenceDialog", "Language: ", nullptr));
        comboBox_language->setItemText(0, QApplication::translate("PreferenceDialog", "English", nullptr));
        comboBox_language->setItemText(1, QApplication::translate("PreferenceDialog", "\344\270\255\346\226\207", nullptr));

        label_startOfWeek->setText(QApplication::translate("PreferenceDialog", "Start of Week:", nullptr));
        comboBox_startOfWeek->setItemText(0, QApplication::translate("PreferenceDialog", "Monday", nullptr));
        comboBox_startOfWeek->setItemText(1, QApplication::translate("PreferenceDialog", "Tuesday", nullptr));
        comboBox_startOfWeek->setItemText(2, QApplication::translate("PreferenceDialog", "Wednesday", nullptr));
        comboBox_startOfWeek->setItemText(3, QApplication::translate("PreferenceDialog", "Thursday", nullptr));
        comboBox_startOfWeek->setItemText(4, QApplication::translate("PreferenceDialog", "Friday", nullptr));
        comboBox_startOfWeek->setItemText(5, QApplication::translate("PreferenceDialog", "Saturday", nullptr));
        comboBox_startOfWeek->setItemText(6, QApplication::translate("PreferenceDialog", "Sunday", nullptr));

    } // retranslateUi

};

namespace Ui {
    class PreferenceDialog: public Ui_PreferenceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCEDIALOG_H
