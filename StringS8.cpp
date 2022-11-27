#include <iostream>
using namespace::std;
#include <string.h>
int main () {
const char str[] = "http://www.google.com";
const char ch = '.';
char *ret;
ret = strchr(str, ch);
cout<<"String after is -\n"<<ch<<ret;
}