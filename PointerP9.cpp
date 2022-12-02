#include<iostream>
using namespace::std;
void square(int x)
{
cout<<"The square of a number is "<<x*x<<endl;
}
int main()
{
void (*funPtr)(int);
funPtr = &square;
funPtr(20);
return 0;
}