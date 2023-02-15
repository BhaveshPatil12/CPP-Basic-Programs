#include<iostream>
using namespace std;
class Array {
 private:
  int array[5];
 public:
  void putArray() {
    for (int index = 0; index <= 4; index++) {
      cout << "array[" << index << "]:";
      cin >> array[index];
    }
  }
  int largest() {
    int max = array[0];
    for (int index = 1; index <= 4; index++) {
      if (array[index] > max) {
        max = array[index];
      }
    }
    return max;
  }
};

int main() 
{
  Array A;
  int max;
  A.putArray();
  max = A.largest();
  cout << "Largest Number is " << max;
  return 0;
}