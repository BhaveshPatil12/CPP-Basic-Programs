#include<iostream>
using namespace::std;
int main()
{
	int i,a[5],x,flag=-1;
	cout<<"Enter any Numbers:";
	for(i=0;i<=4;i++)
	{
		cin>>a[i];
	}
	cout<<"\nThe Numbers are:";
	for(i=0;i<=4;i++)
	{
		cout<<"\n"<<a[i];
	}
	cout<<"\nSearch the Number:";
	cin>>x;
	for(i=0;i<=4;i++)
	{
		if(x==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==-1)
	{
		cout<<"\nThe Number is Not Available";
	}
	else
	{
		cout<<"\nThe Number is Available";
	}
	return 0;
}