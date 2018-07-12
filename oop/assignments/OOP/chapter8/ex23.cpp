// ex23.cpp

#include <iostream>
using namespace std;

class A{
	int x;
	public:
		A(int xx): x(xx) {};
		int f1() const {
			//x++;
			return x;
		}
		int f2() {
			x++;
			return x;
		}
};

int main(){
	const A const_a(1);
	A noconst_a(1);
	cout << "x is: " << const_a.f1() << endl;
	cout << "x is: " << const_a.f2() << endl;
	cout << "x is: " << noconst_a.f1() << endl;
	cout << "x is: " << noconst_a.f2() << endl;
	return 0;
}