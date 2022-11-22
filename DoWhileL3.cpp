#include <iostream>
using namespace::std;
int main() 
{
  double number, total = 0;                                                 
  do 
  {
    cout<<"Enter a number: "; 
    cin>>number;     
    total += number; 
  }
  while(number != 0.0); 
  cout<<"Sum ="<<total;
  return 0;
}