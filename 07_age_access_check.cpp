// Challenge 7: Age Access Check
// Asks for the user's age and grants access only if they are 18 or older.

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Access Granted. Welcome inside!" << endl;
    } else {
        cout << "Access Denied. You must be 18 or older." << endl;
    }

    return 0;
}
