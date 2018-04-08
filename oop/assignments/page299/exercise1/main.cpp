// main.cpp
// author: Corentin MERCIER
//
// Create a class with public, private, and protecteddata members and function 
// members. Create an object of this class and see what kind of compiler 
// messages you get when you try to access all the class members.

#include <iostream>

class Test {
  public:
    int pub = 1;
  private:
    int priv = 2;
  protected:
    int prot = 3;
};

int main(){
  Test test = Test();
  printf("%d\n", test.pub);
  printf("%d\n", test.priv);
  printf("%d\n", test.prot);
  return 0;
}
