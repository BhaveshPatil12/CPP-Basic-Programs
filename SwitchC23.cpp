#include<iostream>
using namespace std;
int main()
{
	int h,m;
	cout<<"Input The time in 24 hours format in Given Sequence  "<<endl;
	cout<<"Input Hours : ";
	cin>>h;
	cout<<"Input Minutes : ";
	cin>>m;
	switch(h>=12 && h<=24)
	{
		case 1: 
		cout<<"The time is in PM "<<endl;
		break;
		case 0:
			switch (h>=0 && h<=11)
			{
				case 1:
				cout<<"Time is in AM "<<endl;
				break;
				case 0:
				cout<<"Input is Wrong  "<<endl;
				break;
			}
		break;			
	}
}