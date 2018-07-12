#include <iostream>
#include <cassert>

int fib(bool reset = false) {
    static int first = 0;
    static int second = 1;
    static int count = 0;

    if (reset) {
        first = count = 0;
        second = 1;
    }

    int result;
    if (count == 0) {
        assert(first == 0 && second == 1);
        result = 0;
    }
    else if (count == 1) {
        assert(first == 0 && second == 1);
        result = 1;
    }
    else {
        result = first + second;
        first = second;
        second = result;
    }
    ++count;

    return result;
}

int main() {
    using namespace std;

    // Print first 10
    for (int i = 0; i < 10; ++i)
        cout << fib() << ' ';
    cout << endl;

    // print first 5
    cout << fib(true) << ' ';
    for (int j = 1; j < 5; ++j)
        cout << fib() << ' ';
    cout << endl;
}

/* Output:
0 1 1 2 3 5 8 13 21 34
0 1 1 2 3
*/
