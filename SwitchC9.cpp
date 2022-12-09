#include<iostream>
using namespace::std;
int main()
{
	char num;
	cout<<"Enter a character:"<<endl;
	cin>>num;
	switch(num>='a'&& num<='z'||num>='A'&& num<='Z')
	{
		case 1:
			cout<<"It's alphabet"<<endl;
			break;
			case 0:
				switch(num>='0' && num<='9')
				{
					case 1:
						cout<<"It's digit"<<endl;
						break;
						case 0:
							cout<<"It's not alphabet and not digit"<<endl;
							break;
				}
			break;	
	}
}