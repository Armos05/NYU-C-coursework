#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 20;

int minInArray(int arr[], int arrSize);
void minIndices (int arr[], int minNum);

int main() {
    int input, arr[MAX_ARRAY_SIZE], minNum = 0;
    cout << "Please enter 20 integers separated by a space:" << endl;
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        cin >> input;
        arr[i] = input;
    }

    minNum = minInArray(arr, MAX_ARRAY_SIZE);

    cout << "The minimum value is " << minNum << " and it is located in the following indices ";

    minIndices(arr, minNum);

    return 0;
}

int minInArray(int arr[], int arrSize) {
    int currentMin = 0;
    for (int i = 0; i < arrSize; i++) {
        if (i == 0) {
            currentMin = arr[i];
        } else {
            if (currentMin > arr[i]) {
                currentMin = arr[i];
            }
        }
    }
    return currentMin;
}

void minIndices (int arr[], int minNum) {
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        if (arr[i] == minNum) {
            cout << i << " ";
        }
    }
}
