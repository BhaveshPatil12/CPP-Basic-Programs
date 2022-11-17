#include<iostream>
using namespace::std;
int main()
{
	int year;
	cout<<"Enter any Year:";
	cin>>year;
	if((year%4==0 || year%400==0) && (year%100!=0))
	{
		cout<<"\nThe Year is Leap Year";
	}
	else
	{
		cout<<"\nThe Year is Not Leap Year";
	}
	return 0;
}