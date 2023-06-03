#include <iostream>
using namespace std;
int main() {
float mass;
cout << "Enter your mass = ";
cin >> mass;

float weightNewton = mass * 9.8;

if (weightNewton > 1000) {
    cout << "The object is too heavy" << endl;
}
else if (weightNewton < 1000) {
    cout << "The object is too light" << endl;
}

return 0;

}
