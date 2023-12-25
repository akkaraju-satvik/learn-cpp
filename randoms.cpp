#include <iostream>
#include <ctime>

void randomInt() {
  srand(time(NULL));

  int random = (rand() % 6) + 1 ;
  std::cout << "Random: " << random << "\n";
}