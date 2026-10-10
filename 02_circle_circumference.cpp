// Challenge 2: Circle Circumference
// Asks for the radius of a circle and prints its circumference.
// Formula: circumference = 2 * PI * radius

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;

    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double circumference = 2 * PI * radius;

    cout << "The circumference of the circle is: " << circumference << endl;

    return 0;
}
