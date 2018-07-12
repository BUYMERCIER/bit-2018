// ex14.cpp

#include <iostream>
using namespace std;
class StackImp {
	int a[10];
	int size = 10;
	int now_size = 0;
	int top = -1;
public:
	void push(int x) {
		if (top < size) {
			a[++top] = x;
		}
		else {
			cout << "error push" << endl;
		}
	}
	int pop() {
		if (top >= 0) {
			return a[top--];
		}
		else {
			cout << "error pop" << endl;
			return -1;
		}
	}
	int getSize() {
		return top + 1;
	}
};



class StackOfInt {
	class StackImp imp;

public:
	StackOfInt(StackImp imp) {
		this->imp = imp;
	}
	void push(int x) {
		imp.push(x);
	}
	int pop() {
		return imp.pop();
	}
	int size() {
		return imp.getSize();
	}

};

int main() {
	StackImp imp;
	StackOfInt stack(imp);
	stack.pop();
	for (int i = 1; i <=11; i++) {
		stack.push(i);
	}
	cout << "size: " << stack.size() << endl;
	for (int i = 1; i <=12; i++) {
		cout << stack.pop() << endl;
	}
	return 0;
}

