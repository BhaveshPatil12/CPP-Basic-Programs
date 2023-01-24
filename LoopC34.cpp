#include<iostream>
#include<string.h>
using namespace std;
int test(string arr_str[], int len, int arr_length) {
 int ctr = 0;
 for (int i = 0; i < arr_length; i++) {
   if (arr_str[i].size() == len)
     ctr++;
 }
 return ctr;
}
int main() {
 string text[] = {
   "a",
   "b",
   "bb",
   "c",
   "ccc"
 };
 cout << "Original array strings: ";
 int arr_length = sizeof(text) / sizeof(text[0]);
 for (size_t i = 0; i < arr_length; i++) {
   std::cout << text[i] << ' ';
 }
 int len = 1;
 cout << "\n\nNumber of strings with length " << len << " = " << test(text, len, arr_length) << endl;
 len = 2;
 cout << "\nNumber of strings with length " << len << " = " << test(text, len, arr_length) << endl;
 len = 3;
 cout << "\nNumber of strings with length " << len << " = " << test(text, len, arr_length) << endl;
 return 0;
}