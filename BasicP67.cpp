#include<iostream>
using namespace std;
    int excel(string s) {
    int number = 0;
        for (const auto& c : s) {
            number *= 26;
            number += c  - 'A' + 1;
        }
        return number;
    }

int main(void)
{
    string col_title1 ="C";
    cout << "\nExcel column title = " << col_title1 << ", Corresponding number = " << excel(col_title1) << endl; 
    col_title1 ="AD";
    cout << "\nExcel column title = " << col_title1 << ", Corresponding number = " << excel(col_title1) << endl; 
    col_title1 ="WX";
    cout << "\nExcel column title = " << col_title1 << ", Corresponding number = " << excel(col_title1) << endl; 
    return 0;
}