#include<iostream>
using namespace std;
union geeks {
	int id;
	int salary;
	char name[30];
	int age;
};
int main()
{
	union geeks g1;
	g1.id =12055;
	cout << "Id : " << g1.id
		<< endl;

	strcpy(g1.name, "Dwarkesh Patil");
	cout << "Name : " << g1.name
		<< endl;

	g1.salary = 35000;
	cout << "Salary : " << g1.salary
		<< endl;

	g1.age = 25;
	cout << "Age : " << g1.age
		<< endl;
	return 0;
}
