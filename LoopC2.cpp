#include<iostream>
using namespace::std;
int main()
{
	int i,sumodd=0,sumeven=0;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			cout<<"\n"<<i;
			sumeven=sumeven+i;
		}
		else
		{
			cout<<"\t"<<i;
			sumodd=sumodd+i;
		}
	}
	cout<<"\n"<<sumeven<<"\t"<<sumodd;
	return 0;
}
