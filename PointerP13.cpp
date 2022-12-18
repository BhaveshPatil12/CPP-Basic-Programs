#include<iostream>
using namespace std;
int main() {
    float arr[4];
    cout << "Enter the 4 numbers: " << endl;
    for (int i = 0; i < 4; ++i) {
        cin >> *(arr + i);
    }
    cout << "Displaying the data: " << endl;
    for (int i = 0; i < 4; ++i) {
        cout << *(arr + i) << endl ;
    }
    return 0;
}