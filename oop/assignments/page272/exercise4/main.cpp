// main.cpp
// author: Corentin MERCIER
//
// Create a struct with a single int data member, and two global functions, 
// each of which takes a pointer to that struct. The first function has a 
// second int argument and sets the struct’s int to the argument value, the 
// second displays the int from the struct. Test the functions.

#include <iostream>

struct myStruct {
  int x;
};

void func1(myStruct *a, int b) {
  a->x = b;
}

void func2(myStruct *a) {
  printf("%d", a->x);
}

int main(){
  myStruct test = {10};
  func1(test, 69);
  func2(test);
  return 0;
}
