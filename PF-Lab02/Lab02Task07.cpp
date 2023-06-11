#include <iostream>
using namespace std;
int main() {
int amount;
cout << "Enter the amount = " << endl;
cin >> amount;

int H5N = amount/500;
cout << "500: " << H5N << endl;
amount = amount % 500;

int H1N = amount/100;
cout << "100: " << H1N << endl;
amount = amount % 100;

int N50 = amount/50;
cout << "50: " << N50 << endl;
amount = amount % 50;

int N20 = amount/20;
cout << "20: " << N20 << endl;
amount = amount % 20;

int N10 = amount/10;
cout << "10: " << N10 << endl;
amount = amount % 10;

int N5 = amount/5;
cout << "5: " << N5 << endl;
amount = amount % 5;

int N1 = amount/1;
cout << "1: " << N1 << endl;
amount = amount % 1;

return 0;

}
