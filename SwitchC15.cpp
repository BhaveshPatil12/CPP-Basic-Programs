#include <iostream>
using namespace::std;
int main()
{
	char x = 'B';
	switch (x) {
	case 'A':
		cout<<"Choice is A";
		break;
	case 'B':
		cout<<"Choice is B";
		break;
	case 'C':
		cout<<"Choice is C";
		break;
	default:
		cout<<"Choice other than A, B and C";
		break;
	}
	return 0;
}