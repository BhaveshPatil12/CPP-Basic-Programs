#include<iostream>
using namespace::std;
int main()
{
	cout<<"*ROLL HOUSE*\n";
	cout<<"*MENU CARD*\n";
	cout<<"B=BURGER\n"<<"F=FRENCH FRY\n"<<"P=PIZZA\n"<<"S=SANDWICHES\n";
	cout<<"-------------------------------------\n";
	char ss;
	int qty,bill;
	cin>>ss;
	switch(ss)
	{
	case 'B':
		cin>>qty;
		bill= qty*200;
		cout<<"Burger=Rs"<<bill;
	break;
	case 'F':
		cin>>qty;
		bill= qty*50;
		cout<<"\nFrench Fry=Rs"<<bill;
	break;
	case 'P':
		cin>>qty;
		bill= qty*500;
		cout<<"\nPizza=Rs"<<bill;
	break;
	case 'S':
		cin>>qty;
		bill= qty*150;
		cout<<"\nSandwich=Rs"<<bill;
	break;
	default:
		cout<<"\nOut of Food";
	}
	return 0;
}