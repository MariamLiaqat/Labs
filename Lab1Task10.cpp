#include <iostream>
using namespace std;
int main() {
int shares = 600;
float priceperstock = 21.77;
float priceforstock = shares * priceperstock;
float commission = (priceforstock *2) / 100;
float total_amount = priceforstock + commission;

cout << "Stock price excluded tax = " << priceforstock << endl;
cout << "Commission = " << commission << endl;
cout << "Total amount inclusive tax" << total_amount << endl;

}
