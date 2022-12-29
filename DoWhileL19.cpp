#include<iostream>
using namespace::std;
int main (){
	char area_circle{};
	do{
	double ray{};
	cout<<"Enter the ray to calculate the area of the circle: ";
	cin>>ray;

	double area {ray*ray*3.14159};
	cout<<"The area of the circle "<<area<<endl;
	cout<<"***********"<<endl;
	cin>>area_circle;
	}while(area_circle<60);
	cout<<"Out of the margin!"<<endl;
	cout<<endl;
	return 0;
}