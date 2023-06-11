#include <iostream>
#include <cmath>
using namespace std;

int main() {
float P , IR , TC;
cout << "Enter your original balance : ";
cin >> P;
cout << "Enter the Interest Rate : ";
cin >> IR;
cout << "Enter the number of times in e year for which balance was compounded : ";
cin >> TC;
int IE = IR * P;
int IEF = IE / 100;
int CA = IEF + P;

cout << "Here is the summary of your saving account" << endl;
cout << "Principal : " << P << endl;
cout << "Interest Rate : " << IR << endl;
cout << "Time Compounded : " << TC << endl;
cout << "Interest earned : " << IEF << endl;
cout << "Your Current amount inclusive interest is : " << CA << endl;

return 0;

}
