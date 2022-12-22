#include<iostream>
using namespace std;
int main()
{
    char gender;
    int age;
    cout<<"\nEnter Your Age    : ";
    cin>>age;
    if(age>=18)
    {
        cout<<"\nEnter Your Gender : ";
        cin>>gender;
        if(gender=='M' || gender=='m')
        {
             cout<<"\nGo To Room-1";
        }
        else  if(gender=='F' || gender=='f')
        {
             cout<<"\nGo To Room-2";
        }
        else
        {
            cout<<"\n Invalid Gender Input";
        }
    }
    else
    {
        cout<<"\nYour Age is Under 18 You are not Going in Room...";
    }
    return 0;
}