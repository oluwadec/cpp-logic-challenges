#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
int total_seconds;
cout << "Enter a Total number of seconds : " << endl;
cin >> total_seconds;
int minutes;
minutes = total_seconds / 60;
int remaining_seconds;
remaining_seconds = total_seconds % 60;
cout << total_seconds << " " << "seconds is equal to " << minutes
<< " "
<< " minutes and " << remaining_seconds
<< " "
<< "seconds" << endl;
return 0;
}