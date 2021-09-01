#include <iostream>
#include <vector>

int main() {

  std::vector<int> list = {3, 5, 6, 1, 3, 9, 7, 3, 6};

  double even_sum = 0;
  double odd_product = 1;

  for (int i = 0; i < list.size(); i++) {
    if (list[i] % 2 == 0) {
      even_sum = even_sum + list[i];
    }
    else {
      odd_product = odd_product * list[i];
    }
  }

  std::cout << "Sum of even numbers is " << even_sum << "\n";
  std::cout << "Product of odd numbers is " << odd_product << "\n";

}
