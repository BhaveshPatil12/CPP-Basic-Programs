#include<iostream>
using namespace::std;
int main()
{
	int a[3][3],r,c;
	cout<<"Enter the 3x3 Matrix:";
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			cin>>a[r][c];
		}
	}
	cout<<"\nThe 3x3 Matrix is:\n";
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			cout<<"\t"<<a[r][c];
		}
		cout<<"\n";
	}
	return 0;
}