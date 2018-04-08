// main.cpp
// author: Corentin MERCIER <corentin@mercier.link> 
//
// Define a function that takes a doubleargument and returns an int.
// Create and initialize a pointer to this function, and call the function 
// through your pointer.

#include <stdio.h>

int func(double arg)
{
  return 0;
}


int main()
{
  int (*pointer)(double);
  pointer = &func;

  (*pointer)(2);

  return 0;
}
