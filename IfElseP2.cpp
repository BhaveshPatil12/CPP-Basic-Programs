#include<iostream>
using namespace::std;
int main()
{
	int ono;
	cout<<"**MENU**";
	cout<<"\n1.IceCream:";
	cout<<"\n2.Cone:";
	cout<<"\n3.Pestries:";
	cout<<"\n4.Exit";
	cout<<"\nEnter the Order Number:";
	cin>>ono;
	if(ono==1)
	{
		cout<<"\nYour Order is IceCream with Price 25 rupees";
	}
	else if(ono==2)
	{
		cout<<"\nYour Order is Cone with Price 35 rupees";
	}
	else if(ono==3)
	{
		cout<<"\nYour Order is Pestries with Price 45 rupees";
	}
	else if(ono==4)
	{
		cout<<"\nBye Bye...!";
	}
	else
	{
		cout<<"\nOrder Number is Invalid";
	}
	return 0;
}