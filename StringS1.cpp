#include<iostream>
using namespace::std;
#include<string.h>
int main()
{
	char name[10];
	cout<<"Enter the Name:";
	cin>>name;
	cout<<"\nName is "<<name;
	cout<<"\nLength= "<<strlen(name);
	cout<<"\nUppercase= "<<strupr(name);
	cout<<"\nLowercase= "<<strlwr(name);
	return 0;
}