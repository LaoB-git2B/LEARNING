#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#pragma once

class Manager {
public:
    void init();
private:
    int lanaguage;
    ofstream ofs;
    ifstream ifs;
};