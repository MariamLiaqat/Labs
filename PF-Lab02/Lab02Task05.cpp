#include <iostream>
#include <cmath>
using namespace std;

int main() {
float angle1 , angle2;
cout << "Value of Angle 1 = ";
cin >> angle1;
cout << "Value of Angle 2 = ";
cin >> angle2;
float cal = sin (angle1) + cos(angle2);
cout << "Sin(angle1) + Cos(angle2) = " << cal;
return 0;
}
