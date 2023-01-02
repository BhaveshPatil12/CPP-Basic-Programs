#include<iostream>
using namespace::std;
union coaching {
	int M;
	int N;
	} coaching;
	union training {
	int M;
	char N;
	} TRAINING;
	union technology {
	int ray[10];
	char N;
	} TECHNOLOGY;
	int main()
	{
	cout<<"COACHING = \n"
	"TRAINING =\n"
	"TECHNOLOGY =\n"<<sizeof(coaching)<<sizeof(TRAINING)<<sizeof(TECHNOLOGY);
	return 0;
}