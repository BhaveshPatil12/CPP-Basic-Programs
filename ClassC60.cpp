#include<iostream>
#include<cmath>
using namespace std;
class OctalToDecimal {
 private:
  int octal;
 public:
  void getOctal() {
    cout << "Enter Octal Number:";
    cin >> octal;
  }
  int OToD() {
    int decimal = 0, index = 0, remain;
    while (octal) {
      remain = octal % 10;
      octal = octal / 10;
      decimal = decimal + remain * pow(8, index);
      index++;
    }
    return decimal;
  }
};

int main() 
{
  OctalToDecimal O;
  int d;
  O.getOctal();
  d = O.OToD();
  cout << "Decimal Number:" << d;
  return 0;
}
