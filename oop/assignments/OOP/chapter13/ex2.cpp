#include<iostream>
using namespace std;
class Counted {
	int id;
	static int count;
public:
	Counted():id(count++){
		cout << "in coustruct, my id is: " << id << endl;
	}
	~Counted() {
		cout << "in destruct, my id is: " << id << endl;
	}
};
int Counted::count = 0;
int main() {
	Counted* c = new Counted();
	delete c;

	Counted* cs = new Counted[5];
	delete[] cs;

	
	return 0;
}