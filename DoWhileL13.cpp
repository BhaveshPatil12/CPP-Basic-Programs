#include<iostream>
using namespace std;
int main()
{
    int n,i=1,f=1;
    cout << "Enter the number" << endl;
    cin>>n;
    do
    {
        f=f*i;
        i++;
    }
	while(i<=n);
    cout << "The factorial of " <<n<<" is "<<f<< endl;
    return 0;
}