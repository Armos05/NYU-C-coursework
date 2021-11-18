#include <iostream>
#include <cmath>
using namespace std;

void analyzeDivisors (int num, int& outCountDivs, int& outSumDivs);
bool isPerfect (int num);

int main() {
    int m;
    cout << "Please enter an integer >= 2: ";
    cin >> m;
    cout << endl;

    cout << "All the perfect numbers between " << 2 << " to " << m << " are:" << endl;
    for (int i = 2; i <= m; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << endl;

    cout << "All the amicable number pairs between " << 2 << " to " << m << " are:" << endl;
    for (int b = m; b > 0; b--) {
        int countDiv = 0, sumDiv = 0, duplicateTracker;
        analyzeDivisors(b, countDiv, sumDiv);

        int tempCountDiv = 0, tempSumDiv = 0;
        analyzeDivisors(sumDiv, tempCountDiv, tempSumDiv);
        if ((b == tempSumDiv) && (b != sumDiv)) {
            if (b != duplicateTracker) {
                cout << "(" << b << " " << sumDiv << ")" << endl;
                duplicateTracker = sumDiv;
            }
        }
    }

    return 0;
}

void analyzeDivisors (int num, int& outCountDivs, int& outSumDivs) {
    for (int i = 1; i < sqrt(num); i++) {
        if (num % i == 0) {
            outCountDivs++;
            outSumDivs += i;
        }
    }

    for (int b = ceil(sqrt(num)); b <= num; b++) {
        if (num % b == 0) {
            outCountDivs++;
            outSumDivs += b;
        }
    }
    outSumDivs -= num;
}

bool isPerfect (int num) {
    int outCountDivs = 0, outSumDivs = 0;
    analyzeDivisors(num, outCountDivs, outSumDivs);
    if (outSumDivs == num) {
        return true;
    }
    return false;
}
