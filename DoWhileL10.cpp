#include <iostream>
#include <string>
using namespace::std;
int main ()
{
  string password = "letmein";
  string loggedPW;
  do {
    cout << "Enter your password: ";
    cin >> loggedPW;
  } while (loggedPW != password);
  cout << "Password accepted!" << endl;
  return 0;
}