// Challenge 6: Seconds to Minutes and Seconds
// Converts a number of seconds into whole minutes plus leftover seconds.
// Example: 135 seconds -> 2 minutes and 15 seconds

#include <iostream>
using namespace std;

int main() {
    int totalSeconds;

    cout << "Enter a total number of seconds: ";
    cin >> totalSeconds;

    int minutes = totalSeconds / 60;          // whole minutes
    int remainingSeconds = totalSeconds % 60; // what is left over

    cout << totalSeconds << " seconds is equal to " << minutes
         << " minutes and " << remainingSeconds << " seconds" << endl;

    return 0;
}
