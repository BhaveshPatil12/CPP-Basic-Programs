#include<iostream>
using namespace std;
int main()
{
    string name[]={"John","Mike","Robert","Donult"};
    int i=0;
    do
	{
            cout<<"Student name "<<i+1<<" is "<<name[i]<<endl;
    i++;
    }
	while(i<=3);
    return 0;
}