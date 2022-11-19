#include<iostream>
using namespace::std;
int main()
{
	int ono,qty,bill;
	cout<<"**MENU**";
	cout<<"\n1.IceCream";
	cout<<"\n2.Cone";
	cout<<"\n3.Pestries";
	cout<<"\n4.Exit";
	cout<<"\nEnter the Order Number:";
	cin>>ono;
	cout<<"\nEnter the Quantity:";
	cin>>qty;
	switch(ono)
	{
		case 1: 
			cout<<"\nYour Order is IceCream with Price 25 rupees";
			bill=qty*25;
		break;
		case 2:
			cout<<"\nYour Order is Cone with Price 35 rupees";
			bill=qty*35;
		break;
		case 3:
			cout<<"\nYour Order is Pestries with Price 45 rupees";
			bill=qty*45;
		break;
		case 4:
			cout<<"\nExit";
		break;
		default:
			cout<<"\nOut of Order Number";
		break;
	}
		cout<<"\nBill:"<<bill;
		return 0;
}