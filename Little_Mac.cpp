#include <iostream>

int main() {
  
  float relative_weight;
  float relative_gravity;
  int weight;
  int number;

  std::cout << "Enter your weight (kg): ";
  std::cin >> weight;
  std::cout << "Input a number of a planet do you want to fight on: \n";
  std::cout << "1. Venus   2. Mars    3. Jupiter\n";
  std::cout << "4. Saturn  5. Uranus  6. Neptune\n\n";
  std::cin >> number;

  switch(number) {

    case 1:
      relative_gravity = 0.38;
      break;

    case 2:
      relative_gravity = 0.91;
      break;

    case 3:
      relative_gravity = 0.38;
      break;

    case 4:
      relative_gravity = 2.34;
      break;

    case 5:
      relative_gravity = 1.06;
      break;

    case 6:
      relative_gravity = 0.92;
      break;

    case 7:
      relative_gravity = 1.19;
      break;

  }
  
  
  relative_weight = relative_gravity * weight;

  std::cout << "Your weight on this planet is " << relative_weight << "kg\n";
  
  
}
