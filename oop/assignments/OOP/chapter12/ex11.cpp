#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

const double eps = 0.0000000001;
class Number {
	double value;
public:
	Number(double x): value(x) {};
	Number(){};
	bool JudgeZero() {
		if (fabs(value) < eps) return true;
		return false;
	}
	double GetValue() {
		return value;
	}
	Number operator +(const Number& Num) const {
		return Number(this->value + Num.value);

	}
	Number operator -(const Number& Num) const {
		return Number(this->value - Num.value);

	}
	Number operator *(const Number& Num) const {
		return Number(this->value * Num.value);

	}
	Number operator /(const Number& Num)  {
		if (JudgeZero()) {
			cout << "can's divide 0 !!" << endl;
			return Number(0.0);
		}
		return Number(this->value / Num.value);

	}
	Number& operator =(const Number& Num)  {
		this->value = Num.value;
		return *this;

	}

	  operator int() {
		int value = int(this->GetValue());
		return value;
	}

	friend ostream& operator <<(ostream&, Number&);
};
ostream& operator <<(ostream& os, Number& num) {
	os << "Number's value is: " << num.value << endl;
	return os;
}
int main() {
	Number num1(2.2);
	Number num2(1.1);
	Number num3(0.0);
	//cout << num1;
	num3 = num1 + num2 ;
	cout << num3;
	num3 = num1 - num2 ;
	cout << num3;
	num3 =  num1 * num2 ;
	cout << num3;
	num3 =  num1 / num2 ;
	cout << num3;
	num3 =  num1 / Number(0.0) ;
	cout << num3;
	num1 = num2;
	cout << num1;
	int(num1);
	return 0;
}