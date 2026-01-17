#ifndef FACTORY_H
#define FACTORY_H

#include "Component.h"

class Factory
{
    public:
        Factory();
        ~Factory();

        MailApp* getMailApp();
        SMTP_Client* getSMTPClient();
        GUI* getGUI();

        void buildSystem();

    private:
        MailApp* mail_app = nullptr;
        SMTP_Client* smtp_client = nullptr;
        GUI* gui = nullptr;
};

#endif