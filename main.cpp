#include <iostream>
#include <cmath>
#include <string>

#include "foo.h"

#include "datatypes.cpp"
#include "functions.cpp"
#include "namespaces.cpp"
#include "type_conversions.cpp"
#include "inputs.cpp"
#include "strings.cpp"
#include "randoms.cpp"

const string SECRET = "secret";

int main() {
  // * Hello World
  // std::cout << "Hello World!\n\n";

  // * Datatypes
  // print_datatype_sizes();

  // * Functions
  // functions_implementation();
  
  // * Using math.h 
  // std::cout << "Pi is: " << M_PI << "\n";

  // * CONSTANTS
  // const string SECRET = "secret";
  // ~ SECRET = "not_secret";
  // std::cout << "Secret (CONSTANT): " << SECRET << "\n\n";

  // * Namespaces
  // first::x = 10;
  // std::cout << "first::x: " << first::x << endl;
  // std::cout << "second::x: " << second::x << endl;

  // * Type Conversions
  // implicit_conversion();
  // explicit_conversion();

  // * Input
  // std::string word = inputSingleWord();
  // std::cout << "Word: " << word << "\n\n";
  // std::string sentence = inputMultipleWords();
  // std::cout << "Sentence: " << sentence << "\n\n";

  // * Strings
  // stringEmptyOrNot();
  // stringLength();
  // stringFind();
  // stringAppend();
  // stringInsert();
  // getCharAtIndex();

  // * Randoms
  // randomInt();

  // * Custom Header Files
  // - g++ -c foo.cpp -o objects/foo.o
  // - g++ main.cpp objects/foo.o -o bin/main
  // - Generalized syntax: g++ main.cpp <header.cpp file>[] -o bin/main
  std::cout << "x: " << foo(10) << "\n";

  return 0;

}
