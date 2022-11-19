#include<iostream>
using namespace::std;
    int main() {
        int num = 8;
        switch (num) {
            case 7:
                cout<<"Value is 7";
                break;
            case 8:
                cout<<"Value is 8";
                break;
            case 9:
                cout<<"Value is 9";
                break;
            default:
                cout<<"Out of range";
                break;
        }
        return 0;
    }