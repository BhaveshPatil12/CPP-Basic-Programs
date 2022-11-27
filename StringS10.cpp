#include <iostream>
using namespace::std;
#include<string.h>
void displayString(char str[]);
int main()
{
    char str[50];
    cout<<"Enter string: ";
    fgets(str, sizeof(str), stdin);             
    displayString(str);     
    return 0;
}
void displayString(char str[])
{
    cout<<"String Output: ";
    puts(str);
}