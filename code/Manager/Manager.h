#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#pragma once

#define E_INIT_ONE "Choose what you're studying:\n1) Python\n2) C\n3) C++\n4) Java\n(Please enter a number and now = 1)\n> "
#define C_INIT_ONE "选择学习的内容：\n1) Python\n2) C\n3) C++\n4) Java\n(请输入数字，现在为1)\n> " 
#define E_BEGIN_ERROR "This is not what this software offers"
#define C_BEGIN_ERROR "这不是此软件提供的内容"

#define E_BEGIN_PYTHON_ONE "Download Python: \nThere are many versions of Python. \nAt the time of this tutorial, the latest version of Python is 3.13.5. \nLet's take the latest version as an example. First, open the https://www.python.org/ URL from your browser."
#define C_BEGIN_PYTHON_ONE "下载Python：\nPython有许多版本。\n在此教程制作时Python的最新版本为3.13.5。\n我们以最新版本为例。\n第一，请先从浏览器中打开https://www.python.org/网址。\n"
#define E_BEGIN_PYTHON_TWO "Second, move your mouse over the Downloads button at this point. Choose your own operating system. The latest version of Windows is displayed by default on the right. macOS users click on the macOS button on the left to choose the version that suits them."
#define C_BEGIN_PYTHON_TWO "第二，此时将鼠标移到Downloads按钮上。选择自己的操作系统。右边默认显示出Windows的最新版本。macOS用户点击左侧macOS按钮以选择适合自己的版本。"
#define E_BEGIN_PYTHON_THREE ""
#define C_BEGIN_PYTHON_THREE ""

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
            cout << E_BEGIN_PYTHON_ONE << endl;
            cout << E_BEGIN_PYTHON_TWO << endl;
        }
        if (lanaguage == 2)
        {
            cout << C_BEGIN_PYTHON_ONE << endl;
            cout << C_BEGIN_PYTHON_TWO << endl;
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