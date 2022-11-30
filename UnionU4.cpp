#include <iostream>
using namespace::std;
union one {
    int x;
    char y;
} one1;
union two {
    int x;
    char y;
    long z;
} two2;
union three {
    int arr[100];
    char y;
    double d[5];
} three3;
int main()
{
    cout<<"sizeof(one) =  sizeof(two) =  sizeof(three) = "<<sizeof(one1)<<sizeof(two2)<<sizeof(three3);
    return 0;
}