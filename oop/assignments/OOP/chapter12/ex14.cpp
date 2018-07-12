#include <iostream>
#include <string>
using namespace std;
class Bird {
	string str;
	static int id;
public:
	Bird() {
		str = "Bird #" + to_string(id++);
	}
	Bird(Bird& bird) {
		str = bird.str;
		id = bird.id;
	}
	string GetName() {
		return str;
	}
	Bird& operator = (Bird& bird) {
		str = bird.str;
		id = bird.id;
		return *this;
	}

	friend ostream& operator <<(ostream&, const Bird&);
};
ostream& operator <<(ostream& os,  Bird& bird)  {
	os << bird.GetName() << endl;
	return os;
}
int Bird::id = 1;
int main() {
	for (int i = 1; i <= 10 ;i++) {
		Bird bird;
		cout << bird;
	}
	cout << "--------------------" << endl;
	Bird bird_a;
	Bird bird_b;
	cout << bird_a;
	cout << bird_b;
	bird_a = bird_b;
	cout << bird_a;
	Bird bird_c(bird_a);
	cout << bird_c;
	return 0;
}