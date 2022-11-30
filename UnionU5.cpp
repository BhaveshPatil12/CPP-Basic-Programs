#include <iostream>
using namespace::std;  
union abc  
{  
    int a;  
    char b;  
};  
int main()  
{  
    union abc *ptr; 
    union abc var;  
    var.a= 90;  
    ptr = &var;  
    cout<<"The value of a is : "<<ptr->a;  
    return 0;  
}