#include <iostream>
using namespace::std;
void checkPrimeAndDisplay(int n);
int main() {
  int n;
  cout<<"Enter a positive integer: ";
  cin>>n;
  checkPrimeAndDisplay(n);
  return 0;
}
void checkPrimeAndDisplay(int n) {
  int i, flag = 0;
  if (n == 0 || n == 1)
    flag = 1;
  for(i = 2; i <= n/2; ++i) {
    if(n%i == 0){
      flag = 1;
      break;
    }
  }
  if(flag == 1)
    cout<<"\nis not a prime number: "<<n;
  else
    cout<<"\n is a prime number: "<<n;
}