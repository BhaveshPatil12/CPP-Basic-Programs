#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void concatString(char[], char[]);
int main()
{
        char str1[50], str2[30];
        cout<<"\n Enter First String : ";    
        gets(str1);
        cout<<"\n Enter Second String : ";
        gets(str2);
        concatString(str1, str2);
        cout<<"\n Concatenated string is : "<<str1;
        return (0);
}
void concatString(char str1[], char str2[])  
{
        int i, j;
        i = strlen(str1);      
        for (j = 0; str2[j] != '\0'; i++, j++)
        {
                str1[i] = str2[j];
        }
        str1[i] = '\0';
}