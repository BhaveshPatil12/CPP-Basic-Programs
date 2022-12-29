#include<iostream>
using namespace::std;
int main () {
	char choice{};
	do{
	cout<<"Choose 1"<<endl;
	cout<<endl;
	cout<<"Choose 2"<<endl;
	cout<<endl;
	cout<<"Choose 3"<<endl;
	cout<<endl;	
	cout<<"Choose 4"<<endl;
	cout<<"**********"<<endl;
	
	cout<<endl;
	cout<<"Choose from 1 4"<<endl;
	cout<<"**********"<<endl;
	
	cin>>choice;
	if(choice=='1')
	cout<<"Enter your first name"<<endl;
	else if(choice=='2')
	cout<<"Enter your last name"<<endl;
	else if(choice=='3')
	cout<<"Enter your email"<<endl;
	else if(choice=='4')
	cout<<"Enter your phone number"<<endl;
	else if(choice=='X'||choice=='x')
	cout<<"NOT THE CORRECT CHOICE"<<endl;
	else
	cout<<"unknown choice"<<endl;
	}while(choice!='X'&& choice!='x');
	cout<<endl;
	return 0;
}