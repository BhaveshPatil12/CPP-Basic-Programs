#include <iostream>
using namespace::std;
void checkPrimeNumber();
int main() {
  checkPrimeNumber();    
  return 0;
}
void checkPrimeNumber() {
  int n, i, flag = 0;
  cout<<"Enter a positive integer: ";
  cin>>n; 
  if (n == 0 || n == 1)
    flag = 1;
  for(i = 2; i <= n/2; ++i) {
    if(n%i == 0) {
      flag = 1;
      break;
    }
  }
   if (flag == 1)
    cout<<"\nis not a prime number: "<<n;
  else
    cout<<"\nis a prime number: "<<n;
}