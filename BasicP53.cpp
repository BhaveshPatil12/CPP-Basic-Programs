#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
  cout << " The first 10 Lucus numbers are: "<<endl;
    int n = 10;  
     int n1 = 2, n2 = 1, n3;  
        if (n > 1)
		{  
            cout<<n1<<" "<<n2<<" ";
            for(int i = 2; i < n; ++i)
			{  
                n3 = n2;  
                n2 += n1;  
                n1 = n3;  
                cout<< n2 <<" ";
            } 
            cout<<endl;
        }  
        else if (n == 1)
        {
           cout<<n2<<" "; 
           cout<<endl; 
        }
        else 
        { 
            cout<<"Input a positive number."<<endl;
        }
}