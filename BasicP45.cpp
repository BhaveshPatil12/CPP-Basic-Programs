#include<iostream>
using namespace std;
int getSum(int n)
{
    int sum = 0;
    for ( int i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            if (n/i == i)
                sum = sum + i;
            else 
            {
                sum = sum + i;
                sum = sum + (n / i);
            }
        }
    }
    sum = sum - n;
    return sum;
}
bool checkDeficient(int n)
{
    return (getSum(n) < n);
}
int main()
{
int n;
cout << " Input an integer number: ";
cin >> n;
    checkDeficient(n)? cout << " The number is Deficient.\n" : cout << " The number is not Deficient.\n";
    return 0;
}