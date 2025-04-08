#include <iostream>
using namespace std;

int main() {
    // Part 1: enter 3 number and find the biggest one
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int largest;
    if (a > b) {
        if (a > c) {
            largest = a;
        } else {
            largest = c;
        }
    } else {
        if (b > c) {
            largest = b;
        } else {
            largest = c;
        }
    }

    cout << "The largest number is: " << largest << endl;

    // Part 2: determine wether the leap year or not
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
