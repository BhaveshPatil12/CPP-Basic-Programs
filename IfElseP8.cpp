#include <iostream>
using namespace::std;  
int main()  
{  
    int a, b, c;   
     cout<<"Enter any three numbers:";  
     cin>>a>>b>>c;  
    if(a>b && a>c)  
    {  
     	cout<<"This is the largest Number:"<<a;  
    }  
    if(b>a  && b > c)  
    {  
        cout<<"This is the largest Number:"<<b;  
    }  
    if(c>a && c>b)  
    {  
        cout<<"This is the largest Number:"<<c;  
    }  
    if(a == b && a == c)   
    {  
        cout<<"All are equal";   
    }  
}