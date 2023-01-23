#include<iostream>
using namespace std;
int main()
{
int num1,num2;
    cout << "\n\n Compare the first number with second number numbers:\n";
	cout << "---------------------------------------------------------\n";
	cout << " Input the first integer: ";
	cin>> num1;
	cout << " Input the second integer: ";
	cin>> num2;	
	
		if ( num1 == num2 )           
            cout<< num1<< " == " << num2 <<endl;  
        if ( num1 != num2 )          
            cout<< num1<<" != " << num2<<endl; 
        if ( num1 < num2 )          
            cout<< num1<< " < "<<num2<<endl; 
        if ( num1 > num2 )          
            cout<< num1<<" > "<< num2 <<endl; 
        if ( num1 <= num2 )          
            cout<<num1<<" <= "<< num2<<endl; 
        if ( num1 >= num2 )          
            cout<<num1<< " >= "<< num2<<endl; 	
}