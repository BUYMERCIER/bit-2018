//
// main.cpp
// author: corentin mercier
//

#include <iostream>
#include <string>

using namespace std;

class myClass{
  public:
    void one(){
      printf("One\n");
    }
    void two(int a){
      printf("Two: %i\n", a);
    }
    void three(int a, int b){
      printf("Three: %i, %i\n", a, b);
    }
    void four(int a, int b, int c){
      printf("Four: %i, %i, %i\n", a, b, c);
    }
};

class myClass2{
  public:
    void one(int a=0, int b=1, int c=2){
      printf("One\n");
      printf("Two: %i\n", a);
      printf("Three: %i, %i\n", a, b);
      printf("Four: %i, %i, %i\n", a, b, c);
    }
};


int main(){
  // first question
  myClass myclass;
  myclass.one();
  myclass.two(1);
  myclass.three(1, 2);
  myclass.four(1, 2, 3);

  // second question
  myClass2 myclass2;
  myclass2.one(1, 2, 3);
  return 0;
}
