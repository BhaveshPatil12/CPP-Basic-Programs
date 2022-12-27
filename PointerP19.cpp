#include<iostream>
using namespace::std;
int main()
{
	int v[3] = { 10, 100, 200 };
	int* ptr;
	ptr = v;
	for (int i = 0; i < 3; i++) {
		cout << "Value at ptr = " << ptr << "\n";
		cout << "Value at *ptr = " << *ptr << "\n";
		ptr++;
	}
	return 0;
}