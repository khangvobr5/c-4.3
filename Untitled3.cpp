#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user to input an integer
    cout << "Enter an integer: ";
    cin >> number;

    // Check divisibility by 3, 5, or both
    if (number % 3 == 0 && number % 5 == 0) {
        cout << "The number is divisible by both 3 and 5." << endl;
    } else if (number % 3 == 0) {
        cout << "The number is divisible by 3." << endl;
    } else if (number % 5 == 0) {
        cout << "The number is divisible by 5." << endl;
    } else {
        cout << "The number is not divisible by 3 or 5." << endl;
    }

    return 0;
}
