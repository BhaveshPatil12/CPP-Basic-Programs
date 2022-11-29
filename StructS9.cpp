#include <iostream>    
using namespace::std;    
class findsum  
{
  private:
    int a,b;
  public:
    void input();
    void sum();
};
void findsum::input()    
{
    cout << "Enter values of a and b:";
    cin >> a >> b;
}
void findsum::sum()   
{
    cout <<"Sum = "<<a+b;
}
int main()    
{
    findsum x;
    x.input();
    x.sum();
    return 0;
}