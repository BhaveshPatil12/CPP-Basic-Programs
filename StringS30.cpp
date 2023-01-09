#include<iostream>
using namespace std;
bool test(string s1) 
        {
           return s1.substr(0, 2) == s1.substr(s1.length() - 2);
        }
int main() 
 {
  cout << test("abab") << endl;  
  cout << test("abcdef") << endl; 
  cout << test("xyzsderxy") << endl;  
  return 0;    
}