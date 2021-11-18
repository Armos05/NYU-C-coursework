#include <iostream>
#include <string>
using namespace std;

int main() {
    string lastName = " ", firstName = " ", middleName = " ", middleInitial = " ";

    cout << "Please enter your first, middle and last name separated by spaces: " << endl;
    cin >> firstName >> middleName >> lastName;

    cout << lastName << ", " << firstName << " " << middleName[0] << ".";
    return 0;
}
