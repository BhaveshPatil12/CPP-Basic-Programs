#include<iostream>
using namespace::std;
 struct wage{
   char name[50];
   int rs;
 };
 struct wage employee();
 int main(){
   struct wage e;
   e = employee();
   cout<<"\nWage details of the employee\n";
   cout<<"Name : "<<e.name;
   cout<<"\nWage : "<<e.rs;
   return 0;
 }
struct wage employee(){
  struct wage e1;
   cout<<"Enter the name of the employee : ";
   cin>>e1.name;
   cout<<"\nEnter the wage : ";
   cin>>e1.rs;
   return e1;
}