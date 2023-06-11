#include <iostream>
#include <cmath>
using namespace std;

int main() {
float d;
cout << "Enter the diameter of pizza : ";
cin >> d;
float r = d/2;
float a = 3.14 * pow(r , 2);
float ss = a / 14.125;
cout << "The number of slices in this pizza is " << ss << endl;
return 0;
}
