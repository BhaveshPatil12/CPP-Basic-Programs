#include<iostream>
using namespace std;
class AreaOfCircle {
    int radius;
public:
    void get() {
        std::cout << "Enter the radius of Circle : ";
        std::cin >> radius;
    }
    friend float calculate(AreaOfCircle ob);
};

float calculate(AreaOfCircle ob) {
    return 3.14 * ob.radius * ob.radius;
}

int main() {
    AreaOfCircle object;
    object.get();
    std::cout<<"\nArea of Circle : "<<calculate(object);
}