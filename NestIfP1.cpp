#include<iostream>
using namespace::std;
int main()
{
   int var1, var2;
   cout<<"Input the value of var1:";
   cin>>var1;
   cout<<"Input the value of var2:";
   cin>>var2;
   if (var1 != var2)
   {
	cout<<"var1 is not equal to var2\n";
	if (var1 > var2)
	{
		cout<<"var1 is greater than var2\n";
	}
	else
	{
		cout<<"var2 is greater than var1\n";
	}
   }
   else
   {
		cout<<"var1 is equal to var2\n";
   }
   return 0;
}