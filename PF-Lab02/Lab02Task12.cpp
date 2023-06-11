#include <iostream>
using namespace std;

int main() {
int AV , CTRper100;
cout << "Enter the actual value of the house ($): ";
cin >> AV;
cout << "Enter the current tax rat per 100$: ";
cin >> CTRper100;
int TaxableValue = AV - 5000;
int Tax100s = TaxableValue / 100;
int Taxchargeable = Tax100s * CTRper100;
int taxquarter = Taxchargeable / 4;
cout << "Your total tax to be paid is " << Taxchargeable << "$" << endl;
cout << "Your quarterly payable tax is " << taxquarter << "$" << endl;

return 0;

}
