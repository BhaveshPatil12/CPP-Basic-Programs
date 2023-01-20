#include<iostream>
using namespace::std;
int main()
{
float temp,res;
int choice;
cout<<"\nTemperature Conversion"<<"\n   1.Fahrenheit to Celcius";
cout<<"\n   2.Celcius to Fahrenheitn\nEnter your choice:";
cin>>choice;

switch(choice)
{
case 1: 
{
    cout<<"\nEnter temperature in Fahrenheit:";
    cin>>temp;
    res=(temp-32)/1.8;
}
break;
case 2: 
{
    cout<<"\nEnter temperature in Celcius:";
    cin>>temp;
    res=(temp*1.8)+32;
}
break;
}

cout<<"\nConverted Temperature="<<res;
return 0;
}