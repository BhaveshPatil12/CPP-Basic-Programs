#include<iostream>
using namespace::std;
int main()
{
     char ch='b';
     switch (ch)
     {
         case 'd':
            cout<<"CaseD ";
            break;
         case 'b':
            cout<<"CaseB";
            break;
         case 'c':
            cout<<"CaseC";
            break;
         case 'z':
            cout<<"CaseZ ";
            break;
         default:
            cout<<"Default ";
    }
    return 0;
}