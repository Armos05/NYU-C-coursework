#include <iostream>
#include <string>
using namespace std;

int numberOfWords(string text);
int numberOfLetters(char letter, string text);

int main() {
    const string ABC = "abcdefghijklmnopqrstuvwxyz";
    string input;

    cout << "Please enter a line of text:" << endl;
    getline(cin, input);

    cout << numberOfWords(input) << "\twords" << endl;

    for (int i = 0; i < ABC.length(); i++) {
        int letter = numberOfLetters(ABC[i], input);
        if (letter != 0) {
            cout << letter << "\t" << ABC[i] << endl;
        }
    }
    return 0;
}

int numberOfWords(string text) {
    int wordCount = 1;
    for (int i = 0; i < text.length(); i++) {
        if (((text[i] == 32) || (text[i] == 44) || (text[i] == 46)) && ((i + 1) < text.length())) {
            if (((text[i + 1] >= 65) && (text[i + 1] <= 90)) || ((text[i + 1] >= 97) && (text[i + 1] <= 122))) {
                wordCount++;
            }
        }
    }
    return wordCount;
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
