#include<iostream>
using namespace std;
class Franchise
{
	public:
		void KFC()
		{
			cout<<"\nWe have the best Chicken";
		}
		void BurgerKing()
		{
			cout<<"\nWe have the best Chicken";
		}
};
int main()
{
	Franchise fran;
	fran.KFC();
	fran.BurgerKing();
	return 0;
}