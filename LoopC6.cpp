#include <iostream>  
using namespace::std;  
int main ()  
{  
	int arr1[4]  = { 0, 1, 2, 3 };  
	int arr2[5] = { 1, 2, 3, 4, 5 };  

	for ( int x : arr1 )  
	{  

	for ( int y : arr2 )  
	{  
		cout << " x = " << x << " and j = " << y << endl;  
		}  
	}  
		return 0;  
	}