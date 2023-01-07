#include<iostream>
using namespace std;
int main()
{
 int d,n,i,j,a[50];
 cout<<"Enter a Number To Convert In Binary :\n";
 cin>>n;
 cout<<"\nThe Binary Conversion Of "<<n<<" is 1";
 for(i=1;n!=1;++i)
 {
  d=n%2;
  a[i]=d;
  n=n/2;
 }
 for(j=i-1;j>0;--j)
  cout<<a[j];
 cout<<"\n\n";
return 0;
}