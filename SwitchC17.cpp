#include<iostream>
using namespace::std;
int main() {
    char choice;
    cout<<"Enter the Choice:";
    cin>>choice;
    switch (choice) {
    case 'N':
        cout << "No";
        break;
    case 'D':
        cout << "Don't know";
        break;
    case 'Y':
        cout << "Yes";
        break;
    default:
        cout << "N/A";
    }
}