// ex5.cpp
// Repeat Exercise 4 but move the functions so they are member functions of the
// struct, and test again.

#include <iostream>
using namespace std;

struct test{
	int x;
	void func1(struct test* n, int x){
		n->x = x;
	}

	void func2(struct test* n){
		cout << n->x;
	}
};

int main(){
	struct test n;
	n.func1(&n, 3);
	n.func2(&n);
	return 0;
}