#include<iostream>
using namespace std;
int Zeroes(int n) {
        int number = 0;
        while (n > 0) {
            number += n / 5;
            n /= 5;
        }
        return number;
    }

int main(void)
{
    int n = 4;
    cout << "\nNumber of trailing zeroes of factorial " << n << " = " << Zeroes(n) << endl; 
    n = 6;
    cout << "\nNumber of trailing zeroes of factorial " << n << " = " << Zeroes(n) << endl;     
    n = 7;
    cout << "\nNumber of trailing zeroes of factorial " << n << " = " << Zeroes(n) << endl;  
    n = 10;
    cout << "\nNumber of trailing zeroes of factorial " << n << " = " << Zeroes(n) << endl; 
    return 0;   
}