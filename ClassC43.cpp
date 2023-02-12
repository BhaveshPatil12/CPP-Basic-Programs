#include<iostream>
using namespace std;
class Student
{
	private:
		int rNo;
		float perc;
		void inputOn(void)
		{
			cout<<"Input start..."<<endl;
		}
		void inputOff(void)
		{
			cout<<"Input end..."<<endl;
		}		
		
	public:
		void read(void)
		{
			inputOn();
			cout<<"Enter roll number: ";
			cin>>rNo;
			cout<<"Enter percentage: ";
			cin>>perc;
			inputOff();				
		}		
		void print(void)
		{
			cout<<endl;
			cout<<"Roll Number: "<<rNo<<endl;
			cout<<"Percentage: "<<perc<<"%"<<endl;
		}
};

int main()
{
	Student std;
	
	std.read();
	std.print();
	return 0;
}