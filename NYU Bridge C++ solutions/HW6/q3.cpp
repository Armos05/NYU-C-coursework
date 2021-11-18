#include <iostream>
#include <cmath>
using namespace std;

double eApprox(int n);

int main() {
    int number = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

//    cout.precision(30);
//    for (int n = 1; n <= 15; n++) {
//        cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl;
//    }

    cout << eApprox(number);

    return 0;
}

double eApprox(int n) {
    double e = 1.0, factorial = 1.0;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        e += 1.0 / factorial;
    }
    return e;
}
