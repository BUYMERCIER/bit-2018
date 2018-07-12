// ex13.cpp
// Create a function that takes an argument by value as a const; then try to
// change that argument in the function body .

#include <iostream>
using namespace std;

void test(const int x){
	x = 3;
}

int main(){
	int t = 10;
	test(t);
	return 0;
}