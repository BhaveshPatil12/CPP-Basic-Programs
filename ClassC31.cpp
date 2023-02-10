#include <iostream>
#include <string>
class Vehicle {
  public:
    std::string make;
    std::string model;
    int year;
    int speed;

    void DisplayInfo() {
      std::cout << "Make: " << make << std::endl;
      std::cout << "Model: " << model << std::endl;
      std::cout << "Year: " << year << std::endl;
      std::cout << "Speed: " << speed << " mph" << std::endl;
    }
};

int main() {
  Vehicle car;

  car.make = "Toyota";
  car.model = "Camry";
  car.year = 2020;
  car.speed = 55;

  std::cout << "Vehicle Information: " << std::endl;
  car.DisplayInfo();

  return 0;
}
