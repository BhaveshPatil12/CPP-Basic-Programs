#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
        char strs[100], countw=0, i;
        cout<<"\n Enter String : ";
        gets(strs);
        int len=strlen(strs);
        for(i=0; i<len; i++)
        {
                if(strs[i]==' ')
                {
                        countw++;
                }
        }
        cout<<"\n Total Number of Words in String are : "<<countw+1;
        return 0;
}