#include <iostream>
using namespace std;

int main() {
    int number = 10;

    // use == to compare，rather than =
    if (number == 20) {
        cout << "Number is 20" << endl;
    } else {
        cout << "Number is not 20" << endl;
    }

    // remove the ; after the for looop to make sure it is valid and 
    // put cout into for loop body
    for (int i = 0; i <= 5; i++) {
        cout << i << endl;
    }

    return 0;
}
