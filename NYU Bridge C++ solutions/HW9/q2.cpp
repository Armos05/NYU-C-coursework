#include <iostream>
#include <string>
using namespace std;

int numberOfLetters(char letter, string text);

int main() {
    const string ABC = "abcdefghijklmnopqrstuvwxyz";
    string inputOne, inputTwo, outputOne, outputTwo;
    int letterSumOne = 0, letterSumTwo = 0;

    cout << "Enter first text:" << endl;
    getline(cin, inputOne);
    cout << endl;

    for (int i = 0; i < ABC.length(); i++) {
        int letterAmount = numberOfLetters(ABC[i], inputOne);
        if (letterAmount != 0) {
            outputOne += ABC[i];
            letterSumOne += ABC[i];
            letterSumOne *= letterAmount;
        }
    }

    cout << "Enter second text:" << endl;
    getline(cin, inputTwo);
    cout << endl;

    for (int i = 0; i < ABC.length(); i++) {
        int letterAmount = numberOfLetters(ABC[i], inputTwo);
        if (letterAmount != 0) {
            outputTwo += ABC[i];
            letterSumTwo += ABC[i];
            letterSumTwo *= letterAmount;
        }
    }

    if ((outputOne == outputTwo) && (letterSumOne == letterSumTwo)) {
        cout << "True! \"" << inputOne << "\" and \"" << inputTwo << "\" are anagrams." << endl;
    } else {
        cout << "False! \"" << inputOne << "\" and \"" << inputTwo << "\" are not anagrams." << endl;
    }

    return 0;
}

int numberOfLetters(char letter, string text) {
    int letterCount = 0;
    for (int i = 0; i < text.length(); i++) {
        int textCode = text[i], letterCode = letter;
        if ((letterCode == textCode) || ((letterCode + 32) == textCode) || ((letterCode - 32) == textCode)) {
            letterCount++;
        }
    }
    return letterCount;
}
