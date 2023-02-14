#include<iostream>
using namespace std;
class Power {
 private:
  int base, exponent;
 public:
  int power(int b, int e) {
    base = b;
    exponent = e;
    int index, result = 1;
    for (index = 0; index < exponent; index++) {
      result *= base;
    }
    return result;
  }
};

int main() 
{
  Power P;
  int b, e, result;
  cout << "Enter Base:";
  cin >> b;
  cout << "Enter Exponent:";
  cin >> e;
  result = P.power(b, e);
  cout << b << "^" << e << "=" << result;
  return 0;
}