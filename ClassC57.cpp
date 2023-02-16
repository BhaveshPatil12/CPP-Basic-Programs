#include<iostream>
#include<cmath>
using namespace std;
class BinaryToOctal {
 private:
  long binary;
 public:
  void getBinary() {
    cout << "Enter Binary:";
    cin >> binary;
  }
  int BToO() {
    int octal = 0, decimal = 0, index = 0;
    while (binary != 0)

    {
      decimal = decimal + (binary % 10) * pow(2, index);

      index++;

      binary = binary / 10;
    }

    index = 1;
    while (decimal != 0)
    {
      octal = octal + (decimal % 8) * index;

      decimal = decimal / 8;

      index = index * 10;
    }
    return octal;
  }
};

int main() 
{
  BinaryToOctal B;
  int o;
  B.getBinary();
  o = B.BToO();
  cout << "Octal Number:" << o;
  return 0;
}
