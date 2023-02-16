#include<iostream>
#include<cmath>
using namespace std;
class Quadratic {
 private:
  float a, b, c;
 public:
  void getCoefficient() {
    cout << "Enter Coefficient of a:";
    cin >> a;

    cout << "Enter Coefficient of b:";
    cin >> b;

    cout << "Enter Coefficient of c:";
    cin >> c;
  }
  void roots() {
    float root_1, root_2, discriminant, real_part, imaginary_part;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
      root_1 = (-b + sqrt(discriminant)) / (2 * a);
      root_2 = (-b - sqrt(discriminant)) / (2 * a);
      cout << "Roots are real and different." << endl;
      cout << "Root 1 = " << root_1 << endl;
      cout << "Root 2 = " << root_2 << endl;
    }
    else if (discriminant == 0) {
      cout << "Roots are real and same." << endl;
      root_1 = -b / (2 * a);
      cout << "Root 1 = Root 2 =" << root_1 << endl;
    }
    else {
      real_part = -b / (2 * a);
      imaginary_part = sqrt(-discriminant) / (2 * a);
      cout << "Roots are complex and different." << endl;
      cout << "Root 1 = " << real_part << "+" << imaginary_part << "i" << endl;
      cout << "Root 2 = " << real_part << "-" << imaginary_part << "i" << endl;
    }
  }
};

int main() 
{
  Quadratic Q;
  Q.getCoefficient();
  Q.roots();
  return 0;
}