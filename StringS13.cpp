#include<iostream>
using namespace::std;
#include<cstring>
int main()
{
	char st[] = "GeeksforGeeks";
	char ch = 'e';
	char* val;
	val = strrchr(st, ch);
	cout <<"String after last " << ch << " is : " << val << endl;
	char ch2 = 'm';
	val = strrchr(st, ch2);
	cout <<"String after last " << ch2 << " is : " << val << endl;
	return (0);
}