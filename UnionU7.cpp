#include<iostream>
using namespace std;
union union_A {
  char ch; 
  int it;
  double db;
};
int main() {
  union_A var1;
  var1.ch = 'a';
  cout << "Character value of var1: " << var1.ch;
  var1.it = 100;
  cout << "\nInteger value of var1: " << var1.it << endl;
  var1.db = 500.98988;
  cout << "Double value of var1: " << var1.db << endl;
  return 0;
}