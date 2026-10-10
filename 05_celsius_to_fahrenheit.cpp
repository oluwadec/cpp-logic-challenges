// Challenge 5: Celsius to Fahrenheit
// Converts a temperature from Celsius to Fahrenheit.
// Formula: fahrenheit = celsius * 9/5 + 32

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double celsius;

    cout << "Enter a temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << fixed << setprecision(1);
    cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;

    return 0;
}
