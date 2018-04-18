//
// main.cpp
// author: corentin mercier <corentin@mercier.link>
//

// Create a class with two inline member functions, such that the first function that’s defined in the class calls the second function, without the need for a forward declaration. Write a main that creates an object of the class and calls the first function.

#include <iostream>

using namespace std;

class myClass {
  public:
    inline void alpha(){ printf("alpha\n"); }
    inline void beta(){ alpha(); }
};

int main() {
  myClass myclass;
  myclass.alpha();
  return 0;
}
