#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#pragma once

#define E_INIT_ONE "Choose what you're studying:\n1) Python\n2) C\n3) C++\n4) Java\n(Please enter a number and now = 1)\n> "
#define C_INIT_ONE "选择学习的内容：\n1) Python\n2) C\n3) C++\n4) Java\n(请输入数字，现在为1)\n> " 
#define E_BEGIN_ERROR "This is not what this software offers"
#define C_BEGIN_ERROR "这不是此软件提供的内容"

class Manager {
public:
    void init();
    void begin();
private:
    int lanaguage;
    ofstream ofs;
    ifstream ifs;
};

void Manager::init() {
    cout << "\r";
    string things = " 0 ";
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
        if (things == "!false")
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
            ofs << "!true" << endl;
            ofs << "!!" << language << endl;
            ofs << name;
            ofs.close();
            ifs.close();
            return;
        }
        else if (things == "!true")
        {
            continue;
        }
        else if (things == "!!1")
        {
            lanaguage = 1;
        }
        else if (things == "!!2")
        {
            lanaguage = 2;
        }
        else if (lanaguage == 1)
        {
            cout << "Welcome " << things << endl;
            cout << E_INIT_ONE;
            begin();
        }
        else if (lanaguage == 2)
        {
            cout << "欢迎 " << things << endl;
            cout << C_INIT_ONE;
            begin();
        }
        else
        {
            cout << lanaguage << " " << language;
            cin >> name;
        }
    }
    ifs.close();
}

void Manager::begin() {
    string thing = "";
    getline(cin, thing);
    if (thing == "1")
    {
        if (lanaguage == 1)
        {
            
        }
        if (lanaguage == 2)
        {
            
        }
    }
    else if (thing == "2")
    {
        if (lanaguage == 1)
        {
            
        }
        if (lanaguage == 2)
        {
            
        }
    }
    else if (thing == "3")
    {
        if (lanaguage == 1)
        {
            
        }
        if (lanaguage == 2)
        {
            
        }
    }
    else if (thing == "4")
    {
        if (lanaguage == 1)
        {
            
        }
        if (lanaguage == 2)
        {
            
        }
    }
    else
    {
        if (lanaguage == 1)
        {
            cout << E_BEGIN_ERROR << endl;
        }
        if (lanaguage == 2)
        {
            cout << C_BEGIN_ERROR << endl;
        }
    }
}