#include <memory>
#include <iostream>
#include <cstdlib>

int main() {
  std::auto_ptr<int> p( new int(42) );
  std::cout << *p << std::endl;
  return EXIT_SUCCESS;
}
