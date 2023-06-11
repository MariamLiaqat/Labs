#include <iostream>
using namespace std;
int main() {
int TA , TB , TC;
cout << "Number tickets sold from class A = ";
cin >> TA;
cout << "Number tickets sold from class B = ";
cin >> TB;
cout << "Number tickets sold from class C = ";
cin >> TC;
int SCA , SCB , SCC , IG;
SCA = TA * 2000;
SCB = TB * 1000;
SCC = TC * 500;
IG = SCA + SCB + SCC;
cout << "Income generated from sales is " << IG << "PKR" << endl;
return 0;
}
