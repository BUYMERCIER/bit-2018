#include <iostream>
using namespace std;
class grandfather {
public:
	grandfather(){
		cout << "in construct, i am grandfather" << endl;
	}
	~grandfather() {
		cout << "in destruct, i am grandfather" << endl;
	}
};
class father: public grandfather {
public:
	father(){
		cout << "in construct, i am father" << endl;
	}
	~father() {
		cout << "in destruct, i am father" << endl;
	}
};
class son: public father {
public:
	son(){
		cout << "in construct, i am son" << endl;
	}
	~son() {
		cout << "in destruct, i am son" << endl;
	}
};
int main() {
	son s;
	return 0;
}