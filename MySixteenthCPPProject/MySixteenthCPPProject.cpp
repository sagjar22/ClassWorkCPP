#include <iostream>

using namespace std;

enum Weekdays {
    Mon = 1, Tue, Wed, Thu, Fri, Sat, Sun
};

struct fieldbits {
    unsigned char field1 : 1;
    unsigned char field2 : 3;
    unsigned char field3 : 4;
};


struct date {
    int day;
    int month;
    int year;
    Weekdays weekday;
    char month_name[15];
};

struct person {
    char* firstName;
    char* secondName;
    char* email;
    date bithDate;
};

void printDate(date dateToPrint) {
    cout << dateToPrint.day << '.'
        << dateToPrint.month << '.'
        << dateToPrint.year << " -- "
        << dateToPrint.weekday << ' '
        << dateToPrint.month_name;
}

int main()
{
    date today = { 20, 06,2026, Sat, "June" };
    printDate(today);

    date* datePtr = &today;

    cout << '\n';

    //cout << (*datePtr).day;
    cout << datePtr->day;
}
