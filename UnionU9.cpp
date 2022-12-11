#include<iostream>
using namespace std;
int main(){
union values{
int x;
char arr[2];
};
union values v;
v.arr[0] = '1';
cout << v.arr[0]<<endl;
v.arr[1] = '2';
cout << v.arr[1]<<endl;
v.x=3;
cout << v.x<<endl;
return 0;
}