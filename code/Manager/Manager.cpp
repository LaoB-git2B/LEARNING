#include "Manager.h"

void Manager::init() {
    // TODO:
    string things = " 0 ";
    string thinges = " 0 ";
    string name = " 0 ";
    string language = " 0 ";
    ifs.open("code/Manager/manager.txt", ios::in);
    if (!ifs.is_open())
    {
        cout << "Error" << endl;
        return;
    }
    while (ifs >> things)
    {
        if (things == "false")
        {
            cout << "Hello, you open the me first." << endl;
            cout << "What is your name? > ";
            getline(cin, name);
            cout << endl << "Oh, what a beautiful name!" << endl;
            cout << "Now, what're your language?"
            << " (1 = English, 2 = 中文) " <<
            "(now = 1) > ";
            getline(cin, language);
            ofs.open("code/Manager/manager.txt", ios::out);
            ofs << "true" << endl;
            ofs << name << endl;
            ofs << language << endl;
            ofs.close();
            return;
        }
        else if (things == "true")
        {
            continue;
        }
        else if (things == "1")
        {
            language = 1;
        }
        else if (things == "2")
        {
            language = 2;
        }
        else
        {
            cout << "Welcome " << things << endl;
        }
    }
    ifs.close();
}