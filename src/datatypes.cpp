#include <iostream>

using namespace std;

void print_datatype_sizes() {
  // - Integer
  int integer = 10;
  int32_t integer32 = 10;
  int64_t integer64 = 10;
  cout << "Integer Auto: " << integer << endl << "Size of integer: " << sizeof(integer) << "\n\n";
  cout << "Integer 32: " << integer32 << endl << "Size of integer32: " << sizeof(integer32) << "\n\n";
  cout << "Integer 64: " << integer64 << endl << "Size of integer64: " << sizeof(integer64) << "\n\n";

  // - Float
  float floating = 10.10;
  double double_floating = 10.10;
  cout << "Floating: " << floating << endl << "Size of floating: " << sizeof(floating) << "\n\n";
  cout << "Double Floating: " << double_floating << endl << "Size of double floating: " << sizeof(double_floating) << "\n\n";
  
  // - Char
  char character = 'a';
  cout << "Character: " << character << endl << "Size of character: " << sizeof(character) << "\n\n";
  
  // - Boolean
  bool boolean = true;
  cout << "Boolean: " << boolean << endl << "Size of boolean: " << sizeof(boolean) << "\n\n";
  
  // - String
  string string = "Hello World";
  cout << "String: " << string << endl << "Size of string: " << sizeof(string) << "\n\n";
}