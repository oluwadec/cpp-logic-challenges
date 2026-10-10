// Challenge 8 (Final Boss): Ten Number Calculator
// Reads 10 numbers, then asks the user to choose an operation:
//   +  prints the sum of all 10 numbers
//   -  prints the negative of that sum (every number subtracted from zero)

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int COUNT = 10;

    double sum = 0;

    // Read the numbers one at a time and add each to the running total.
    for (int i = 1; i <= COUNT; i++) {
        double number;
        cout << "Enter number " << i << ": ";
        cin >> number;
        sum += number;
    }

    char operation;
    cout << "Type + for addition" << endl;
    cout << "Type - for subtraction" << endl;
    cin >> operation;

    cout << fixed << setprecision(2);

    if (operation == '+') {
        cout << "The sum of all " << COUNT << " numbers is: " << sum << endl;
    } else if (operation == '-') {
        cout << "The negative sum of all " << COUNT << " numbers is: " << -sum << endl;
    } else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
