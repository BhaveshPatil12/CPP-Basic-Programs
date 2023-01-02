#include<iostream>
using namespace::std;
union INFOTECH {
	int M;
	char N;
	};
	int main()
	{
	union INFOTECH A;
	A.M = 89;
	union INFOTECH* B = &A;
	cout<<B->M, B->N;
	return 0;
}