#include <iostream>
#include <string>

void stringEmptyOrNot() {
  std::string string;
  std::cout << "Enter a string: ";
  std::getline(std::cin, string);
  std::cout << "String: " << string << "\n";
  std::cout << "String empty: " << string.empty() << "\n";
}

void stringLength() {
  std::string string;
  std::cout << "Enter a string: ";
  std::getline(std::cin, string);
  std::cout << "String: " << string << "\n";
  std::cout << "String length: " << string.length() << "\n";
}

void stringFind() {
  std::string string;
  std::cout << "Enter a string: ";
  std::getline(std::cin, string);
  std::cout << "String: " << string << "\n";
  size_t index = string.find("Hello");
  std::cout << "Index of Hello: " << index << "\n";
  std::cout << "Substring: " << string.substr(index) << "\n";
}

void stringAppend() {
  std::string string;
  std::cout << "Enter a string: ";
  std::getline(std::cin, string);
  std::cout << "String: " << string << "\n";
  string.append("@gmail.com");
  std::cout << "String after appending: " << string << "\n";
}

void stringInsert() {
  std::string string, substring;
  std::cout << "Enter a string: ";
  std::getline(std::cin, string);
  std::cout << "String: " << string << "\n";
  std::cout << "Enter a substring: ";
  std::getline(std::cin, substring);
  string.insert(0, substring);
  std::cout << "String after inserting: " << string << "\n";
}

void getCharAtIndex() {
  std::string string;
  std::cout << "Enter a string: ";
  std::getline(std::cin, string);
  std::cout << "String: " << string << "\n";
  std::cout << "Enter an index: ";
  int index;
  std::cin >> index;
  std::cout << "Character at index " << index << ": " << string.at(index) << "\n";
}
