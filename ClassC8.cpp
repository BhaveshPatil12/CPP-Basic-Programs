#include<iostream>
using namespace std;
class complex {
    int a, b, c,obj;
public:

    complex() {
    }

    void getvalue() {
        cout << "Enter the Two Numbers:";
        cin >> a>>b;
    }

    void operator++() {
        a = ++a;
        b = ++b;
    }

    void operator--() {
        a = --a;
        b = --b;
    }

    void display() {
        cout << a << "+\t" << b << "i" << endl;
    }
};

int main() {
    complex obj;
    obj.getvalue();
    cout << "Increment Complex Number\n";
    obj.display();
    cout << "Decrement Complex Number\n";
    obj.display();
    return 0;
}