#include<iostream>
using namespace::std;
int main()
{
	int a,b,c=0,add=0,sub=0,mult=0;
	float div=0,md=0;
	cout<<"\nEnter the 2 Numbers :";
	cin>>a>>b;
	add=a+b;
	cout<<"\nAddition="<<add;
	sub=a-b;
	cout<<"\nSubtraction="<<sub;
	mult=a*b;
	cout<<"\nMultiplication="<<mult;
	div=a/b;
	cout<<"\nDivision="<<div;
	md=a%b;
	cout<<"\nModulus="<<md;
	return 0;
} 