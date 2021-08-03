#include <iostream>
#include <string>
using namespace std;

int main() {
    int input = 0 , number = 0, m = 0, d = 0, c = 0, l = 0, x = 0, v = 0, i = 0;
    string roman;

    cout << "Enter decimal number:" << endl;
    cin >> input;

    number = input;
    while (number > 0) {
        if (number > 999) {
            m = number / 1000;
            number %= 1000;
        } else if (number > 499) {
            d = number / 500;
            number %= 500;
        } else if (number > 99) {
            c = number / 100;
            number %= 100;
        } else if (number > 49) {
            l = number / 50;
            number %= 50;
        } else if (number > 9) {
            x = number / 10;
            number %= 10;
        } else if (number > 4) {
            v = number / 5;
            number %= 5;
        } else {
            i = number;
            number = 0;
        }
    }

    while (m > 0) {
       roman += "M";
       m--;
    }
    while (d > 0) {
       roman += "D";
       d--;
    }
    while (c > 0) {
       roman += "C";
       c--;
    }
    while (l > 0) {
       roman += "L";
       l--;
    }
    while (x > 0) {
       roman += "X";
       x--;
    }
    while (v > 0) {
       roman += "V";
       v--;
    }
    while (i > 0) {
       roman += "I";
       i--;
    }

    if (input == 0) {
        cout << input << " is 0" << endl;
    } else {
        cout << input << " is " << roman << endl;
    }

    return 0;
}
