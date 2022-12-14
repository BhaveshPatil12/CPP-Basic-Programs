#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any character"<<endl;
	cin>>ch;
	if (ch>='a'&&ch<='z')
	{
		cout<<"ch is in lowercase";
	}
	else if(ch<='A'&&ch>='Z')
	{
		cout<<"ch is in uppercase";
	}
    else
    {
    	cout<<"Invalid Entry";
	}
}