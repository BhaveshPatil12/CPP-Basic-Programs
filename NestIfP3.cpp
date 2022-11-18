#include<iostream>
using namespace::std;
int main()
{
	int attendance,type;
	cout<<"Enter the Attendance of Employee(0-Absent,1-Present):";
	cin>>attendance;
	if(attendance==0)
	{
		cout<<"\nEmployee is Absent";
		cout<<"\nWage=0";
	}
	else
	{
		cout<<"\nEnter the Employee Type (0-Half Time,1-Full Time):";
		cin>>type;
		if(type==0)
		{
			cout<<"\nHalf Time";
			cout<<"\nWage=40";
		}
		else
		{
			cout<<"\nFull Time";
			cout<<"\nWage=80";
		}
	}
	return 0;
}