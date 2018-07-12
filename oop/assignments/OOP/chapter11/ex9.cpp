// ex9.cpp

#include <iostream>
using namespace std;

class A {
	int x;
	public:
		void f1() const {
			cout << " i am const member function" << endl;
		}
		void f2() {
			cout << " i am normal member function" << endl;
		}
};
void func1(A a) {
	cout << "-------- in func1 --------" << endl;
	a.f1();
	a.f2();
}

void func2(A& a) {
	cout << "-------- in func2 --------" << endl;
	a.f1();
	a.f2();
}

void func3(const A& a) {
	cout << "-------- in func3 --------" << endl;
	a.f1();
}
int main(){
	A a;
	func1(a);
	func2(a);
	func3(a);
	return 0;
}