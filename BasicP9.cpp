#include<iostream>
using namespace std;
int main()
{
int a = 0;
int b = 1;

if (a && b)
{
	cout << "a && b is false" <<
			endl;
}
if (a || b)
{
	cout << "a || b is true" <<
			endl;
}	
if (!a)
{
	cout << "!a is true" <<
			endl;
}
return 0;
}