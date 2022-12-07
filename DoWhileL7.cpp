#include<iostream>
using namespace::std;
int main()
{
    int n,r,sd=0;
    cout<<"Enter a 4 digit number ";
    cin>>n;
    
    if(n>=1000 && n<=9999)
    {
        do
        {
            r=n%10;    
            sd=sd+r;
            n=n/10;     
        }
        while(n>0);
        cout<<"Sum of digits = "<<sd;
    }
    else
    {
        cout<<"Not a 4 digit number";
    }
    return 0;
}