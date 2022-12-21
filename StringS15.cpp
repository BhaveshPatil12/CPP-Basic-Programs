#include<iostream>
#include<string> 
using namespace::std;
int main()
{
	string str = "Man Made Machine";
	cout << "The initial string is : ";
	cout << str << endl;
	str.resize(13);
	cout << "The string after resize operation is : ";
	cout << str << endl;
	cout << "The capacity of string is : ";
	cout << str.capacity() << endl;
	cout << "The length of the string is :" << str.length()
		<< endl;
	str.shrink_to_fit();
	cout << "The new capacity after shrinking is : ";
	cout << str.capacity() << endl;
	return 0;
}