#include <iostream>
using namespace std;
class A;




class B {
public:
	void print(A*);
};

class C {
public:
	void print(A*);
};


class A {
private: 
	int value;
public:
	void setValue(int x) {value = x;}
	friend class B;
	friend void C::print(A*);
};


void B::print(A* a) {
		cout << "A's value is " << a->value << endl;
} 
void C::print(A* a) {
		cout << "A's value is " << a->value << endl;
} 

int main() {
	A* a = new A;
	a->setValue(10);
	B* b = new B;
	C* c = new C;
	b->print(a);
	c->print(a);
	return 0;
}