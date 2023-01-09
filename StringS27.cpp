#include<iostream>
using namespace std;
std::string test(int n) {
	std::string result=std::to_string(n);
		for(int i=result.size()-3; i>0;i-=3)
			result.insert(i,",");
		return result;		
}
int main() {
int n;
cout << "Input a number: ";
cin >> n;
   cout << "\nPrint the said integer with commas as thousands separators:\n";
   cout << test(n) << endl;
}