#include<iostream>
using namespace::std;
struct voter
{
    string name,add;
    int id;
};
void display(struct voter v)
{
    cout<<"\nVoter ID: "<<v.id;
    cout<<"\nName: "<<v.name;
    cout<<"\nAddress: "<<v.add<<"\n";
}
int main()
{
    voter v1;
    v1.id=1452145;
    v1.name="Bhavesh Patil";
    v1.add="Pune, Maharashtra"; 
    display(v1);
    return 0;
}