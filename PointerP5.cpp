#include <iostream>

using namespace std;
int main() {
	int *p, x = 30;
	p = &x;
	cout << "Value of x is: " << *p;
	return 0;
}