#include <iostream>
using namespace::std;
#include <string.h>
 union Data {
   int i;
   float f;
   char str[20];
};
 int main( ) {
union Data data;        
	cout<<"Memory size occupied by data : \n"<<sizeof(data);
	return 0;
}