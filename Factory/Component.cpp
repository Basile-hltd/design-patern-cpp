#include "Component.h"

using namespace std;

MailApp::MailApp(){
    cout << "MailApp created" << endl;
}

MailApp::~MailApp(){

    cout << "MailApp destroyed" << endl;

    if (smtp_client != nullptr){
        delete smtp_client;
        smtp_client = nullptr;
    }   
    
    if (gui != nullptr){
        delete gui;
        gui = nullptr;
    }
}

void MailApp::initialize(){
}

void MailApp::initializeRelations(SMTP_Client *smtp_client, GUI *gui){
    smtp_client = smtp_client;
    gui = gui;
}

SMTP_Client::SMTP_Client(){
    cout << "SMTP_Client created" << endl;
}

void SMTP_Client::initialize(){
}

void SMTP_Client::initializeRelations(){
}

GUI::GUI(){
    cout << "GUI created" << endl;
}

GUI::~GUI(){

    cout << "GUI destroyed" << endl;

    if (mail_app != nullptr){
        delete mail_app;
        mail_app = nullptr;
    }
    
}

void GUI::initialize(){
}

void GUI::initializeRelations(MailApp *mail_app){
    mail_app = mail_app;
}
