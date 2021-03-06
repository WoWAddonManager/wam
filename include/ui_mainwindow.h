/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
public:
    QAction *actionQuit;
    QAction *actionUploadAddon;
    QAction *actionLogin;
    QAction *actionLogout;
    QAction *actionSignUp;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *addon_tab;
    QGridLayout *gridLayout_3;
    QTableWidget *classic_table;
    QComboBox *wow_version_combo_box;
    QTableWidget *ptr_table;
    QLabel *wow_version_label;
    QTableWidget *retail_table;
    QWidget *get_addons_tab;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *addon_search_field;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QTableWidget *get_addons_table;
    QLabel *label_3;
    QLabel *label_2;
    QWidget *settings_tab;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QPushButton *set_wow_path_btn;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAddons;
    QMenu *menuFile_2;

    void setupUi(QMainWindow *MainWindow) {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(813, 650);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Nextcloud/projects/wam/resources/WAM_logo.png"), QSize(), QIcon::Normal,
                     QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionUploadAddon = new QAction(MainWindow);
        actionUploadAddon->setObjectName(QString::fromUtf8("actionUploadAddon"));
        actionLogin = new QAction(MainWindow);
        actionLogin->setObjectName(QString::fromUtf8("actionLogin"));
        actionLogout = new QAction(MainWindow);
        actionLogout->setObjectName(QString::fromUtf8("actionLogout"));
        actionSignUp = new QAction(MainWindow);
        actionSignUp->setObjectName(QString::fromUtf8("actionSignUp"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        addon_tab = new QWidget();
        addon_tab->setObjectName(QString::fromUtf8("addon_tab"));
        gridLayout_3 = new QGridLayout(addon_tab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        classic_table = new QTableWidget(addon_tab);
        if (classic_table->columnCount() < 5)
            classic_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        classic_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        classic_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        classic_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        classic_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        classic_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        classic_table->setObjectName(QString::fromUtf8("classic_table"));
        classic_table->setEnabled(true);
        classic_table->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_3->addWidget(classic_table, 2, 0, 1, 3);

        wow_version_combo_box = new QComboBox(addon_tab);
        wow_version_combo_box->addItem(QString());
        wow_version_combo_box->addItem(QString());
        wow_version_combo_box->addItem(QString());
        wow_version_combo_box->setObjectName(QString::fromUtf8("wow_version_combo_box"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wow_version_combo_box->sizePolicy().hasHeightForWidth());
        wow_version_combo_box->setSizePolicy(sizePolicy);
        wow_version_combo_box->setMinimumSize(QSize(100, 25));

        gridLayout_3->addWidget(wow_version_combo_box, 0, 1, 1, 1);

        ptr_table = new QTableWidget(addon_tab);
        if (ptr_table->columnCount() < 5)
            ptr_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ptr_table->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ptr_table->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        ptr_table->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        ptr_table->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        ptr_table->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        ptr_table->setObjectName(QString::fromUtf8("ptr_table"));
        ptr_table->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_3->addWidget(ptr_table, 1, 0, 1, 3);

        wow_version_label = new QLabel(addon_tab);
        wow_version_label->setObjectName(QString::fromUtf8("wow_version_label"));
        sizePolicy.setHeightForWidth(wow_version_label->sizePolicy().hasHeightForWidth());
        wow_version_label->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(wow_version_label, 0, 0, 1, 1);

        retail_table = new QTableWidget(addon_tab);
        if (retail_table->columnCount() < 5)
            retail_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        retail_table->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        retail_table->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        retail_table->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        retail_table->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        retail_table->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        retail_table->setObjectName(QString::fromUtf8("retail_table"));
        retail_table->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_3->addWidget(retail_table, 3, 0, 1, 3);

        tabWidget->addTab(addon_tab, QString());
        get_addons_tab = new QWidget();
        get_addons_tab->setObjectName(QString::fromUtf8("get_addons_tab"));
        gridLayout = new QGridLayout(get_addons_tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 5, 1, 1);

        addon_search_field = new QLineEdit(get_addons_tab);
        addon_search_field->setObjectName(QString::fromUtf8("addon_search_field"));
        sizePolicy.setHeightForWidth(addon_search_field->sizePolicy().hasHeightForWidth());
        addon_search_field->setSizePolicy(sizePolicy);

        gridLayout->addWidget(addon_search_field, 1, 1, 1, 1);

        pushButton = new QPushButton(get_addons_tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton, 1, 6, 1, 1);

        comboBox = new QComboBox(get_addons_tab);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        comboBox->setFrame(true);

        gridLayout->addWidget(comboBox, 1, 3, 1, 1);

        get_addons_table = new QTableWidget(get_addons_tab);
        if (get_addons_table->columnCount() < 5)
            get_addons_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        get_addons_table->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        get_addons_table->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        get_addons_table->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        get_addons_table->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        get_addons_table->setHorizontalHeaderItem(4, __qtablewidgetitem19);
        get_addons_table->setObjectName(QString::fromUtf8("get_addons_table"));
        get_addons_table->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout->addWidget(get_addons_table, 2, 0, 1, 8);

        label_3 = new QLabel(get_addons_tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(get_addons_tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        tabWidget->addTab(get_addons_tab, QString());
        settings_tab = new QWidget();
        settings_tab->setObjectName(QString::fromUtf8("settings_tab"));
        gridLayout_2 = new QGridLayout(settings_tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit = new QLineEdit(settings_tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit, 1, 0, 1, 1);

        set_wow_path_btn = new QPushButton(settings_tab);
        set_wow_path_btn->setObjectName(QString::fromUtf8("set_wow_path_btn"));
        set_wow_path_btn->setFlat(false);

        gridLayout_2->addWidget(set_wow_path_btn, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        label = new QLabel(settings_tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        tabWidget->addTab(settings_tab, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 813, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAddons = new QMenu(menuBar);
        menuAddons->setObjectName(QString::fromUtf8("menuAddons"));
        menuFile_2 = new QMenu(menuBar);
        menuFile_2->setObjectName(QString::fromUtf8("menuFile_2"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile_2->menuAction());
        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAddons->menuAction());
        menuFile->addAction(actionSignUp);
        menuFile->addAction(actionLogin);
        menuFile->addAction(actionLogout);
        menuAddons->addAction(actionUploadAddon);
        menuFile_2->addAction(actionQuit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "WAM: WoW Addon Manager", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionUploadAddon->setText(QCoreApplication::translate("MainWindow", "Upload Addon", nullptr));
        actionLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        actionLogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        actionSignUp->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        QTableWidgetItem *___qtablewidgetitem = classic_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = classic_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Version", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = classic_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Peers", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = classic_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        wow_version_combo_box->setItemText(0, QCoreApplication::translate("MainWindow", "Retail", nullptr));
        wow_version_combo_box->setItemText(1, QCoreApplication::translate("MainWindow", "Classic", nullptr));
        wow_version_combo_box->setItemText(2, QCoreApplication::translate("MainWindow", "PTR", nullptr));

        wow_version_combo_box->setCurrentText(QCoreApplication::translate("MainWindow", "Retail", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ptr_table->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = ptr_table->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Version", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = ptr_table->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Peers", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = ptr_table->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        wow_version_label->setText(QCoreApplication::translate("MainWindow", "WoW Version", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = retail_table->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = retail_table->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Version", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = retail_table->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Peers", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = retail_table->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(addon_tab),
                              QCoreApplication::translate("MainWindow", "Addons", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Retail", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Classic", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "PTR", nullptr));

        QTableWidgetItem *___qtablewidgetitem12 = get_addons_table->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = get_addons_table->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "Version", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = get_addons_table->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Maintainers", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = get_addons_table->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "WoW Version", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(get_addons_tab),
                              QCoreApplication::translate("MainWindow", "Get Addons", nullptr));
        set_wow_path_btn->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "WoW Folder Path", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(settings_tab),
                              QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "Account", nullptr));
        menuAddons->setTitle(QCoreApplication::translate("MainWindow", "Addons", nullptr));
        menuFile_2->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow : public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
