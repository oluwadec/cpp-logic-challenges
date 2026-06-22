#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
double temperature;
cout << " Type a temperature in celcius : " << endl;
cin >> temperature;
double fahrenheit;
fahrenheit = (temperature * (9.0 / 5.0)) + 32;
cout << fixed << setprecision(1);
cout << " The tempareture in Fahrenheit is : " << fahrenheit << endl;
return 0;
}