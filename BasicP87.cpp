#include<iostream>
using namespace std;
void getPrevDate(int *day,int *month, int *year)
{
	if(*day==1)
	{
		if(*month==4|| *month==6|| *month==9|| *month==11)
		{
			*day=31;
			*month = *month -1;	
		}
		else if(*month==3)
		{
			if(*year%4==0)	
				*day=29;
			else
				*day=28;
			
			*month = *month -1;
		}
		else if(*month==1)
		{
			*day=31;
			*month = 12;
			*year = *year - 1 ;
		}
		else if(*month==2)
		{
			*day=31;
			*month = *month -1;
		}
		else
		{
			*day=30;
			*month = *month -1;
		}
	}
	else
	{
		*day = *day-1;
	}	

}

int main()
{
	int dd=1,mm=1,yy=2017;
	cout<<endl<<"Date : "<<dd<<"/"<<mm<<"/"<<yy;
	getPrevDate(&dd,&mm, &yy);
	cout<<endl<<"Previous date : "<<dd<<"/"<<mm<<"/"<<yy;	
	return 0;    
}