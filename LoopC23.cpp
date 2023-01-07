#include<iostream>
using namespace  std;
int  main()
{
int  range, first  = 0,  second  = 1,  fibonicci;
cout  <<  "Enter the Range for Terms of Fibonacci Sequence "  <<  endl;
cin  >>  range;
cout  <<  "Fibonicci Series upto "  <<  range  <<  " Terms  "<<endl<<  endl;
for  (  int  c  = 0 ;  c  <  range  ;  c++  )
{
if  (  c  <= 1 )
fibonicci  =  c;
else
{
fibonicci  =  first  +  second;
first  =  second;
second  =  fibonicci;
}
cout  <<  fibonicci  <<"  ";
}
return  0;
}