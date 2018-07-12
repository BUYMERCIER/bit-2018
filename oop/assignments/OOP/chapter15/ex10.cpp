#include <iostream>
using namespace std;

class Rodent {
public:
	virtual void jump() = 0;
	virtual ~Rodent(){};
};
class Mouse:public Rodent{
public:
	void jump() {
		cout << "Mouse jump" << endl;
	}
	~Mouse() {
		cout << "Mouse quit" << endl;
	}
};
class Gerbil:public Rodent{
public:
	void jump() {
		cout << "Gerbil jump" << endl;
	}
	~Gerbil() {
		cout << "Gerbil quit" << endl;
	}
};
class Hamster:public Rodent{
public:
	void jump() {
		cout << "Hamster jump" << endl;
	}
	~Hamster() {
		cout << "Hamster quit" << endl;
	}
};
int main() {
	Rodent* rodent[3];
	rodent[0] = new Mouse();
	rodent[1] = new Gerbil();
	rodent[2] = new Hamster();
	for (int i = 0; i < 3; i++) {
		rodent[i]->jump();
	}
	for (int i = 0; i < 3; i++) {
		delete rodent[i];
	} 
	return 0;
}