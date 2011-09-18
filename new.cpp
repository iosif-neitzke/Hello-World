#include <memory>
#include <iostream>
#include <cstdlib>
// #include <array> -std=c++0x

struct Object {
  ~Object() {
    std::cout << "destructing" << std::endl;
  }
};

int main() {
  std::auto_ptr<Object> p( new Object() ); // calls ~Object() at scope end
  Object* o = new Object(); // does not call ~Object() at scope end

  return EXIT_SUCCESS;
}
