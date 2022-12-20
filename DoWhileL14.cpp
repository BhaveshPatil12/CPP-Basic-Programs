#include<iostream> 
using namespace std;
int main() {
    int a = 1, sum = 0;
    do {
        int b = 3, difference = 10;
        do 
		{
            difference -= b;
            b--;
            cout << "Difference is " << difference << "\n";
        }
		 while (b >= 1);
        sum += a;
        a++;
        cout << "Sum is " << sum << "\n";
    } while (a <= 4);
    return 0;
}