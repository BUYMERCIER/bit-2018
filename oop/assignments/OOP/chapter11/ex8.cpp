#include <iostream>

void nextc(char c) {
    static char letter = 'a';
    c = letter++;
}

int main() {
    using namespace std;
    char c = 'z';
    cout << "c == " << c << endl;
    nextc(c);
    cout << "c == " << c << endl;
    nextc(c);
    cout << "c == " << c << endl;
}

/* Output:
c == z
c == a
c == b
*/
