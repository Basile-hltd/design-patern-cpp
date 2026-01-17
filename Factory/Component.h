#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>

class SMTP_Client;
class GUI;
class MailApp;

class MailApp{
    public:
        MailApp();
        ~MailApp();

        void initialize();
        void initializeRelations(SMTP_Client * smtp_client, GUI * gui);

    private:
        SMTP_Client * smtp_client = nullptr;
        GUI * gui = nullptr;
};

class SMTP_Client{
    public:
        SMTP_Client();

        void initialize();
        void initializeRelations();

    private:
};

class GUI{
    public:
        GUI();
        ~GUI();

        void initialize();
        void initializeRelations(MailApp * mail_app);

    private:
        MailApp * mail_app = nullptr;
};

#endif