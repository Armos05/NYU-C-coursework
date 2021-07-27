#include <iostream>
#include <string>
using namespace std;

const double WEEKDAYS_REGULAR_CALL_RATE = 0.4;
const double WEEKDAYS_EXTRA_CALL_RATE = 0.25;
const double WEEKEND_CALL_RATE = 0.15;

int main(){
    int timeHours, timeMins;
    int lengthOfCall;
    double costOfCall;
    char colon;
    string daysOfWeek;

    cout << "What time did your call start (use 24-hour notation with space separating the hours, the colon and the minutes)? " << endl;
    cin >> timeHours >> colon >> timeMins;

    cout<<"Please enter days of the week: ";
    cin>>daysOfWeek;

    cout<<"Please enter the length of the call in minutes: ";
    cin>>lengthOfCall;

    if ((daysOfWeek == "Sa")||(daysOfWeek == "Su")){
        costOfCall = WEEKEND_CALL_RATE * lengthOfCall;
    } else {
        if((timeHours >= 8)&& (timeHours <= 18)){
            costOfCall = WEEKDAYS_REGULAR_CALL_RATE * lengthOfCall;
        }else{
            costOfCall = WEEKDAYS_EXTRA_CALL_RATE * lengthOfCall;
        }
    }

    cout<<"The cost of the call is: $"<<costOfCall<<endl;


    return 0;
}
