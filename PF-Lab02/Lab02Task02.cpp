#include <iostream>
using namespace std;

int main() {
int maximumC, usedC, availableC;
cout << "Enter your maximum credit = ";
cin >> maximumC;
cout << "How much credit have you used = ";
cin >> usedC;
availableC = maximumC - usedC;
cout << "Your available credit is = " << availableC << endl;
return 0;
}
