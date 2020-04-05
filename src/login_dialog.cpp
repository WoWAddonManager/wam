#include <iostream>
#include <boost/optional/optional_io.hpp>
#include <utils.h>
#include "login_dialog.h"
#include "user.h"
#include "mainwindow.h"
#include "settingsmanager.h"
login_dialog::login_dialog(QWidget *parent) : QDialog(parent), dialog(new Ui::login_dialog){
    dialog->setupUi(this);
    this->show();

    connect(dialog->pushButton, &QPushButton::clicked, [&,this](){
        auto form = this->dialog;
        auto response = User::login(form->email->text().toStdString(), form->password->text().toStdString());

        if(response.get_error_code() == 200){
            auto user = response.get_data();
            SettingsManager sm;
            auto *window = new MainWindow(nullptr, sm);
            window->show();
            this->close();
            std::cout << user << std::endl;
        }
        else if(response.get_error_code() == 404){
            std::cout << response.get_message() << std::endl;
        }


    });

}