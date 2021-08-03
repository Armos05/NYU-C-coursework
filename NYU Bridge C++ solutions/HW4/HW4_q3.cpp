#include <iostream>
using namespace std;

int main(){
    int decimalNumber, binaryNumber;
    int count;

    cout << "Enter decimal number: ";
    cin >> decimalNumber;

    cout<<"The binary representation of "<<decimalNumber<<" is ";

    for(count = decimalNumber; count > 0 ; count/=2){
        binaryNumber = decimalNumber % 2;
        cout<<binaryNumber;
        decimalNumber /=2 ;
    }

    return 0;
}
