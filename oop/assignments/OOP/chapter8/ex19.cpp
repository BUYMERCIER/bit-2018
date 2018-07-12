// ex19.cpp
// Create a class containing both a const and a non-const float. Initialize
// these using the constructor initializer list.

#include <iostream>
using namespace std;

class myClass{
private:
	float x;
	const float y;
public:
	myClass(float xx, const float yy): x(xx), y(yy) {};
	void print() {
		cout << "x is " << x << ", y is " << y << endl;
	}

};

int main(){
	myClass test(1.1, 2.2);
	test.print();
	return 0;
}