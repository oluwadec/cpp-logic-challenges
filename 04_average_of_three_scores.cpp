// Challenge 4: Average of Three Scores
// Asks for three scores and prints their average to two decimal places.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int score1;
    int score2;
    int score3;

    cout << "Enter the first score: ";
    cin >> score1;

    cout << "Enter the second score: ";
    cin >> score2;

    cout << "Enter the third score: ";
    cin >> score3;

    // Dividing by 3.0 (not 3) keeps the decimal part of the answer.
    // The parentheses make sure the scores are added before dividing.
    double average = (score1 + score2 + score3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "Your average score is: " << average << endl;

    return 0;
}
