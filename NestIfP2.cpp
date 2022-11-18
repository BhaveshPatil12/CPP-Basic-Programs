#include<iostream>
using namespace::std;
int main()
{
	int x;
	cout<<"Enter the Number:";
	cin>>x;
	if(x==0)
	{
		cout<<"\nThe Number is Zero";
	}
	else
	{
		if(x>0)
		{
			cout<<"\nThe Number is Positive";
		}
		else
		{
			cout<<"\nThe Number is Negative";
		}
	}
	return 0;
}