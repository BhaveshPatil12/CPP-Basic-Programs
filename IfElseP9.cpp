#include<iostream>
using namespace::std;
int main()
{
    char c;
    cout<<"Enter The Character : ";
    cin>>c;
    if(c=='a' || c=='e' ||c=='i' ||c=='o' ||c=='u' || c=='A' || c=='E' ||c=='I' ||c=='O' ||c=='U')
    {
        cout<<c<<" is a Vowel";
    }
    else
    {
       cout<<c<<" is not a Vowel";
    }
    return 0;
}