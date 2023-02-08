#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class date
{
    private:
        int day, month, year;
    public:
        date(){}
        friend void operator>>(istream &in, date &d);   //Overloading >> operator
        friend void operator<<(ostream &out, date &d)  //Overloading << operator
        {
                out<<"\n Date : ";
                out<<d.day;
                out<<"/";
                out<<d.month;
                out<<"/";
                out<<d.year;
        }
        ~ date(){}
};
void operator>>(istream &in, date &d)
{
        cout<<"\n Enter Day : ";
        in>>d.day;
        cout<<"\n Enter Month : ";
        in>>d.month;
        cout<<"\n Enter Year : ";
        cin>>d.year;
        cout<<"\n ------------------";
        switch(d.month)
        {
                case 1:    
                case 3:    
                case 5:    
                case 7:    
                case 8:   
                case 10:  
                case 12:   
                        if(d.day>31)
                        {
                                cout<<"\n Invalid Days ";
                                exit(0);
                        }
                        break;
                case 4:   
                case 6:   
                case 9:   
                case 11:  
                        if(d.day>30)
                        {
                                cout<<"\n Invalid Days ";
                                exit(0);
                        }
                        break;
                case 2:
                        if((d.year%100!=0&&d.year%4==0)||(d.year%400==0))   
                        {
                                if(d.day>29)
                                {
                                        cout<<"\n Invalid Days ";
                                        exit(0);
                                }
                        }
                        else
                        {
                                if(d.day>28)
                                {
                                        cout<<"\n Invalid Days ";
                                        exit(0);
                                }
                        }
                        break;
        }
}
int main()
{
        date d;
        cout<<"\n Enter Date \n";
        cin>>d;
        cout<<d;
        return 0;
}