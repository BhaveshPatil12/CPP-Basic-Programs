#include<iostream>
using namespace std;
int main()
{
	int number,choice;
	cout<<"Enter a number to be roundoff, to nearest odd or even"<<endl;
	cin>>number;
	switch(number%2==0)
	{
		case 1:
			cout<<"Rounded off to nearest upper odd"<<endl;
			cout<<number+1;
			break;
		case 0:
			cout<<"Rounded off to nearest lower even"<<endl;
			cout<<number-1;
			break;
	}
}