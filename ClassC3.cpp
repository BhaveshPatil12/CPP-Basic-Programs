#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number    : ";
    cin >> num;
    int * val = new int(num);
    cout << "Value of variable : " << *val << endl;
    delete val;
    val = NULL;
    cout << "Value of variable : " << *val << endl;
}