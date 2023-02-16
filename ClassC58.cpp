#include<iostream>
#include<cmath>
using namespace std;
class OctalToBinary {
 private:
  int octal;
 public:
  void getOctal() {
    cout << "Enter Octal Number:";
    cin >> octal;
  }
  long long OToB() {
    int decimal = 0, index = 0;
    long long binary = 0;
    while (octal != 0) {
      decimal = decimal + (octal % 10) * pow(8, index);
      index++;
      octal = octal / 10;
    }
    index = 1;
    while (decimal != 0) {
      binary = binary + (decimal % 2) * index;
      decimal = decimal / 2;
      index = index * 10;
    }
    return binary;
  }
};

int main() 
{
  OctalToBinary O;
  int b;
  O.getOctal();
  b = O.OToB();
  cout << "Binary Digit:" << b;
  return 0;
}
