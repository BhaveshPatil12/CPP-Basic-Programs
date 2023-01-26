#include<iostream>
#include<string>
using namespace std;
int main()
{
    std::string s;
    cout << "Enter your first name : ";
    cin >> s;
    cout << "The length of your name is " << s.length() << endl;
    cout << "Nice to meet you ";
 
    for (std::string::const_iterator i = s.begin(); i != s.end(); i++)
        cout << *i;
    cout << "!" << endl;
}