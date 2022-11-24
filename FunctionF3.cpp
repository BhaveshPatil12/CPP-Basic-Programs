#include <iostream>
using namespace::std;
int getInteger();
int main() {
  int n, i, flag = 0;
  n = getInteger();    
  if (n == 0 || n == 1)
    flag = 1;
  for(i = 2; i <= n/2; ++i) {
    if(n%i == 0){
      flag = 1;
      break;
    }
  }
  if (flag == 1)
    cout<<"\n is not a prime number: "<<n;
  else
    cout<<"\n is a prime number: "<<n;

  return 0;
}
int getInteger() {
  int n;

  cout<<"\nEnter a positive integer: ";
  cin>>n;
  return n;
}