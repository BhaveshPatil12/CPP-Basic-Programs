#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,p,ans,i,n1;
	double result;
	cout << " Input a number: ";
    cin>>n;
    n1=n+1;
        p = 0;
        ans = 0;
        for(i=0;;i++)
        {
            p=(int)pow(2,i);
            if(p>n1)
            {
                break;
            }
            else if(p==n1)
            {
               cout<<" "<<n<<" is a Mersenne number."<<endl;
               ans=1;
            }
        }
  if(ans==0)
  {
   cout<<" "<<n<<" is not a Mersenne number."<<endl;
  }	
}
