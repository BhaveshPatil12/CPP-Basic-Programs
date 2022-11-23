#include<iostream>
using namespace::std;
int main()
{
	int a[5],i,big;
	cout<<"Enter any Numbers:";
	for(i=0;i<=4;i++)
	{
		cin>>a[i];
	}
	cout<<"\nThe  Five Numbers are:";
	for(i=0;i<=4;i++)
	{
		cout<<"\n"<<a[i];
	}
	big=a[0];
	for(i=0;i<=4;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
	}
	cout<<"\nThe Big Number is:"<<big;
	return 0;
}