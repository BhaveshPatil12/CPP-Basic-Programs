#include<iostream>
using namespace std;
int main()
{
int n, count = 0, limit;
cout << "Enter the value to find the multiplication table: ";
cin >> n;
cout << "Enter the maximum limit for multiplication table: ";
cin >> limit;
do
{
cout << n << "*" << count << " = " << n*count <<endl;
count++;
}
while(count <= limit);
return 0;
}