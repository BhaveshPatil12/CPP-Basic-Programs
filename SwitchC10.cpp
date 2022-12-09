#include<iostream>
using namespace::std;
int main () {   
   int i = 10;  
   int j = 20;    
   switch(i) {      
      case 10:   
         cout<<"the value of i evaluated in outer switch: \n"<<i;  
      case 20:  
         switch(j) {  
            case 20:  
               cout<<"The value of j evaluated in nested switch:\n"<<j;  
         }  
   }      
	cout<<"\nExact value of i is :"<<i ;  
	cout<<"\nExact value of j is :"<<j ;    
   return 0;  
}