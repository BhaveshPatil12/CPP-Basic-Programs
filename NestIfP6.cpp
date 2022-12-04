#include<iostream>
using namespace::std;
int main()
{
    int number;
    cout<<"Please enter a number:\n";
    cin>>number;   
    if(number < 100)
        cout<<"Number is less than 100!\n";
    else if(number == 100)
        cout<<"Number is 100!\n";
    else
        cout<<"Number is greater than 100!\n";
    return 0;
}