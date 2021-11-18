#include <iostream>
#include <string>
using namespace std;

int printMonthCalendar(int numOfDays, int startingDay);
bool isLeapYear(int year);
int printYearCalendar(int year, int startingDay);

int main() {
    int year = 0, firstDay = 0;
    cout << "Please enter a year: ";
    cin >> year;

    cout << "Enter the first day of the month (1-Mon, 2-Tues): ";
    cin >> firstDay;
    cout << endl;

    printYearCalendar(year, firstDay);
    return 0;
}

int printMonthCalendar(int numOfDays, int startingDay) {
    cout << "Mon\tTue\tWed\tThr\tFri\tSat\tSun" << endl;

    for (int i = 1; i < startingDay; i++) {
        cout << "\t";
    }

    int dayCount = startingDay;
    for (int i = 1; i <= numOfDays; i++) {
        cout << i << "\t";
        if ((i + startingDay - 1) % 7 == 0) {
            if (i != numOfDays) {
                cout << endl;
            }
        }
        dayCount++;
        if (dayCount == 8) {
            dayCount = 1;
        }
    }

    return dayCount;
}

int printYearCalendar(int year, int startingDay) {
    int daysInMonth = 0, offSet = 0;
    string month;

    for (int i = 1; i <= 12; i++) {
        if (i == 1) {
            month = "January";
            daysInMonth = 31;
        } else if (i == 2) {
            month = "February";
            if (isLeapYear(year)) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
        } else if (i == 3) {
            month = "March";
            daysInMonth = 31;
        } else if (i == 4) {
            month = "April";
            daysInMonth = 30;
        } else if (i == 5) {
            month = "May";
            daysInMonth = 31;
        } else if (i == 6) {
            month = "June";
            daysInMonth = 30;
        } else if (i == 7) {
            month = "July";
            daysInMonth = 31;
        } else if (i == 8) {
            month = "August";
            daysInMonth = 31;
        } else if (i == 9) {
            month = "September";
            daysInMonth = 30;
        } else if (i == 10) {
            month = "October";
            daysInMonth = 31;
        } else if (i == 11) {
            month = "November";
            daysInMonth = 30;
        } else if (i == 12) {
            month = "December";
            daysInMonth = 31;
        }

        cout << month << " " << year << endl;
        if (i == 1) {
            offSet = printMonthCalendar(daysInMonth, startingDay);
        } else {
            offSet = printMonthCalendar(daysInMonth, offSet);
        }
        cout << endl;
        cout << endl;
    }
    return 0;
}

bool isLeapYear(int year) {
    if ((year % 4) != 0) {
        return false;
    } else if ((year % 100) != 0) {
        return true;
    } else if ((year % 400) != 0) {
        return false;
    }
    return true;
}
