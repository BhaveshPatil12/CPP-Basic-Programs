#include<iostream>
using namespace std;
class Armstrong {
 private:
  int number;
 public:
  int armstrong(int n) {
    number = n;
    int index, remain, result =0;
    while (number) {
      remain = number % 10;
      result = result + (remain * remain * remain);
      number = number / 10;
    }
    return result;
  }
};

int main() 
{
  Armstrong A;
  int n, result;
  cout << "Enter Number: ";
  cin >> n;
  result = A.armstrong(n);
  if (result == n) {
    cout << n << " is an Armstrong number." << endl;
  }
  else {
    cout << n << " is not an Armstrong number." << endl;
  }
  return 0;
}