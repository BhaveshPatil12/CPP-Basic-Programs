#include<iostream>
using namespace::std;
#include<string.h>
int main()
{
	char name1[10],name2[10];
	cout<<"Enter the Name1:";
	cin>>name1;
	cout<<"\nEnter the Name2:";
	cin>>name2;
	cout<<"\nName1 is:"<<name1;
	cout<<"\nName2 is:"<<name2;
	strcpy(name1,name2);
	cout<<"\nName1 is:"<<name1;
	cout<<"\nName2 is:"<<name2;
	return 0;
}