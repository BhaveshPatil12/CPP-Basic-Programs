#include<iostream>
using namespace std;
int main()
{
	float cm,meter,kilometer;
	int choice;
	cout<<"Please enter centimeter"<<endl;
	cin>>cm;
	cout<<"Enter 1 for meter and 2 for kilometer"<<endl;
	cin>>choice;
	if(choice==1)
	{
	meter=cm/100;
	cout<<"The length of meter is"<<meter;	
	}
	else if(choice==2)
	{
		kilometer=cm/100000;
		cout<<"The length of kilometer is"<<kilometer;
	}
	else
	{
		cout<<"Invalid Choice";
	}
}