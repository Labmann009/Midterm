#include <iostream>
using namespace std;

// calculate area
float calculateArea(float length, float width) {
    return length * width;
}

// check if the integer is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

// main funtion to test
int main() {
    // test calculateArea()
    float l = 5.0;
    float w = 3.0;
    cout << "Area: " << calculateArea(l, w) << endl;

    // test isPrime()
    int n = 7;
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
