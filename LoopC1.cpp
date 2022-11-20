#include<iostream>
using namespace::std; 
int main()
{
	int i,fact=1,no;
	cout<<"Enter any Number:";
	cin>>no;
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	cout<<"\nFactorial of Given Number:"<<fact;
	return 0;
}