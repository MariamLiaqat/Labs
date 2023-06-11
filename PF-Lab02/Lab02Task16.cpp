#include <iostream>
#include <cmath>
using namespace std;

int main() {
int P;
cout << "Enter the number of people at the party : ";
cin >> P;
float d;
cout << "Enter the diameter of pizza you want to purchase : ";
cin >> d;
float r = d/2;
float a = 3.14 * pow(r , 2);
float ss = a / 14.125;
cout << "The number of slices in this pizza is " << ss << endl;
float slicesneeded = P * 4;
float pizzaneeded = slicesneeded / ss;
cout << "You need " << pizzaneeded << " pizzas for this party.";
return 0;
}
