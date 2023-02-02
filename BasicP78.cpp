#include<iostream>
#include<cmath>
using namespace std;
int integer_Break(int n) {
            if (n == 2) {
                return 1;
            } else if (n == 3) {
                return 2;
            } else if (n % 3 == 0) {
                return (int) pow(3, n / 3);
            } else if (n % 3 == 1) {
                return 2 * 2 * (int) pow(3, (n - 4) / 3);
            } else {
                return 2 * (int) pow(3, n / 3);
            }
        }

int main() 
{
    int n = 5;  
    cout << "\nAfter breaking in +ve integers maximumn product from " << n << " = " << integer_Break(n) << endl;
    n = 12;  
    cout << "\nAfter breaking in +ve integers maximumn product from " << n << " = " << integer_Break(n) << endl;
    n = 17; 
    cout << "\nAfter breaking in +ve integers maximumn product from " << n << " = " << integer_Break(n) << endl;    
	return 0;    
}