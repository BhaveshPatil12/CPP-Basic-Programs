#include<iostream>
using namespace std;
class prime {
    int a, k, i;
public:
    prime(int x) {
        a = x;
    }
    void calculate() {
        k = 1;
        {
            for (i = 2; i <= a / 2; i++)
                if (a % i == 0) {
                    k = 0;
                    break;
                } else {
                    k = 1;
                }
        }
    }

    void show() {
        if (k == 1)
            cout << "\n" << a << " is Prime Number.";
        else
            cout << "\n" << a << " is Not Prime Numbers.";
    }
};
int main() {
    int a;
    cout << "Enter the Number:";
    cin>>a;
    prime obj(a);
    obj.calculate();
    obj.show();
    return 0;
}