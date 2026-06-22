#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
int score1;
int score2;
int score3;
cout << "Type a number : " << endl;
cin >> score1;
cout << "Type the a second number : " << endl;
cin >> score2;
cout << "Type a third number : " << endl;
cin >> score3;
double average;
//Parentheses added here to fix logic
average = (score1 + score2 + score3) / 3.0;
cout << fixed << setprecision(2);
cout << " Your average score is : " << average << endl;
return 0;
}