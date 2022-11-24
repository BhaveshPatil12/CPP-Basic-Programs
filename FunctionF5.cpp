#include <iostream>
using namespace::std;
int checkPrimeNumber(int n);
int main() {
  int n, flag;
  cout<<"Enter a positive integer: ";
  cin>>n;
  flag = checkPrimeNumber(n);
  if(flag == 1)
    cout<<"\nis not a prime number: "<<n;
  else
    cout<<"\nis a prime number: "<<n;
  return 0;
}
int checkPrimeNumber(int n) {
  if (n == 0 || n == 1)
    return 1;
  int i;
  for(i=2; i <= n/2; ++i) {
    if(n%i == 0)
      return 1;
  }
  return 0;
}