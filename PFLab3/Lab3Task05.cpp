// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int s;
    cout << "Enter the number of seconds = " << endl;
    cin >> s;
    
    int m, h, d;
     m = s/60;
     h = s/3600;
     d = s/86400;
    
    if (s <= 60 && s <3600) {
        cout << "Minutes = " << m << endl;
    }
    if (s <= 3600 && s <86400) {
        cout << "Hours = " << h << endl;
    }
    if (s>=86400) {
        cout << "Days = " << d << endl;
    }

    return 0;
}
