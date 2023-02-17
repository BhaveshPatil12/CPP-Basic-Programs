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
  int smallest() {
    int min = array[0];
    for (int index = 1; index <= 4; index++) {
      if (array[index] < min) {
        min = array[index];
      }
    }
    return min;
  }
};

int main() 
{
  Array A;
  int min;
  A.putArray();
  min = A.smallest();
  cout << "Smallest Number is " << min;
  return 0;
}
