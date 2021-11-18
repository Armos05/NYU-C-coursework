#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Please enter a positive integer:" << endl;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int column = 1; column <= n; column++) {
            int product = column * row;
            cout << product << "\t";
        }
        cout << endl;
    }

    return 0;
}
