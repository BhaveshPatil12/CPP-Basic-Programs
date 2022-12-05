#include<iostream>
using namespace::std;
int main()
{
      int n,i;
      int sum=0;
      cout<<"1+2+3+...+N";
      cout<<"\n\nEnter Value of N : ";
      cin>>n;
      sum = (n * (n + 1)) / 2;  
      for(i =1;i <= n;i++)
      {
            if (i!=n)
                  cout<<"+ "<<i;
            else
                  cout<<i;
      }
      cout<<"\n\nSum of Series ="<<sum;
      return 0;
}