include <iostream>
#include <string>
using namespace std;

int main() {
    // Part 1: user input name age and number they like
    string name;
    int age;
    int favoriteNumber;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your favorite number: ";
    cin >> favoriteNumber;

    cout << "\n--- User Info ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Favorite Number: " << favoriteNumber << endl;

    // Part 2: define different value and return
    int myInt = 10;
    float myFloat = 3.14f;
    char myChar = 'A';
    string myString = "Hello C++";

    cout << "\n--- Variable Types ---" << endl;
    cout << "Integer: " << myInt << endl;
    cout << "Float: " << myFloat << endl;
    cout << "Char: " << myChar << endl;
    cout << "String: " << myString << endl;

    return 0;
