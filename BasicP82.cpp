# include<iostream>
# include<math.h>
using namespace std;
int main()
{
    int n=0;
	double result;
cout << " The first 10 Fermat numbers are: "<<endl;
while (n <= 10) 
		{
            result= pow(2, pow(2, n)) + 1;
            n++;
            cout << result << endl;
        }
}