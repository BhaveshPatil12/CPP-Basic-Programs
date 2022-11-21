#include<iostream>
using namespace::std;
int main()
{
	int no,r,sum=0,temp=0;
	cout<<"Enter the Number:";
	cin>>no;
	temp=no;
	while(no>0)
	{
		r=no%10;
		sum=sum+(r*r*r);
		no=no/10;
	}
	if(temp==sum)
	{
		cout<<"\nThe Number is Armstrong Number";
	}
	else
	{
		cout<<"\nThe Number is not Armstrong Number";
	}
	return 0;
}