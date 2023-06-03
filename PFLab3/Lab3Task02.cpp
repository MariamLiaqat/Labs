#include <iostream>
using namespace std;
int main() {
cout << "Rectangle One" << endl;
int l1;
int w1;

cout << "Enter the length of Rectangle1 = " << endl;
cin >> l1;

cout << "Enter the width of Rectangle1 = " << endl;
cin >> w1;

int area1 = l1 * w1;
cout << "Area of Reactangle1 is " << area1 << endl;

cout << "Reactangle Two" << endl;
int l2;
int w2;

cout << "Enter the length of Rectangle2 = " << endl;
cin >> l2;

cout << "Enter the width of Rectangle2 = " << endl;
cin >> w2;

int area2 = l2 * w2;
cout << "Area of Rectangle2 is " << area2 << endl;

if (area1 > area2) {
    cout << "Area of Rectangle1 is greater tha Rectangle2" << endl;
}
else if (area1 < area2) {
    cout << "Area of Rectangle1 is less than Reactangle2 " << endl;
}
else if (area1 == area2) {
    cout << "Areas of both rectangles are same" << endl;
}

return 0;

}
