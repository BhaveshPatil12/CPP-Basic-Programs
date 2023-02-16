#include<iostream>
#include<cmath>
using namespace std;
class DecimalToOctal {
private:
    int decimal;
public:
    void getDecimal()
    {
        cout << "Enter Decimal Number:";
        cin >> decimal;
    }
    int DToO()
    {
        int index = 1, octal = 0;
        while (decimal) {
            octal = octal + (decimal % 8) * index;
            decimal = decimal / 8;
            index = index * 10;
        }
        return octal;
    }
};
int main()
{
    DecimalToOctal D;
    int o;
    D.getDecimal();
    o = D.DToO();
    cout << "Octal Number:" << o;
    return 0;
}
