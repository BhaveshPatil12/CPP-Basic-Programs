#include<iostream>
using namespace std;
int main()
{
int a = 5;
int b = 10;

if (a == b)
{
	cout << "a==b is not equal to true" <<
			endl;
}
if (a != b)
{
	cout << "a != b is true" <<
			endl;
}	
if (a > b)
{
	cout << "a > b is not true" <<
			endl;
}	
if (a < b)
{
	cout << "a < b is true" << endl;
}	
if (a >= b)
{
	cout << "a >= b is not true" <<
			endl;
}	
if (a <= b)
{
	cout << "a <= b is true" <<
			endl;
}
return 0;
}