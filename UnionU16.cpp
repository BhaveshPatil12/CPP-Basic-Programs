#include<iostream>
using namespace::std;
union Coaching {
	int M;
	float N;
	} 
	Course1, Course2;
	int main( ) {
	cout<<"Space occupied by data is : \t"<<sizeof(Course1)<<sizeof(Course2);
	return 0;
}