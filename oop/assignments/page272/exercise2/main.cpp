// main.cpp
// author: Corentin MERCIER
//
// Create a struct declaration with a single member function, then create a 
// definition for that member function. Create an object of your new data type,
// and call the member function.

# include <iostream>

struct fruit {
  const char *color;
  const char * getInfo() { return color; }
};

int main() {
  fruit lemon = {"yellow"};
  std::cout << lemon.getInfo();
  return 1;
}
