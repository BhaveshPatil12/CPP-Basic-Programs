#include<iostream>
#include<string>
#include<vector>
union INFOTECH
{
	std::string ABC;
	std::vector<int> XYZ;
	~INFOTECH() {}
	};
	int main()
	{
	INFOTECH M = {"Heyoo! Welcome to INFOTECH"};
	std::cout << "Buddy = " << M.ABC << '\n';
	M.ABC.~basic_string();
	new (&M.XYZ) std::vector<int>;
	M.XYZ.push_back(20);
	std::cout << M.XYZ.size() << '\n';
	M.XYZ.~vector();
}