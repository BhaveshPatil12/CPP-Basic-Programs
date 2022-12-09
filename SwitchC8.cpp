#include <iostream>
using namespace::std;
int main()
{
	int arr[] = { 1, 5, 15, 20 };

	for (int i = 0; i < 4; i++)
	{
		switch (arr[i])
		{
		case 1 ... 6:
			cout << arr[i] <<" in range 1 to 6\n";
			break;
		case 19 ... 20:
			cout << arr[i] <<" in range 19 to 20\n";
			break;
		default:
			cout << arr[i] <<" not in range\n";
			break;
		}
	}
	return 0;
}