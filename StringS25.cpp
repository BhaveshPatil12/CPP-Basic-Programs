#include <iostream>
#include<cwchar>
using namespace std;
int main()
{
wchar_t c[] = L"Hope never dies" ;
wchar_t d[] = L" and trust yourself" ;
wcout << L"Comparison of first string with second = " << wcscmp(c, d) << endl;
wcout << L"Comparison of first string with first string = " << wcscmp(c, c) << endl;
wcout << L"Comparison of second string with first string = " << wcscmp(d, c) << endl;
return 0;
}