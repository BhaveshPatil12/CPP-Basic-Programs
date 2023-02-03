#include<iostream>
#include<string>
using namespace std;
string Insert_dash(string num_str) {
	string result_str = num_str;
	for (int x = 0; x < num_str.length() - 1; x++)
	{
		if ((num_str[x] == '1' || num_str[x] == '3' || num_str[x] == '5' || num_str[x] == '7' || num_str[x] == '9') && (num_str[x + 1] == '1' || num_str[x + 1] == '3' || num_str[x + 1] == '5' || num_str[x + 1] == '7' || num_str[x + 1] == '9'))
		{
			result_str.insert(x+1,"-");
			num_str = result_str;
		}
	}

	return result_str;
}

int main() {

	cout << "Original number-123456789 : Result-> "<< Insert_dash("123456789") << endl;
	cout << "\nOriginal number-1345789 : Result-> "<< Insert_dash("1345789") << endl;
	cout << "\nOriginal number-1345789 : Result-> "<< Insert_dash("34635323928477") << endl;
	return 0;
}