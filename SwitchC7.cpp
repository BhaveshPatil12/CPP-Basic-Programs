#include <iostream>
using namespace::std;
int main() {
   int x = 1;
   switch(x)
   {
    case 1:
    case 2:
        cout<<"1 and 2\n";         
        break;
       
    case 3:
    case 4:
        cout<<"3 and 4\n";
        break;
       
    default:
		cout<<"wrong choice!\n";
        break;
   }
   return 0;
         
}