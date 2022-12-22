#include<iostream>
using namespace std;
int main()
{
    int h,t;
    float c;
    cout<<"Enter The Value of Hardness,Tensile Strength and Carbon :"<<endl;
    cin>>h>>t>>c;
    if(h>50 && c<0.7 && t>5600)
    {
        cout<<"Steel Grade : 10"<<endl;
    }
    else if(h>50 && c<0.7)
    {
        cout<<"Steel Grade : 9"<<endl;
    }
    else if(c<0.7 && t>5600)
    {
        cout<<"Steel Grade : 8"<<endl;
    }
    else if(h>50  && t>5600)
    {
        cout<<"Steel Grade : 7"<<endl;
    }
    else if(h>50 || c<0.7 || t>5600)
    {
        cout<<"Steel Grade : 6"<<endl;
    }
    else
    {
         cout<<"Steel Grade : 5"<<endl;
    }
    return 0;
}