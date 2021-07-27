#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int valueOfA, valueOfB, valueOfC;
    double discriminant, solutionOne, solutionTwo;

    cout<<"Please enter value of a: ";
    cin>>valueOfA;
    cout<<"Please enter value of b: ";
    cin>>valueOfB;
    cout<<"Please enter value of c: ";
    cin>>valueOfC;

    discriminant = (pow(valueOfB,2) - (4 * valueOfA * valueOfC));
    //solutionOne = (-valueOfB + sqrt(discriminant)) / (2 * valueOfA);
    //solutionTwo = (-valueOfB - sqrt(discriminant)) / (2 * valueOfA);

    if(valueOfA == 0){
        if(valueOfB == 0){
            if(valueOfC == 0){
                cout<<"This equation has Infinite number of solutions";
            } else {
                cout<<"This equation has No solution";
            }
        } else {
            if (valueOfC == 0) {

                cout<<"This equation has one real solution x1 =="<<0<<endl;
                }
            else {
                solutionOne = (-1*valueOfC) / (valueOfB);
                cout<<"This equation has one real solution x1 =="<<solutionOne<<endl;
            }
        }
    } else {
        if(discriminant > 0) {
            solutionOne = (-valueOfB + sqrt(discriminant)) / (2 * valueOfA);
            solutionTwo = (-valueOfB - sqrt(discriminant)) / (2 * valueOfA);
            cout<<"This equation has two real solutions x1 = "<<solutionOne<<" and x2="<<solutionTwo;
        } else if (discriminant == 0){
            solutionOne = (-valueOfB + sqrt(discriminant)) / (2 * valueOfA);
            cout<<"This equation has one real solution x = "<<solutionOne;
        } else{
            cout<<"This equation has No Real solution";
        }
    }
    return 0;
}
