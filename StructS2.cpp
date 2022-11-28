#include <iostream>
using namespace::std;                                            
struct Person{
    char name[30];
    int age;
    char citizenship[40];
};                                                 
int main(){
    Person p1;  
    cout << "Enter Full name: ";
    cin.get(p1.name, 30);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter citizenship: ";
    cin >> p1.citizenship;                                                                    
    cout << "\nDisplay Person Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "citizenship: " << p1.citizenship;                                             
    return 0;
}