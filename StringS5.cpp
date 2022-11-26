#include<iostream>
using namespace::std;
#include<string.h>
int main()
{
	char name[10];
	cout<<"Enter the Name:";
	cin>>name;
	cout<<"\nName is:"<<name;
	cout<<"\nReverse:"<<strrev(name);
	return 0;
}