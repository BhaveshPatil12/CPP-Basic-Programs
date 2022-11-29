#include <iostream>
using namespace::std;
struct student
{
    string name;
    int roll, marks;
    float avg;
};
int main()
{
    student cl1, cl2; 
    cl1.name = "Raj";
    cl1.roll = 15;
    cl1.marks = 541;
    cl1.avg = 83;

    cl2.name = "Sanjay";
    cl2.roll = 12;
    cl2.marks = 654;
    cl2.avg = 92;
    cout << "\nDetails of the student of Class1 :\n ";
	cout<<"Name:"<< cl1.name;
    cout << "\nRoll: " << cl1.roll;
    cout << "\nMarks: " << cl1.marks << " \nAverage: " << cl1.avg;
    cout << "\n\nDetails of the student of class2:\n";
    cout << "Name: " << cl2.name << "\nRoll: " << cl2.roll << "\nMarks: " << cl2.marks;
    cout << "\nAverage: " << cl2.avg << "\n";
    return 0;
}