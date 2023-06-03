#include <iostream>
using namespace std;
int main() {
int cal;
cout << "Enter the number of Calories" << endl;
cin >> cal;
if (cal <0) {
cout << "Invalid Input" << endl;
return 0;
}
int FG;
cout << "Enter the number of Fat Grams" << endl;
cin >> FG;
if (FG <0) {
cout << "Invalid Input" << endl;
return 0;
}
int CalfromFat = FG * 9;
if (CalfromFat > cal) {
cout << "Error! You have entered incorrect calories or fat grams." << endl;
return 0;
}
float percentageof_calfromfat = CalfromFat / cal;
cout << "The percentage of Fat calories in your food is = " << percentageof_calfromfat << endl;
if (percentageof_calfromfat < 30) {
cout << "This is low fat food" << endl;
}

return 0;
}
