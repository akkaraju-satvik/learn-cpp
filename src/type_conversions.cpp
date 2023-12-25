#include <iostream>

void implicit_conversion() {
  int integer = 10.100;
  std::cout << "Integer: " << integer << "\n";

  char character = 65;
  std::cout << "Character: " << character << "\n";
}

void explicit_conversion() {
  int integer = (int)10.100;
  std::cout << "Integer: " << integer << "\n";

  char character = (char)65;
  std::cout << "Character: " << character << "\n";
}