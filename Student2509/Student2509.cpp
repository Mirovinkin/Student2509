// Student2509.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>

using namespace std;

class Student {
private:
    string _name;
    unsigned _age;
    double _avMark;

public:
    Student(const string& Name, const unsigned& Age, const double& AvMark) :
        _name(Name), _age(Age), _avMark(AvMark) {};
    void Print() {
        if (_name == "" || _age == NAN || _avMark == NAN) {
            cout << "False info, try again";
        }
        else {
            cout << "Name: " << _name << "\nAge: " << _age << "\nAverage mark: " << _avMark;
        }
    }
};
int main()
{
    std::cout << "Hello World!\n";
}