#include <iostream>
using namespace::std;
int addNumbers(int a, int b);        
int main()
{
    int n1,n2,sum;
    cout<<"Enters two numbers: ";
    cin>>n1>>n2;
    sum = addNumbers(n1, n2);       
    cout<<"sum = "<<sum;
    return 0;
}
int addNumbers(int a, int b)          
{
    int result;
    result = a+b;
    return result;               
}