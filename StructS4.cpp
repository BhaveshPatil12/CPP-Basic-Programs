#include <iostream>
using namespace::std;
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r = { 10, 5 };
    r.length = 20;
    r.breadth = 10;
    cout<<"Area of Rectangle: "<<r.length * r.breadth;
    return 0;
}