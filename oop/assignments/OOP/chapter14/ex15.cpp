#include <iostream>
using namespace std;
class A{
public:
	static void f1() {
		cout << "i am f1 of father" << endl;
	}
	static void f2() {
		cout << "i am f2 of father" << endl;
	}
};
class B: public A{
public:
	static void f1(int x) {
		cout << "i am f1 of son" << endl;
	}
};
int main() {
	B b;
	b.f1(1);
	b.f2();
	//b.f1();
	return 0;
}