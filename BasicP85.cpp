#include<iostream>
using namespace std;
bool chkAutomor(int num1)
{
    int sqno = num1 * num1;
    while (num1 > 0)
    {
        if (num1 % 10 != sqno % 10)
            return false;
        num1 /= 10;
        sqno /= 10;
    }
    return true;
}
int main()
{
    int auno;
cout << " Input a number: ";
cin >> auno;	
 
      if( chkAutomor(auno))
        cout << " The given number is an Automorphic Number."<<endl;
    else
        cout << " The given number is not an Authomorphic Number."<<endl;
    return 0;
}
