#include <iostream>
using namespace std;

int main() {
    // Part 1: print all even numbers between 1 and 50
    cout << "Even numbers from 1 to 50:" << endl;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // Part 2: use while loop to get input，for loop to print
    const int SIZE = 10;
    int numbers[SIZE];
    int index = 0;

    cout << "Enter 10 integers:" << endl;
    while (index < SIZE) {
        cin >> numbers[index];
        index++;
    }

    cout << "You entered: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
