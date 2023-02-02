#include<iostream>
#include<cmath>
using namespace std;
  
    long long num_replace(long long n) 
    {
        if (n==1) return 0;
        
        if (n%2==0)
            return num_replace(n/2)+1;
        else
            return min(num_replace(n+1), num_replace(n-1))+1;
    }    
int main() 
{
    long n = 8; 
    cout << "\nOriginal number: "<< n << "  Number of replacements: " <<  num_replace(n) << endl;      
    n = 10; 
    cout << "\nOriginal number: "<< n << "  Number of replacements: " <<  num_replace(n) << endl;      
    n = 12; 
    cout << "\nOriginal number: "<< n << "  Number of replacements: " <<  num_replace(n) << endl;      
	return 0;    
}