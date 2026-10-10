// Challenge 3: Shopping Total Cost
// Asks for an item name, how many were bought and the price of one item,
// then prints the total cost.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string item;
    int quantity;
    double price;

    cout << "Enter the name of the item: ";
    getline(cin, item);

    cout << "Enter the quantity: ";
    cin >> quantity;

    cout << "Enter the price per item: ";
    cin >> price;

    double totalCost = quantity * price;

    cout << fixed << setprecision(2);
    cout << "You bought " << quantity << " " << item
         << "(s) for a total of: " << totalCost << endl;

    return 0;
}
