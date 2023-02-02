#include<iostream>
#include<iomanip>
using namespace std;
void getPrimeFactors( int li )
{
    int f = 2; string res;
    if ( li == 1 ) res = "1";
    else
    {
	while ( true )
	{
	    if( !( li % f ) ) 
	    {
		res += to_string(f);
		li /= f; if( li == 1 ) break;
		res += " x ";
	    }
	    else f++;
	}
    }
    cout << res << "\n";
}

int main( int argc, char* argv[] )
{
 int n = 23;
 cout << "Display each number as the product of its prime factors:";
 cout << "\nFrom 1 to " << n <<"-\n";
    for ( int x = 1; x <= n; x++ )
    {
	cout << right << setw( 4 ) << x << ": "; 
	getPrimeFactors( x );
    }
    cout << endl;
    return 0;
}