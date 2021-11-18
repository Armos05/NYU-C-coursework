#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main() {
    int n_triangle = 0;
    char symbol = ' ';

    cout << "Enter number of triangles: ";
    cin >> n_triangle;

    cout << "Enter shape: ";
    cin >> symbol;

    printPineTree(n_triangle, symbol);

    return 0;
}

void printShiftedTriangle(int n, int m, char symbol) {
    for (int row = 0; row < n; row++) {
        for (int margin = 0; margin < m; margin++) {
            cout << " ";
        }
        int offset_count = n - (row + 1);
        for (int offset = offset_count; offset > 0; offset--) {
            cout << " ";
        }
        for (int column = 0; column <= (row * 2); column++) {
            cout << symbol;
        }
        cout << endl;
    }
}

void printPineTree(int n, char symbol) {
    for (int i = 1; i <= n; i++) {
        int number = i + 1;
        int margin = n - i;
        printShiftedTriangle(number, margin, symbol);
    }
}

