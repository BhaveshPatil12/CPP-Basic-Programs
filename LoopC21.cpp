#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 cout<<"Truth Table Of  AB+C\t";
 for(a=0;a<=1;++a)
 {
  for(b=0;b<=1;++b)
  {
   for(c=0;c<=1;++c)
   {
    if(a*b+c==2)
     cout<<"\n"<<a<<"\t"<<b<<"\t"<<c<<"\t1";
    else
     cout<<"\n"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<a*b+c<<endl;
   }
  }
 }
  cout<<"\n\n";
return 0;
}