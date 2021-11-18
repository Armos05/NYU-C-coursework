#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int random_num, guess;

    srand(time(0));
    random_num = (rand() % 100) + 1;

    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
    for (int guess_count = 5, lower = 1, upper = 100; guess_count > 0; guess_count--) {
        cout << "Range: [" << lower << ", " << upper << "], Number of guesses left: " << guess_count << endl;
        cout << "Your guess: ";
        cin >> guess;

        if (guess < random_num) {
            if (guess > lower) {
                lower = guess + 1;
            }
            cout << "Wrong! My number is bigger." << endl;
            cout << endl;
        } else if (guess > random_num) {
            if (guess < upper) {
                upper = guess - 1;
            }
            cout << "Wrong! My number is smaller." << endl;
            cout << endl;
        } else {
            cout << "Congrats! You guessed my number in " << (5 - guess_count) + 1 << " guesses." << endl;
            guess_count = 0;
        }

        if (guess_count == 1) {
            cout << "Out of guesses! My number is " << random_num << "." << endl;
        }
    }
    return 0;
}
