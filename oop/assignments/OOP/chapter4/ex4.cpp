// ex4.cpp
// Create a struct with a single int data member, and two global functions, each
// of which takes a pointer to that struct. The first function has a second int
// argument and sets the struct’s int to the argument value, the second displays
// the int from the struct. Test the functions.

#include <iostream>
using namespace std;

struct test{
	int x;
};

void func1(struct test* n, int x){
	n->x = x;
}

void func2(struct test* n){
	cout << n->x;
}

int main(){
	struct test n;
	func1(&n, 3);
	func2(&n);
    return 0;
}