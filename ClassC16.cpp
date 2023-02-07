#include<iostream>
using namespace std;
class Example {
   int a, b;
public:
   Example();

   void Display() {
      cout << "Values :" << a << "\t" << b;
   }
};

Example::Example() {
   a = 10;
   b = 20;
   cout << "Im Constructor : Outside Class\n";
}

int main() {
   Example Object;
   Object.Display();
   return 0;
}