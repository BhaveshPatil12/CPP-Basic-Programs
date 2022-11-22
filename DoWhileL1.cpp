#include<iostream>
using namespace::std;
int main()
{
  int number, total=0;
  cout<<"\n Please Enter any integer below 10 \n";
  cin>>number;
  do
   {
     total = total + number;
     cout<<"\nNumber ="<<number;
     cout<<"\nTotal Value is: "<<total; 
     number++;
   }
   while (number< 10);
   cout<<"\nTotal Value from outside is: "<<total;
  	return 0;
}