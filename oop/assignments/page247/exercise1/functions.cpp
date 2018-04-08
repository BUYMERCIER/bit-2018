// functions.cpp
// author: Corentin MERCIER <corentin@mercier.link>
//

#include <iostream>
#include "header.h"

using namespace std;

int func1(float arg0, int arg1){
  cout << "func1\n" << arg0 << "\n" << arg1 << "\nint\n\n";
  return 1;
}

void func2(char arg0){
  cout << "func2\n" << arg0 << "\nvoid\n\n";
  return;
}
