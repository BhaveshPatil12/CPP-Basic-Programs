#include<iostream>
using namespace std;
bool chkkaprekar(int n)
{
    if (n == 1)
       return true;
    int sqr_n = n * n;
    int ctr_digits = 0;
    while (sqr_n)
    {
        ctr_digits++;
        sqr_n /= 10;
    }
    sqr_n = n*n; 
    for (int r_digits=1; r_digits<ctr_digits; r_digits++)
    {
         int eq_parts =(10, r_digits);

         if (eq_parts == n)
            continue;
         int sum = sqr_n/eq_parts + sqr_n % eq_parts;
         if (sum == n)
           return true;
    }
    return false;
}
int main()
{
int kpno;
cout << " Input a number: ";
cin >> kpno;
          chkkaprekar(kpno)? cout << kpno <<" is a Kaprekar number. ": cout << kpno<<" is not a kaprekar number.";
          cout <<endl; 
}