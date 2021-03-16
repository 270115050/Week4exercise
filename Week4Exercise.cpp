// Week4Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int choice = 0;
    float cel, farh;
    int sec, day, year, month;

again:
    system("cls");
    cout << "Press 1 [Convert celsius to farenheit]" << endl
        << "Press 2 [Convert days to seconds]" << endl
        << "Press 3 [Check if year is leap year]" << endl
        << "Press 4 [Check how many days in a month]" << endl
        << "press any number to exit" << endl << endl;
    cout << "Choose which program to run: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Enter celsius: ";
        cin >> cel;

        farh = (cel * 1.8)+ 32;

        cout << "Celsius " << cel << "is " << farh << " Farenheit";
        break;

    case 2:
        cout << "Please enter days: ";
        cin >> day;

        sec = day * 86400;

        cout << "The number of seconds in " << day << " days is: " << sec << endl;
        break;

    case 3:
        cout << "Enter year to check if it is a leap year: ";
        cin >> year;

        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0)
                    cout << "This " << year << " is a leap year" << endl;
                else
                    cout << "This " << year << " is not a leap year" << endl;
            }
            else
                cout << "This " << year << " is a leap year" << endl;
        }
        else
            cout << "This " << year << " is not a leap year" << endl;
        break;

    case 4:
        do {
            cout << "Enter month 1-12 to check how many days it has: ";
            cin >> month;
            if (month <= 12) {
                if (month % 2 == 0) {
                    cout << "This month has 30 days";
                }
                else {
                    cout << "This month has 31 days";
                }
            }
            else
                cout << "Invalid month" << endl;
        } while (month > 12);

        break;

    default:
        return 0;
    }

    cout << endl << endl;
    system("pause");
    goto again;

    return 0;
}