#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int longest_valid_Parentheses(string paren_str) {
        stack<int> temp; 
        int result = 0;
        for(int i=0;i<paren_str.size();i++)
        {
            if(paren_str[i]=='[')
            {
                temp.push(i);
            }
            else
            {
                if(!temp.empty() && paren_str[temp.top()]=='[')
                {
                    temp.pop();
                    int last_pos=-1;
                    
                    if(!temp.empty())
                        last_pos=temp.top();
                    
                    int len = i-last_pos;
                    result = max(result,len); 
                }
                else
                {
                    temp.push(i);
                }  
            }
        }
        
        return result;
    }
int main()
{
  char main_str1[] = "[[]";
  cout << "Original Parentheses string: " << main_str1;
  cout << "\nLength of longest parentheses: " << longest_valid_Parentheses(main_str1);
  char main_str2[] = "[[]]]";
  cout << "\nOriginal Parentheses string: " << main_str2;
  cout << "\nLength of longest parentheses: " << longest_valid_Parentheses(main_str2);
  char main_str3[] = "]]]][[[[";
  cout << "\nOriginal Parentheses string: " << main_str3;
  cout << "\nLength of longest parentheses: " << longest_valid_Parentheses(main_str3);
  return 0;    
}