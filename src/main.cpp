#include <cmath>
#include <iostream>
#include <string>
#include <vector>

#include "datatypes.cpp"
#include "foo.h"
#include "functions.cpp"
#include "inputs.cpp"
#include "namespaces.cpp"
#include "randoms.cpp"
#include "strings.cpp"
#include "type_conversions.cpp"
#include "types.cpp"

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
  // - g++ -c src/foo.cpp -o objects/foo.o
  // - g++ src/main.cpp objects/foo.o -o bin/main
  // - Generalized syntax: g++ main.cpp <header.cpp file>[] -o bin/main
  // std::cout << "x: " << foo(10) << "\n";

  // * Custom Types using "using" & typedef
  text_t s = "Satvik";
  pairlist_t pl = {{"Satvik", 10}, {"Sxtvxk", 20}};
  for (auto p : pl) {
    std::cout << p.first << " " << p.second << "\n";
  }

  return 0;
}
