#include <iostream>
using namespace std;

int main() {
int G1S , G2S , G3S;
cout << "Enter score for game one = ";
cin >> G1S;
cout << "Enter score for game two = ";
cin >> G2S;
cout << "Enter score for game three = ";
cin >> G3S;
int Ssum = G1S + G2S + G3S;
int avgS = Ssum/3;
cout << "Your average score = " << avgS << endl;
return 0;
}
