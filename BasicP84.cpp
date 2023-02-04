#include<iostream>
using namespace std;
int main()
{
    int dno,dkno,r,flg;
	flg=0;
 cout << " Input a number: ";
 cin >> dkno;
 dno=dkno;
    while(dkno>0)
        {
            if(dkno % 10 == 0)
            {
            flg=1;
            break;
            }
			dkno/=10;
        }
            if(dno>0 && flg==1)
            {
            cout << " The given number is a Duck Number."<<endl;
            }
            else
            {
            cout << " The given number is not a Duck Number."<<endl;
            }
}