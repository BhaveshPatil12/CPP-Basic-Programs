#include<iostream>
using namespace std;
int main() {
    int a = 2;
    int* pVar;
    pVar = &a;
    cout << "a = " << a << endl;
    cout << "*pVar = " << *pVar << endl;
    cout << "Changing value of a to 4:" << endl;
    a = 4;
    cout << "a = " << a << endl;
    cout << "*pVar = " << *pVar << endl;
    cout << "Changing value of *pVar to 6:" << endl;
    *pVar = 6;
    cout << "a = " << a << endl;
    cout << "*pVar = " << *pVar << endl;
    return 0;
}