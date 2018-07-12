#include <iostream>
using namespace std;
class Base{
public:
	virtual void f1() {
		cout << "i am Base f1" << endl;
	}
	virtual void f2() {
		cout << "i am Base f2" << endl;
	}
	virtual void f3() {
		cout << "i am Base f3" << endl;
	}
};
class Derived:public Base{
public:
	/*void f1(int x) {
		cout << "i am Derived f1" << endl;
	}*/
};
int main() {
	Derived derived;
	derived.f1();
	derived.f2();
	derived.f3();

	/*Base* base = static_cast<Base*>(&derived);
	base->f1();
	base->f2();
	base->f3();
*/
	return 0;
}