#include <iostream>
using namespace std;
int main() {
int mealcost = 445;
float tax = (mealcost * 67.5) / 100;
int tip = (mealcost * 15) / 100;
float totalbill = mealcost + tax + tip;
cout << "Meal cost = " << mealcost << endl;
cout << "Tax on meal = " << tax << endl;
cout << "Tip amount = " << tip << endl;
cout << "Total Bill = " << totalbill << endl;
}
