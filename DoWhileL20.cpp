#include<iostream>
using namespace::std;
int main()
{
	int val=1;
	do
	{
  	if(val%2!=0)
  	{
   	 cout<<"\n%d is an odd number"<<val;
 	 }
  	val++;
	}while(val<=20);
}