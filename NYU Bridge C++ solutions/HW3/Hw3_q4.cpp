#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main(){
    int method;
    double realNumber, roundoff;
    int result;

    cout<<"Please enter a Real number:"<<endl;
    cin>>realNumber;
    cout<<"Choose your rounding method: "<<endl;
    cout<<"1. Floor round"<<endl;
    cout<<"2. Ceiling round"<<endl;
    cout<<"3. Round to the nearest whole number"<<endl;
    cin>>method;


    switch (method) {
        case FLOOR_ROUND:
            result = realNumber;
            break;
        case CEILING_ROUND:
            result = realNumber;
            result = result + 1;
            break;
        case ROUND:
            result = realNumber;
            roundoff = realNumber - result;
            if (roundoff >= 0.5){
                result = result + 1;
            }
            else {
                result = result;
            }
        default:
            break;

    }

    cout<<result<<endl;


    return 0;
}
