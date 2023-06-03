#include <iostream>
using namespace std;
int main() {
float w;
float h;

cout << "Enter your weight: " << endl;
cin >> w;

cout << "Enter your height: " << endl;
cin >> h;

float BMI = w * 703/ h*h;
cout << "Your Body Mass Index is " << BMI << endl;

if (BMI > 25) {
    cout << "I am sorry but you are overweight." << endl;
}
else if (BMI < 18.5) {
    cout << "Oh dear! You are underweight." << endl;
}
else if (BMI >= 18.5 && BMI <= 25) {
    cout << "Congrats you are have a normal body mass index." << endl;
}
return 0;

}
