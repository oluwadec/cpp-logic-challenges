// Challenge 1: Rectangle Area
// Asks for the length and width of a rectangle and prints its area.

#include <iostream>
using namespace std;

int main() {
    double length;
    double width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    double area = length * width;

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
