#include<iostream>
using namespace::std;
int main()
 {  
	int count=0,even=0,odd=0,size=11;
    cout<<"even"<<"\t"<<"odd"<<endl;
    while(count<=size)
    {

      if(count%2==0) {
	     cout<<count<<"\t";
	     even+=count; 
	  }
      else    {
	     cout<<count<<"\n";
	     odd+=count; 
	   }
      count++;
   }
   cout<<"_____________\n";
   cout<<even<<"\t"<<odd;
   return 0;
}