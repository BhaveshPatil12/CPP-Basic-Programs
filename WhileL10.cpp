#include <iostream>
using namespace::std;
void fibonacci(int n) {
  int a = 0, b = 1;  
  if (n < 1) {
    cout << "Invalid input";
    return;
  }
  cout << a << " ";
  int s = 1;
  while (s < n) { 
    cout << b << " ";
    int c = a + b;
    a = b;
    b = c;
    s++;    
  }
}
int main() {
  int n = 6;
  cout << "The first " << n << " numbers from the fibonacci series are ";
  fibonacci(n);
  return 0;
}