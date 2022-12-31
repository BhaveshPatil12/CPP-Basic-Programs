#include<iostream>
#include<cwchar>
using namespace std;
int main()
{
wchar_t c[] = L"Hope never dies" ;
wchar_t d[15] ;
wcscpy(d, c);
wcout << L"Original string is : " << c << L"\n Copied string is :  " << d << endl;
return 0;
}