#include <iostream>
using namespace::std;
int main() {
  int a, b, c;
  cin>>a>>b>>c;
  if (a == b) {
    if (a == c) {

      cout<<"Yes";
    } else {
    
      cout<<"No";
    }
  } else {    
    cout<<"No";
  }
  return 0;
}