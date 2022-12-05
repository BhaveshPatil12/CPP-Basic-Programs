#include<iostream>
using namespace::std;
int main()
{  
      int n,i,sqr;
      float s;
      cout<<"1+1/4+1/9+1/16+....+1/N";
      cout<<"\n\nEnter Value of N : ";
      cin>>n;
      for(i=1;i<=n;i++)
      {
            sqr=i*i;
            s=s+(1/(float)i);
            if(i==1)
                  cout<<"\n1 +";
            else if(i==n)
                  cout<<"(1/%d)  "<<sqr;
            else
                  cout<<" (1/%d) + "<<sqr;
      }
      cout<<"\n\nSum of Series ="<<s;
      return 0;        
}