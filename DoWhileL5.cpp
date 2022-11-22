#include<iostream>
using namespace::std;
int main() 
{
  int a;
      cout<<"enter the number (less than or equal to 3) to start from:\n";
      cin>>a; 
    do 
  {
      cout<<"\nthe value of a is "<<a;
      a++;
  }  
    while(a<=3);
    return 0;
}