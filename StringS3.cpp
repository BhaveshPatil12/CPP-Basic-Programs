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
    cout<<"\nName1 is: "<<name1;
	cout<<"\nName2 is: "<<name2;
	cout<<"\nDifference="<<strcmp(name1,name2);
	if(strcmp(name1,name2)==0)
	{
		cout<<"\nThe Names are Same";
	}
	else
	{
		cout<<"\nThe Names are Not Same";
	}
	return 0;
}