#include<iostream>
using namespace::std;
int main(){
	int a ;
	cout<<"Enter any Number:";
	cin>>a;
	switch (a) {
 		case 1: cout<<"I am One\n";
        break;
		case 2: cout<<"I am Two\n";
        break;
 		case 3: cout<<"I an Three\n";
        break;
 		case 4: cout<<"I am Four\n";
        break;
 		case 5: cout<<"I am Five\n";
        break;
 		case 6: cout<<"I am Six\n";
        break;
		case 7: cout<<"I am Seven\n";
        break;
 		case 8: cout<<"I am Eight\n";
 		break;
 		case 9: cout<<"I am Nine\n";
 		break;
 		case 0: cout<<"I am Zero\n";
 		break;
 		default:cout<<"Out of Range !!!\n";
 		break;
		}
}