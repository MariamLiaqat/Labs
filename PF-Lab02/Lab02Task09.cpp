#include <iostream>
#include <string>
using namespace std;

int main() {
string m1 , m2 , m3;
cout << "Enter the name of month one: ";
cin >> m1;
cout << "Enter the name of month two: ";
cin >> m2;
cout << "Enter the name of month three: ";
cin >> m3;
int rm1 , rm2 , rm3;
cout << "Enter the amount of rainfall in " << m1 << " (millimeters): ";
cin >> rm1;
cout << "Enter the amount of rainfall in " << m2 << " (millimeters): ";
cin >> rm2;
cout << "Enter the amount of rainfall in " << m3 << " (millimeters): ";
cin >> rm3;
int rainsum , avgrain;
rainsum = rm1 + rm2 + rm3;
avgrain = rainsum / 3;
cout << "The average rainfall for " << m1 << " , " << m2 << " and " << m3 << " is " << avgrain << " milimeter." << endl;
return 0;
}
