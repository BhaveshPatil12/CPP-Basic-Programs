#include<iostream>
using namespace std;
int  getNumberOfDays(int month, int year)
{
	if( month == 2)
	{
		if((year%400==0) || (year%4==0 && year%100!=0))	
			return 29;
		else	
			return 28;
	}
	else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8
	||month == 10 || month==12)	
		return 31;
	else 		
		return 30;
} 

int main()
{
	int days=0;

	days = getNumberOfDays(2, 2016);

	cout<<endl<<"Number of Days :  "<<days;

	return 0;
}