#include<iostream>
using namespace std;
union union_A {
  int it;
  double db;
  float fl;
}
var;
int main() {
  cout << "Memory location of it: " << &var.it << endl;
  cout << "Memory location of db: " << &var.db << endl;
  cout << "Memory location of fl: " << &var.fl << endl;
  return 0;
}