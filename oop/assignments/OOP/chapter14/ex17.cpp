// ex17.cpp

#include <iostream>
using namespace std;

class Base{};
class Private:private Base{};
class Protect:protected Base{};

int main(){
	Private pri;
	Protect pro;
	Base* b = static_cast<Base*>(&pri);
	b = static_cast<Base*>(&pro);
	return 0;
}