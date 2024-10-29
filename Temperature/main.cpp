#include <iostream>
using namespace std;

  int main() {

    //std::cout << "Hello World" << std::endl;
      /*double fahrenheit, celsius;

      std::cout << "Enter temp in Fahrenheit: ";
      std::cin >> fahrenheit;

      celsius = (5.0 / 9.0) * (fahrenheit - 32);

      std::cout << fahrenheit << " F is " << celsius << " C" << std::endl; */
      auto fahrenheit = 0.0;
      std::cout << "Enter temp in Fahrenheit: ";
      std::cin >> fahrenheit;

      auto celsius = (5.0 / 9.0) * (fahrenheit - 32);
      std::cout << fahrenheit << " F is " << celsius << " C" << std::endl;

      return 0;
     }

  

