#include <iostream>
using namespace::std;
int main() {
    int a = 2;
    int* pVar;    
    pVar = &a; 
    cout << "a = " << a << endl; 
    cout << "Address of a (&a) = " << &a << endl;    
    cout << "pVar = " << pVar << endl;   
    cout << "The content of the address pointed to by pVar (*pVar) = " << *pVar << endl;
    return 0;
}