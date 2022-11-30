#include<iostream>
using namespace::std;
union quantity
{
    int count;
    float weight;
    float volume;
};
struct goods
{
    char name[20];
    union quantity q;
};
int main()
{
    struct goods g1 = { "apple", {.weight=2.5} };
    struct goods g2 = { "balls", {.count=100} };
	cout<<"Goods name: "<<g1.name;
    cout<<"\nGoods quantity: "<<g1.q.weight;
	cout<<"\nGoods name: "<<g2.name;
    cout<<"\nGoods quantity: "<<g2.q.count;
	return 0;
}