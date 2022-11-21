#include<iostream>
using namespace::std;
int main()
{
    int no, nd, sd, rem;
    cout<<"Enter a Number : ";
    cin>>no;
    nd = 0;
    sd = 0;
    while (no > 0)
    {
        rem = no % 10;
        nd = nd + 1;
        sd = sd + rem;
        no = no / 10;
    }   
    cout<<"The number of digit is "<<nd;
    cout<<"\nThe sum of digit is "<<sd;
    return 0;
}