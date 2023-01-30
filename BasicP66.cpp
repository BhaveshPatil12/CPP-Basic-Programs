#include<iostream>
using namespace std;
    string convert(int num) {
        if (num == 0) {
            return "";
        }
        return convert((num - 1) / 26) + static_cast<char>((num - 1) % 26 + 'A');
    }
int main(void)
{
    int n = 2;
    cout << "\nColumn Number n =  " << n << " Excel column title = " << convert(n) << endl; 
    n = 29;
    cout << "\nColumn Number n =  " << n << " Excel column title = " << convert(n) << endl; 
    n = 153;
    cout << "\nColumn Number n =  " << n << " Excel column title = " << convert(n) << endl; 
    return 0;
}