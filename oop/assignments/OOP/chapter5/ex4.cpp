#include <iostream>
using namespace std;
class B;
class A {
private:
	int value;
public:
	void functionA(B*);
	void setValue(int x) {
		value = x;
	}
	void prinValue() {
		cout << value << endl;
	}
};


class B {
private:
	int value;
public:
	void functionB(A* ); 
	void setValue(int x) {
		value = x;
	}
	void prinValue() {
		cout << value << endl;
	}
};

void A::functionA(B* b) {
		cout << "functionA" << endl;
		b->setValue(2);
		b->prinValue();
}
void B::functionB(A* a) {
	cout << "functionB" << endl;
	a->setValue(1);
	a->prinValue();
}

int main() {
	A* a = new A;
	B* b = new B;
	a->functionA(b);
	b->functionB(a);
	return 0;
}