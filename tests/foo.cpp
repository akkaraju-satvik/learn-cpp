// - g++ tests/foo.cpp objects/foo.o -o bin/tests/foo

#include <iostream>
#include <cassert>

#include "../src/foo.h"

void test_foo() {
  assert(foo(2) == 4);
  assert(foo(3) == 9);
  assert(foo(0) == 0);
  assert(foo(-1) == 1);
}

int main() {
  test_foo();
  std::cout << "All tests passed!\n";
  return 0;
}