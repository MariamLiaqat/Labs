#include <iostream>
#include <cmath>
using namespace std;

int main() {
int sharesbought = 1000;
int purchaseprice = 1000 * 32.87;
int CC = purchaseprice * 2;
int purchasecomm = CC /100;

int saleprice = 1000 * 33.92;
int SC = saleprice * 2;
int salecomm = SC / 100;
// TCP = Total comission paid.
int TCP = purchasecomm + salecomm;
int GP = saleprice - purchaseprice;
int Profit = GP - TCP;

cout << "Amount Bilal paid to buy the stock = " << purchaseprice << endl;
cout << "Comission Bilal paid while purchasing = " << purchasecomm << endl;
cout << "Amount Bilal got by selling stock = " << saleprice << endl;
cout << "Comission Bilal Paid while selling = " << salecomm << endl;
cout << "Profit gained by Bilal = " << Profit << endl;
if (Profit < 0) {
cout << "Bilal lost money here.";
}
return 0;
}
