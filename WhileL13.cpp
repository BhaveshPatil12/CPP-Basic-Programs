#include<iostream> 
using namespace::std;
int main() 
{
    int input[100], count, i, num ;
    cout << "Enter Number of Elements in Array\n";
    cin >> count;
    cout << "Enter numbers\n";
	i=0;
	while (i<count)
              { 
                 cin>>input[i];
                i++;
              }
         cout << "Enter a number to search in Array\n";
         cin>>num;
         i=0;
        while(i<count)
                {
                	if(input[i] == num)
                        {
                            cout << " TheElement found at index " << i;
                            i++;
                            break;
                            	}	
                }
        if(i==count)
                  {
                    	cout << "Element Not Present in Input Array\n";
                  }
          return 0;
     }