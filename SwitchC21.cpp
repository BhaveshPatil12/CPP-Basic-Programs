#include<iostream>
#include<math.h>
using namespace::std;
int main()
{
float a,b,c,s,r,area;
int ch;
cout<<"\n**Menu**\n1.Area of circlen\n2.Area of Rectangle";
cout<<"\nEnter your choice:";
cin>>ch;

switch(ch)
{
case 1:
{
cout<<"Enter radius of the circle:";
cin>>r;
area=3.14*r*r;
break;
}
case 2:
{
cout<<"Enter length and breadth:";
cin>>a>>b;
area=a*b;
break;
}
default:cout<<"\n Wrong Choice";
break;
}
cout<<"Area="<<area;
return 0;
}