#include <iostream>
using namespace::std;
int main()
{
    int age;
    cout<<"Enter your age Here\n";
    cin>>age; 
    if(age<13){ 
    cout<<"you are a child!\n";
    } else 
    if(age<35){  
    cout<<"you are a younger!\n";
    }
    else{  
    cout<<"you are a older!\n";
    }
    return 0;
}