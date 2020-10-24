#pragma once
#include <string>
#include <vector>
#include <iomanip>
#include <functional>
#include <iostream>
using namespace std;

struct Function
{
    string title;
    string descr;
    function<void()> func;

    Function(string _title, string _descr, void _func()) :
            title(_title),
            descr(_descr),
            func(_func)
    {}
};

class ConsoleApp
{
    string title;
    vector<Function> functions;

    void printLine();
    void help();
    void printHead();
public:
    ConsoleApp(string _title, vector<Function> _methods);

    void run();
};