#include<iostream>
using namespace::std;
int main ()
{
    do
    {
        cout<<"I'm from outer do-while loop ";
        do
        {
            cout<<"\nI'm from inner do-while loop ";
        }
        while (1 > 10);
    }
    while (2 > 10);
    return 0;
}