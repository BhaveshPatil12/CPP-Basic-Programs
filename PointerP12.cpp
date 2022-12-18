#include<iostream>
using namespace std;
int main(){
    float arr[2];
    float *p;
    cout << "Displaying address using arrays: " << endl;
    for (int i = 0; i < 2; ++i){
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }
    p = arr; 
    cout<<"\nDisplaying address using pointers: "<< endl;
    for (int i = 0; i < 2; ++i){
        cout << "p + " << i << " = "<< p + i << endl;
    }
    return 0;
}