#include<iostream>
using namespace std;
int main()
{
int h,m,s,sec;
cout<<"Enter Second =";
cin>>sec;
h=sec/3600;
sec=sec%3600;
m=sec/60;
sec=sec%60;
s=sec%60;
cout<<"Hours ="<<h<<endl;
cout<<"Mintes ="<<m<<endl;
cout<<"Second ="<<s<<endl;
}