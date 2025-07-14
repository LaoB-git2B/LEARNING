#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#pragma once

class Manager {
public:
    void init() {
        string things = " 0 ";
        string name = " 0 ";
        string language = " 0 ";
        ifs.open("manager.txt", ios::in);
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
                cout << "Now, what're your language? > ";
                getline(cin, language);
                ofs.open("manager.txt", ios::out);
                ofs.write((const char*)"true", sizeof("true"));
                ofs.write((const char *)&name, sizeof(name));
                ofs.write((const char *)&language, sizeof(language));
                ofs.close();
            }
            else if (things == "true")
            {
                
            }
        }
        ifs.close();
    }
private:
    ofstream ofs;
    ifstream ifs;
};