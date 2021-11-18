#include <iostream>
using namespace std;

int fib(int n);

int main() {
    int num = 0;
    cout << "Please enter a positive integer: ";
    cin >> num;

    cout << fib(num);

    return 0;
}

int fib(int n) {
    int nth_fibonacci = 0, fib_1 = 1, fib_2 = 1;

    for (int i = 0; i < n; i++) {
        if (i < 2) {
            nth_fibonacci = 1;
        } else {
            nth_fibonacci = fib_1 + fib_2;
            fib_1 = fib_2;
            fib_2 = nth_fibonacci;
        }
    }

    return nth_fibonacci;
}
