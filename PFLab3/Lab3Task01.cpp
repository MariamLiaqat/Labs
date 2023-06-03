#include <iostream>
using namespace std;
int main() {
int x;
int y;
int z;

cout << "Enter the Date: " << endl;
cin >> x;

cout << "Enter the Month: " << endl;
cin >> y;

cout << "Enter the year: " << endl;
cin >> z;

if (x*y==z) {
cout << "Today is Magic Date!" << endl;
}

else {
cout << "Nothing like Magic Date today " << endl;
}

return 0;

}
