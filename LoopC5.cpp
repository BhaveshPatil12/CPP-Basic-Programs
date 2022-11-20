#include<iostream>
using namespace::std;
int main()
{
	int i,start,end;
	cout<<"Enter the Start Number:";
	cin>>start;
	cout<<"\nEnter the End Number:";
	cin>>end;
	if(start>end)
	{
		for(i=start;i>=end;i--)
		{
			cout<<"\n"<<i;
		}
	}
	else
	{
		for(i=start;i<=end;i++)
		{
			cout<<"\n"<<i;
		}
	}
	return 0;
}