#include<iostream>
using namespace std;
int test(std::string text, std::string sstr)
{
	return text.find(sstr, text.find(sstr) + sstr.size());
}

int main()
{
	string text = "the qu qu";
	string sstr = "qu";
	cout << "String: " << text;
	cout << "\nSubstring: " << sstr;
	cout << "\nPosition of the second occurrence of the said substring: " << test(text, sstr);
	text = "theququ";
	sstr = "qu";
	cout << "\n\nString: " << text;
	cout << "\nSubstring: " << sstr;
	cout << "\nPosition of the second occurrence of the said substring: " << test(text, sstr);
	text = "thequ";
	sstr = "qu";
	cout << "\n\nString: " << text;
	cout << "\nSubstring: " << sstr;
	cout << "\nPosition of the second occurrence of the said substring: " << test(text, sstr);

}