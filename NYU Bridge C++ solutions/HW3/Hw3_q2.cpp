#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, status;
    int graduationYear, currentYear;
    int difference;

    cout<<"Please enter your name: ";
    cin>>name;
    cout<<"Please enter your graduation year: ";
    cin>>graduationYear;
    cout<<"Please enter current year: ";
    cin>>currentYear;

    difference = graduationYear - currentYear;

    if(difference > 4){
        status = "Not in college yet";
    } else if(difference == 4) {
        status = "Freshman";
    } else if(difference == 3) {
        status = "Sophomore";
    } else if(difference == 2) {
        status = "Junior";
    } else if(difference == 1) {
        status = "Senior";
    } else {
        status = "Graduated";
    }

    cout<<name<<", you are a "<<status<<endl;

    return 0;
}
