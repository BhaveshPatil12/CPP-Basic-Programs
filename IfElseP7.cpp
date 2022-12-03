#include<iostream>
using namespace::std;
int main()
{
	char str1[] = "zoho";
	char str2[] = "zoho";
	if(strcmp(str1, str2))
		cout<<"Strings are not same";
	else 
		cout<<"Strings are Same";
	return 0;
}