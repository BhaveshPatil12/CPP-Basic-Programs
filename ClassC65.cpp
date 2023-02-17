#include<iostream>
using namespace std;
class CelsiusToFahrenheit {
  private:
    float celsius;
  public:
    void getTemperature() {
      cout << "Enter Temperature in Celsius:";
      cin >> celsius;
    }
  double CToF() {
    float fahrenheit;
    fahrenheit = ((celsius * 9) / 5) + 32;
    return fahrenheit;
  }
};

int main() 
{
  CelsiusToFahrenheit C;
  float temperature;
  C.getTemperature();
  temperature = C.CToF();
  cout << "Temperature in Fahrenheit :" << temperature;
  return 0;
}
