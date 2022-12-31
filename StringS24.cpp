#include <iostream>
#include<cwchar>
using namespace std;
int main()
{
wchar_t c[] = L"Hope never dies" ;
wchar_t d[] = L" and trust yourself" ;
wcscat(c, d);
wcout << L"Concatenated string is : " << c << endl;
return 0;
}