#include<iostream>
using namespace::std;
int main()
{
	int i,no,flag=1;
	cout<<"Enter any Number:";
	cin>>no;
	if(no==1)
	{
		flag=1;
	}
	else
	{
		for(i=2;i<=no-1;i++)
		{
			if(no%i==0)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
	{
		cout<<"\nThe Number is Prime Number";
	}
	else
	{
		cout<<"\nThe Number is Not Prime Number";
	}
	return 0;
}