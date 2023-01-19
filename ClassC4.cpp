#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    char first, middle, last;
 
    istringstream("G B S") >> first >> middle >> last;
    cout << "Default behavior: First Name = " << first << ", Middle Name = " << middle << ", Last Name = " << last << '\n';
    istringstream("G B S") >> noskipws >> first >> middle >> last;
    cout << "noskipws behavior: First Name = " << first << ", Middle Name = " << middle << ", Last Name = " << last << '\n';
}