#include<iostream>
using namespace::std;
int main(){
	int a = 5;
	int b = 10;
	switch (a) {
    	case 25 / 5:
    switch (b) { 
        case 100 / 10:
            cout<<"I am inside two switches!!\n";
        break;
        default:
            cout<<"me too!\n";
        }
        break;
    default:
        cout<<"I am default\n";
	}
}