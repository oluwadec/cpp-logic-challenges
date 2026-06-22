#include <iostream>
#include <string>
using namespace std;
int main() {
string item;
cout << " Enter the name of the item : " << endl;
getline(cin, item);
int quantity;
cout << " Enter the quantity : " << endl;
cin >> quantity;
double price;
cout << " Enter price per item : " << endl;
cin >> price;
int Total_cost;
Total_cost = quantity * price;
cout << " You bought " << quantity << item << "(s) for a total of : " << Total_cost << endl;
return 0;
}