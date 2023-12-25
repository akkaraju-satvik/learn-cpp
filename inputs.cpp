#include <iostream>

std::string inputSingleWord() {
  std::string input;
  std::cout << "Enter a word: ";
  std::cin >> input;
  std::cin.ignore();
  return input;
}

std::string inputMultipleWords() {
  std::string inputX;
  std::cout << "Enter a sentence: ";
  std::getline(std::cin, inputX);
  return inputX;
}
