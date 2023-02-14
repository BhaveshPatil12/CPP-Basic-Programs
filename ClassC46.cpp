#include<iostream>
using namespace std;
class Vowel {
 private:
  char character;

 public:
  void vowel(char c) {
    character = c;

    if ((character >= 'a' && character <= 'z') ||
        (character >= 'A' && character <= 'Z')) {
      
      if ((character == 'a') || (character == 'A') || (character == 'e') ||
          (character == 'E') || (character == 'i') || (character == 'I') ||
          (character == 'o') || (character == 'O') || (character == 'u') ||
          (character == 'U')) {
        cout << character << " is a vowel." << endl;
      }
      else {
        cout << character << " is a consonant." << endl;
      }
    }
    else {
      cout << character << " is not a character." << endl;
    }
  }
};

int main() 
{
  Vowel V;
  char character;
  cout << "Enter Character: ";
  cin >> character;
  V.vowel(character);
  return 0;
}