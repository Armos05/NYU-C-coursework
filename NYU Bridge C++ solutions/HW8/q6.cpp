#include <iostream>
#include <string>
using namespace std;

void replace(int startingIndex, int length, string &str);
bool checkNum (int index, string str, int& len);

int main() {
    string input = " ";

    cout << "Please enter a line of text:" << endl;
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        int len = 0;
        if (input[i] == 32) {
            if (checkNum(i, input, len)) {
                replace(i + 1, len, input);
            }
            i += len;
        }
    }

    cout << input;
    return 0;
}

void replace(int startingIndex, int length, string &str) {
    for (int i = startingIndex; i < (startingIndex + length); i++) {
        str[i] = 'x';
    }
}

bool checkNum (int index, string str, int& len) {
    for (int b = index + 1; b < str.length(); b++) {
        if ((str[b] >= 48) && (str[b] <= 57)) {
            len += 1;
        } else if (str[b] == 32){
            b = str.length();
        } else {
            return false;
        }
    }
    return true;
}
