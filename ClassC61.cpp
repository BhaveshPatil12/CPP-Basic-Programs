#include<iostream>
using namespace std;
class String {
  private:
    char str[30];
  public:
    void getString() {
      cout << "Enter String: ";
      cin >> str;
    }
  string sentanceCase() {
    char temp_str[30];
    int index;
    for (index = 0; str[index]; index++) {
      if (index == 0) {
        if (str[index] >= 'a' && str[index] <= 'z') {
          temp_str[index] = str[index] - 32;
        }
        else {
          temp_str[index] = str[index];
        }
      }
      else if ((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z')) {
        if (str[index] >= 'A' && str[index] <= 'Z') {
          temp_str[index] = str[index] + 32;
        }
        else {
          temp_str[index] = str[index];
        }
      }
      else {
        temp_str[index] = str[index];
      }
    }
    temp_str[index] = 0;
    return temp_str;
  }
};

int main() 
{
  String S;
  string s;
  S.getString();
  s = S.sentanceCase();
  cout << "Sentance cased String: " << s;
  return 0;
}
