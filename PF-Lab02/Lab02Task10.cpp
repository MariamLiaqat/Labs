#include <iostream>
#include <string>
using namespace std;

int main() {
string mn;
cout << "Enter the Movie Name: ";
cin >> mn;
int adt , adt60 , cht;
cout << "How many adult (below 60) tickets were sold? " << endl;
cin >> adt;
cout << "How many adult (above 60) tickets were sold? " << endl;
cin >> adt60;
cout << "How many children tickets were sold? " << endl;
cin >> cht;
int Radt , Radt60 , Rcht , TS , DM , TMP , TMV;
Radt = adt * 500;
Radt60 = adt60 * 450;
Rcht = cht * 250;
TS = Radt + Radt60 + Rcht;
TMP = TS * 20;
TMV = TMP / 100;
DM = TS - TMV;
cout << "Movie Name: " << mn << endl;
cout << "Adult tickets sold: " << adt << endl;
cout << "Adults above 60 tickets sold: " << adt60 << endl;
cout << "Children Tickets sold: " << cht << endl;
cout << "Amount paid to the distributor is " << DM << "PKR" << endl;
cout << "The theatre's gross profit is " << TMV << "PKR" << endl;

return 0;

}
