#include<iostream>
using namespace::std;
int main()
{
	int i,no,sum=0;
	cout<<"Enter any Number:";
	cin>>no;
	for(i=1;i<no;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==no)
	{
		cout<<"\nThe Number is Perfect Number";
	}
	else
	{
		cout<<"\nThe Number is Not Perfect Number";
	}
	return 0;
}