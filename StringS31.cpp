#include<iostream>
using namespace std;
std::string test(std::string text) {
         std::string str;
         int ctr=0;
         for(char ch:text){
                  if(ctr%2==0)
                  str+=tolower(ch);
                  if(ctr%2!=0)
                  str+=toupper(ch);
                  if(ch==' ')
                  ctr++;
                  ctr++;
         }
         return str;
}int main()
{
         string text = "JavaScript";
         cout << "Original String: " << text;
         cout << "\nAlternate the case of each letter in the said string: " << test(text);
         text = "Python";
         cout << "\n\nOriginal String: " << text;
         cout << "\nAlternate the case of each letter in the said string: " << test(text);
         text = "C++";
         cout << "\n\nOriginal String: " << text;
         cout << "\nAlternate the case of each letter in the said string: " << test(text);
}