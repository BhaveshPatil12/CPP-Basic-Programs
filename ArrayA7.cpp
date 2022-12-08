#include<iostream>
using namespace std;
int main()
{
    int i,len;
    cout<<"Enter the Array length: ";
      cin>>len;
    char char_array[len];
      cout<<"\n";
       cout<<"Enter the characters for array :";
    for(i=0; i<len; i++)
	{
      cin>>char_array[i];
    }
    cout<<"\ndisplay the characters\n";
      for(i=0; i<len; i++)
	{
      cout<<char_array[i];
      cout<<("\n");
    }
    return 0;
}