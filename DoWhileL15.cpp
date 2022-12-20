#include<iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter number:" << endl;
    cin >> n;
    cout << endl;
    do
    {
        cout << "I am a Developer" << endl;
        i++;
    }
    while (i <= n);
    return 0;
}