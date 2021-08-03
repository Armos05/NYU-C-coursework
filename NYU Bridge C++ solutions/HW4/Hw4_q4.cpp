#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int numberOfSequence;
    int count;
    double lengthOfSequence, multiply, geometricMean;
    bool endOfInput;

    //section a
    cout<<"a) read the length of the sequence"<<endl;
    cout << "Please enter a the length of the sequecne: ";
    cin >> lengthOfSequence;

    cout<<"Please enter your number: "<<endl;
    multiply = 1;
    for(count = 1; count <= lengthOfSequence; count += 1){
        cin>> numberOfSequence;
        multiply *= numberOfSequence;
    }
    geometricMean = pow(multiply, (1 / lengthOfSequence));

    cout<<"The geometric mean is: "<<geometricMean<<endl;
    cout<<endl;

    //section b
    cout<<" b) Keep reading the numbers until -1"<<endl;
    cout << "Please enter a non-empty sequence of positive integer,";
    cout << " each one in a seperate line.End your"<<endl;
    cout << " sequence by typing -1: "<<endl;

    multiply = 1;
    numberOfSequence = 0;

    endOfInput = false;
    while (endOfInput == false){
        cin>> numberOfSequence;
        if(numberOfSequence == -1){
            endOfInput = true;
        } else {
            multiply *= numberOfSequence;
            numberOfSequence++;
        }

    }
    geometricMean = pow(multiply, (1 / lengthOfSequence));

    cout<<"The geometric mean is: "<<geometricMean<<endl;
    return 0;
}
