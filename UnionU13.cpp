#include<iostream>
using namespace std;
union product
{
  int productid;
  char name[20];
  float price;
};
int main()
{
  union product obj;
  cout << "Enter product-id: ";
  cin >> obj.productid;
  cout << "Product-id is: " << obj.productid << endl;
  cout << "Enter name of product: ";
  cin >> obj.name;
  cout << "Product name is: " << obj.name << endl;
  cout << "Enter price of product: ";
  cin >> obj.price;
  cout << "Product price is: " << obj.price;
  return 0;
}