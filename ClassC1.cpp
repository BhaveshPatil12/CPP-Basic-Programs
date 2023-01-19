#include<iostream>
using namespace::std;
namespace One
{
    int val;
}
namespace Two
{
    char val;
}
void functionOne(void)
{
    using namespace One;
    std::cout << "Enter the value of val : ";
    std::cin >> val;
    std::cout << "functionOne()" << endl
              << "Value of val : "
              << val << endl;
}
void functionTwo(void)
{
    using namespace Two;
    std::cout << "Enter the value of val : ";
    std::cin >> val;
    std::cout << "functionTwo()" << endl
              << "Value of val : "
              << val << endl;
}
int main()
{
    functionOne();
    functionTwo();
    return 0;    
}