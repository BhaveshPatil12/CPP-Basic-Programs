#include<iostream>
using namespace::std;
struct E
{
enum{DS, DA, DE} tag;
union
{
char M;
int N;
double O;
};
};
void display(const E & P)
{
switch(P.tag)
{
case E::DS: std::cout << P.M << '\n'; break;
case E::DA: std::cout << P.N << '\n'; break;
case E::DE: std::cout << P.O << '\n'; break;
}
}
int main()
{
E P = {E::DS, 'Z'};
display(P);
P.tag = E::DA;
P.N = 987;
display(P);
}