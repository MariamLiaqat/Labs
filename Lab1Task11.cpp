#include <iostream>
using namespace std;
int main() {
int noofcustomers = 12467;
int noofcustomers_whopurchased = (noofcustomers * 14) / 100;
int whopreferredcitrus = (noofcustomers_whopurchased * 64) / 100;

cout << "Number of customers who purchased is " << noofcustomers_whopurchased << endl;
cout << "Number of customers who preferred citrus drinks is " << whopreferredcitrus << endl;

}
