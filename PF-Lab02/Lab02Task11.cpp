#include <iostream>
using namespace std;

int main() {
//Total Cookies in Bag are 40.There are 10 servings in the bag and each serving containing 300 cals.
int TC = 40;
int S = 10;
int Tcal = 300 * S;
int calperC = Tcal / TC;
int cate , calate;
cout << "How many cookies did you eat? " << endl;
cin >> cate;
calate = cate * calperC;
cout << "The calries you consumed are " << calate;

return 0;

}
