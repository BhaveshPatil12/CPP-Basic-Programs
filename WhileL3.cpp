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
		sum=sum*10+r;
		no=no/10;
	}
	if(temp==sum)
	{
		cout<<"\nThe Number is Palindrome Number";
	}
	else
	{
		cout<<"\nThe Number is not Palindrome Number";
	}
	return 0;
}