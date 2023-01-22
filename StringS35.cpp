#include<iostream>
using namespace std;
int test(string s, char c)
{
    int res = 0;
    for (int i=0;i<s.length();i++)
        if (s[i] == c)
            res++;
    return res;
}

int main()
{
	string str = "Exercises";
	char ch ='e';
	cout << "String: " << str;
	cout << "\nCharacter: " << ch;
	cout << "\nCount occurrences of '" << ch << "' in '" << str << "': " << test(str, ch) << endl; 
	str = "Compilation Time";
	ch ='i';
	cout << "\nString: " << str;
	cout << "\nCharacter: " << ch;
	cout << "\nCount occurrences of '" << ch << "' in '" << str << "': " << test(str, ch) << endl; 
}