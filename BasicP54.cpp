#include<iostream>
using namespace std;
int DigiCount(int n)
{
    int ctr_digi = 0;
    int tmpx = n;
    while (tmpx)
    {
        tmpx = tmpx/10;
 
        ctr_digi++;
    }
    return ctr_digi;
}
bool chkDisarum(int n)
{
    int ctr_digi = DigiCount(n);
    int s = 0; 
    int x = n;
    int pr;
    while (x)
    {
        pr = x % 10;
        s = s + (pr, ctr_digi--);
        x = x/10;
    }
    return (s == n);
}
int main()
{

int dino;
 cout << " Input a number: ";
 cin >> dino;	
    if( chkDisarum(dino))
        cout << " The given number is a Disarium Number."<<endl;
    else
        cout << " The given number is not a Disarium Number."<<endl;
    return 0;
}