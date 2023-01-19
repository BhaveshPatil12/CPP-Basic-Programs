#include<iostream>
using namespace::std; 
class Base {
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        Base(int aa = 1, int bb = 2, int cc = 3) : a(aa), b(bb), c(cc) {}
        virtual ~Base() {}
};
 
class Derived: public Base {
    int j;
    public:
        Derived(int jj = 0) : j(jj) {}
        void change()
        {
           j = b;
        }
        void printValue()
        {
            std::cout << "Derived::j = " << j
                      << std::endl;
        }
};
 
int main()
{
    Base base;
    Derived derived;
 
    std::cout << "Base::c = "<< base.c << std::endl;
    derived.change();
    derived.printValue();
}