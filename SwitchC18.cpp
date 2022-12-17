#include<iostream>  
using namespace::std;  
int main () {  
       int num;  
       cout<<"Enter a number to check grade:";    
       cin>>num;  
           switch (num)    
          {    
              case 80: cout<<"It is O"; 
			  break;    
              case 75: cout<<"It is A"; 
			  break;    
              case 65: cout<<"It is B"; 
			  break;    
              default: cout<<"Not O, B or C"; 
			  break;    
          }    
    }