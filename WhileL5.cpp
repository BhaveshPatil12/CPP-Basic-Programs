#include<iostream>
using namespace::std;
int main()
{
	int i=1,number=0;
	cout<<"Enter the Number:";
	cin>>number;
	while(i<=10)
	{
		cout<<"\n"<<number*i;
		i++;
	}
	return 0;
}