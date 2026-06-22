#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
double num1;
double num2;
double num3;
double num4;
double num5;
double num6;
double num7;
double num8;
double num9;
double num10;
cout << "Enter number 1 : " << endl;
cin >> num1;
cout << "Enter number 2 : " << endl;
cin >> num2;
cout << "Enter number 3 : " << endl;
cin >> num3;
cout << "Enter number 4 : " << endl;
cin >> num4;
cout << "Enter number 5 : " << endl;
cin >> num5;
cout << "Enter number 6 : " << endl;
cin >> num6;
cout << "Enter number 7 : " << endl;
cin >> num7;
cout << "Enter number 8 : " << endl;
cin >> num8;
cout << "Enter number 9 : " << endl;
cin >> num9;
cout << "Enter number 10 : " << endl;
cin >> num10;
double sum;
sum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;
double difference;
difference = -num1 - num2 - num3 - num4 - num5 - num6 - num7 - num8 - num9 - num10;
char op;
cout << " Type + for addition " << endl;
cout << " Type - for subtraction " << endl;
cin >> op;
if (op == '+')
{
	cout << fixed << setprecision(2);
	cout << " The sum of all 10 numbers is : " << sum << endl;
}
else if (op == '-')
{
	cout << fixed << setprecision(2);
	cout << " The negative sum of all 10 numbers is : " << difference << endl;
}
else
{
	cout << "Invalid operator! " << endl;
}
return 0;
}