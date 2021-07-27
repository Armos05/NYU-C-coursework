#include <iostream>
#include <string>
using namespace std;

const double POUND_TO_KILOGRAM = 0.453592;
const double INCH_TO_METER = 0.0254;

int main(){
    int weightPound, heightInch;
    double weightKilogram, heightMeter, bmi;
    string weightStatus;

    cout<<"Please enter weight (in pounds): ";
    cin>>weightPound;
    cout<<"Please enter height (in inches): ";
    cin>>heightInch;

    weightKilogram = POUND_TO_KILOGRAM * weightPound;
    heightMeter = INCH_TO_METER * heightInch;

    bmi = weightKilogram / (heightMeter * heightMeter);

    if (bmi < 18.5) {
        weightStatus = "Underweight";
    } else if((bmi >= 18.5) && (bmi < 25)) {
        weightStatus = "Normal";
    } else if((bmi >= 25) && (bmi < 30)){
        weightStatus = "Overweight";
    } else {
        weightStatus = "Obese";
    }

    cout<<"The weight status is: "<<weightStatus<<endl;

    return 0;
}
