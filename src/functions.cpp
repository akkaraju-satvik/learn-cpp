#include <iostream>

void print_square(double number);
double square(double number);


void functions_implementation() {
  print_square(1.23);
  print_square(2.34);
}

void print_square(double number) {
  std::cout << "The square of " << number << " is " << square(number) << "\n";
}

double square(double number) {
  return number * number;
}