#include <iostream>
using namespace std;
int main() {
//Gather the sales data of 3 salesmen
int GSS1, GSS2, GSS3;
cout << "Gross sales of sales man 1 = " << "$" << endl;
cin >> GSS1;
cout << "Gross sales of sales man 2 = " << "$" << endl;
cin >> GSS2;
cout << "Gross sales of sales man 3 = " << "$" << endl;
cin >> GSS3;
if (GSS1, GSS2, GSS3 <0) {
cout << "Invalid Input" << endl;
return 0;
}

//Formula to calculate earning of sales men
// Total Earnings (TE) = 200 + (gross sales * 0.09)
float TES1, TES2, TES3;
TES1 = 200 + GSS1 * 0.09;
TES2 = 200 + GSS2 * 0.09;
TES3 = 200 + GSS3 * 0.09;
cout << "Total earning of Sales Man 1 are " << TES1 << "$" << endl;
cout << "Total earning of Sales Man 2 are " << TES2 << "$" << endl;
cout << "Total earning of Sales Man 3 are " << TES3 << "$" << endl;

return 0;
}
