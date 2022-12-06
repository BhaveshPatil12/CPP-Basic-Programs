#include <iostream>  
using namespace::std;
int main() {  
   int n = 5;
   int factorial = 1;
   int i = 1;
   while (i<=n) {
      factorial *= i;
      i++;
   }
   cout << factorial;
}