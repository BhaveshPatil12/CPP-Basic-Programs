#include<iostream>
using namespace std;
int main()
{
	int n,a=1,b=0,c;	
    cout<<" The first 20 numbers of Pell series are: "<<endl;
    c=0;
    cout<<" "<<c<<" ";
    for(n=1; n<20; n++)
     {
      c= a + 2*b;
      cout<<c<<" ";
      a = b;
      b = c;
     }
	 cout<<endl;
}