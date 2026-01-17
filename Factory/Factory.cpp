#include "Factory.h"

using namespace std;

Factory::Factory(){

}

Factory::~Factory(){
    if (mail_app != nullptr){
        delete mail_app;
        mail_app = nullptr;
    }

    if (smtp_client != nullptr){
        delete smtp_client;
        smtp_client = nullptr;
    }

    if (gui != nullptr){
        delete gui;
        gui = nullptr;
    }
}

void Factory::buildSystem(){
    cout << "Building system..." << endl;
    getMailApp()->initialize();
    getSMTPClient()->initialize();
    getGUI()->initialize();

    cout << "Initializing relations..." << endl;
    mail_app->initializeRelations(smtp_client, gui);
    smtp_client->initializeRelations();
    gui->initializeRelations(mail_app);

    cout << "System built successfully." << endl;
}

MailApp *Factory::getMailApp(){

    if (mail_app == nullptr){
        mail_app = new MailApp();
    }

    return mail_app;
}

SMTP_Client *Factory::getSMTPClient(){

    if (smtp_client == nullptr){
        smtp_client = new SMTP_Client();
    }

    return smtp_client;
}

GUI *Factory::getGUI(){

    if (gui == nullptr){
        gui = new GUI();
    }

    return gui;
}


