#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateRandomNumbers(int arrNum[], int randomNumSize);
int readInput(int userInput[]);

const int PIN[5] = {3, 5, 6, 9, 1};

int main() {
    int arrNum[5], userInput[5];
    int num = 0, inputArrSize = 0, randomNumberArraySize;
    const int MAX_ARRAY_LENGTH = 5;

    cout << "Please enter your PIN according to the following mapping:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << PIN[i];
    }
    cout << endl;
    cout << "PIN: 0 1 2 3 4 5 6 7 8 9" << endl;
    cout << "NUM: ";

    randomNumberArraySize = generateRandomNumbers(arrNum, MAX_ARRAY_LENGTH);

    num = readInput(userInput);

    for (int i = 0; i < 5; i++) {
        if (arrNum[PIN[i]] != userInput[i]) {
            i = 5;
            cout << "Your PIN is not correct" << endl;
        } else if ((i == 4) && (arrNum[PIN[i]] == userInput[i])) {
            cout << "Your PIN is correct" << endl;
        }
    }
    return 0;
}

int generateRandomNumbers(int arrNum[], int randomNumSize) {
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        arrNum[i] = (rand() % 10);
        cout << arrNum[i] << " ";
    }

    cout << endl;
    return randomNumSize;
}

int readInput(int userInput[]) {
    int input;
    cin >> input;
    int digit = 0;

    for (int i = 10000, idx = 0; i > 0; i /= 10, idx++) {
        digit = (input / i) * i;
        userInput[idx] = digit / i;
        input -= digit;
    }

    return input;
}
