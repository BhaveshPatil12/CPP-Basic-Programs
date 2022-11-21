#include<iostream>
using namespace::std;
int main()
{
	int no,r;
	cout<<"Enter the Number:";
	cin>>no;
	while(no>0)
	{
		r=no%10;
		cout<<r;
		no=no/10;
	}
	return 0;
}