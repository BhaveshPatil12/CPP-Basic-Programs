#include<iostream>
using namespace std;
int main()
{
        int marks[5], i;
        float sum=0,perc;
        cout<<"\n Enter Marks of Student \n";
        cout<<"------------------------------------";
        cout<<"\n Hindi : ";
        cin>>marks[0];
        cout<<"\n English : ";
        cin>>marks[1];
        cout<<"\n Maths : ";
        cin>>marks[2];
        cout<<"\n History : ";
        cin>>marks[3];
        cout<<"\n Science : ";
        cin>>marks[4];
        for(i=0;i<5;i++)
        {
                sum=sum+marks[i];
        }
        cout<<"------------------------------------";
        cout<<"\n Total Marks of Student = "<<sum;
        perc=sum/5;
        cout<<"\n Percentage = "<<perc;
        cout<<"\n Grade   = ";
        if(perc>80)
        {
                cout<<"A";
        }
        else if(perc>60 && perc<=80)
        {
                cout<<"B";
        }
        else if(perc>40 && perc<=60)
        {
                cout<<"C";
        }
        else
        {
                cout<<"D";
        }
        return 0;
}