// main.cpp
//author: Corentin MERCIER <corentin@mercier.link>
//

#include <iostream>

using namespace std;

int isPrime(int number){
  int tmp = 0;

  for(int i = 2; i <= number; i++){
    for(int j = i/2; j > 1; j--){
      if(i%j == 0){
        tmp = 1;
        break;
      }
    }
    if(tmp == 0)
      cout << i << " is prime\n";
    tmp = 0;
  }
  //end for
}

int main(){
  isPrime(30);
  return 0;
}
