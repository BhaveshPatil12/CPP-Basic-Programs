#include <iostream>
#include <cstring>
using namespace std;
union student
{
	int roll_no;
	int phone_number;
	char name[30];
};
int main()
{
	union student p1;
	p1.roll_no = 1;
	p1.phone_number = 1234567822;
	strcpy(p1.name,"Suraj Pancholi");
	cout << "roll_no : " << p1.roll_no << endl;
	cout << "phone_number : " << p1.phone_number << endl;
	cout << "name : " << p1.name << endl;
	return 0;
}