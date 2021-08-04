#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int decimalNumber, binaryNumber, i(0);
    int count;
    long num(0);

    cout << "Enter decimal number: ";
    cin >> decimalNumber;

    cout<<"The binary representation of "<<decimalNumber<<" is ";

    for(count = decimalNumber; count > 0 ; count/=2){
        binaryNumber = decimalNumber % 2;

        num = num + binaryNumber*static_cast<int>(pow(10,i));
        decimalNumber /=2 ;

        if (decimalNumber == 1){

            num = num + binaryNumber*static_cast<int>(pow(10,i));
        }
     i = i + 1;
    }

    cout<<"\n"<<num<<endl;
    return 0;
}
