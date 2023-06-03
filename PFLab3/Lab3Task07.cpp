#include <iostream>
using namespace std;
int main() {
int w;
cout << "Enter the weight (kg) of your package " << endl;
cin >> w;

if (w > 20) {
cout << "We do not ship orders of more than 20kg " << endl;
return 0;
}
int d;
cout << "Enter the distance (km) " << endl;
cin >> d;
if (d > 3000) {
cout << "We do not ship orders over more than 3000km distance " << endl;
return 0;
}

//Weight Conditions as per weight
//if weight is less than or equal to 2kg
int wc1 = 50 * d/500;
// If weight is more than 2kg but less than 6 kg
int wc2 = 100 * d/500;
// If weight is more than 6 and less than 10kg.
int wc3 = 150 * d/500;
// If weight is more than 10 and less than 20kg.
int wc4 = 200 * d/500;

if (w <= 20) {
cout << "Your charges for this order will be " << wc1 << "PKR" << endl;
}
else if (w >2 && w >=6) {
cout << "Your charges for this order will be " << wc2 << "PKR" << endl;
}
else if (w >6 && w <10) {
cout << "Your charges for this order will be " << wc3 << "PKR" << endl;
}
else if (w > 10 && w <=20) {
cout << "Your charges for this order will be " << wc4 << "PKR" << endl;
}
return 0;
}
