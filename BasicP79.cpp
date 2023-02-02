#include<iostream>
using namespace std;
string binary_add(string bstr1, string bstr2) {
        int size = max(bstr1.size(), bstr2.size());
        int temp = 0;

        string result_str = "";
        for(auto i = 0; i < size; ++i)
        {
            int digit1 = (i + 1 <= bstr1.size()) ? bstr1[bstr1.size() - 1 - i] - '0' : 0;
            int digit2 = (i + 1 <= bstr2.size()) ? bstr2[bstr2.size() - 1 - i] - '0' : 0;
            int number = (digit1 + digit2 + temp);
            temp = number / 2;
            result_str = to_string(number % 2) + result_str;
        }

        if (temp > 0)
        {
            result_str = to_string(temp) + result_str;
        }

        return result_str;
    }

int main() {
    string bstr1 = "10";
    string bstr2 = "1";
    cout << "\n" << bstr1 << " + " << bstr2 <<" = " << binary_add(bstr1, bstr2) << endl;
    bstr1 = "1100";
    bstr2 = "1010";
    cout << "\n" << bstr1 << " + " << bstr2 <<" = " << binary_add(bstr1, bstr2) << endl;
    bstr1 = "10";
    bstr2 = "10";
    cout << "\n" << bstr1 << " + " << bstr2 <<" = " << binary_add(bstr1, bstr2) << endl;			    
    return 0;
}