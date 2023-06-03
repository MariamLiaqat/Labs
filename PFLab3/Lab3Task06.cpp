// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int MBC = 50;
   int LBL = 100;
   
   
   int Bal;
   cout << "Enter your begining balance: ";
   cin >> Bal;
   if (Bal <0) {
      cout <<"Your account is overwithdrawn" << endl;
  } 
   
   //Number of cheques in represented by no_C
   int no_C;
   cout << "Enter number of cheques cashed this month: ";
   cin >> no_C;
   if (no_C <0) {
       cout << "Invalid Input" << endl;
       return 0;
   }
   
   // I have taken no. of cheques cashed as conditions (C).
   //charges for less than 20 cheques
  int C1 = 10 * no_C;
  
  //charges for cheques between 20 to 39
  int C2 = 8 * no_C;
  
  //charges for cheques between 40 to 59
  int C3 = 6 * no_C;
  
  //charges for more than 60 cheques
  int C4 = 4 * no_C;
  
  
  //Total charges (TC) inclusive MBC and cheque fee when balance is greater than 15000.
  //TC for less than 20 cheques
  int TS1 = MBC + C1;
  
  //TC for cheques between 20 to 39
  int TS2 = MBC + C2;
  
  //TC for cheques between 40 to 59
  int TS3 = MBC + C3;
  
  //Ts for more than 60 cheques
  int TS4 = MBC + C4;
  
  //Total charges (TS) when balance in account is lower than 15000.
  //TS1 in case of Lower Balance
  int LTS1 = TS1 + LBL;
  // TS2 in case of Lower Balance
  int LTS2 = TS2 + LBL;
  // TS3 in case of Lower Balance
  int LTS3 = TS3 + LBL;
  //TS4 in case of Lower Balance
  int LTS4 = TS4 + LBL;
  
  
  //Calculating the new balance (NB) after charging TS
  // NB for less than 20 cheques
  int NB1 = Bal - TS1;
  
  //NB for cheques between 20 to 39
  int NB2 = Bal - TS2;
  
  //NB for cheques between 40 to 59
  int NB3 = Bal - TS3;
  
  //NB for more than 60 cheques
  int NB4 = Bal - TS4;
  
  
  //Calculating new balance (NB) in case additional deduction was charged due to original balance being lower than 15000. In this case New Balance will be denoted by (LNB).
  //  NB1 in case of Lower Balance
  int LNB1 = Bal - LTS1;
  
  // NB2 in case of Lower Balance
  int LNB2 = Bal - LTS2;
  
  //NB3 in case of Lower Balance
  int LNB3 = Bal - LTS3;
  
  //NB4 in case of Lower Balance
  int LNB4 = Bal - LTS4;
  
  // When balance is less than 15000.
  if (Bal < 15000 && no_C <20) {
      cout << "Your Commercial Banking charges for this month are " << LTS1 << endl;
      cout << "Your new balance is " << LNB1 << endl;
  }
  else if (Bal < 15000 && no_C >= 20 && no_C <=39) {
      cout << "Your Commercial Banking charges for this month are " << LTS2 << endl;
      cout << "Your new balance is " << LNB2 << endl;
  }
  else if (Bal < 15000 && no_C >=40 && no_C <=59) {
      cout << "Your Commercial Banking charges for this month are " << LTS3 << endl;
      cout << "Your new balance is " << LNB3 << endl;
  }
  else if (Bal < 15000 && no_C >60) {
      cout << "Your Commercial Banking charges for this month are " << LTS4 << endl;
      cout << "Your new balance is " << LNB4 << endl;
  }
      
// when balance is more than 15000.
else if (Bal > 15000 && no_C <20) {
    cout << "Your Commercial Banking charges for this month are " << TS1 << endl;
    cout << "Your new balance is " << NB1 << endl;
}
else if (Bal > 15000 && no_C >=20 && no_C <=39) {
    cout << "Your Commercial Banking charges for this month are " << TS2 << endl;
    cout << "Your new balance is " << NB2;
}
else if (Bal > 15000 && no_C >=40 && no_C <=59) {
    cout << "Your Commercial Banking charges for this month are " << TS3 << endl;
    cout << "Your new balance is " << NB3 << endl;
}
else if (Bal > 15000 && no_C >60)  {
    cout << "Your Commercial Banking charges for this month are " << TS4 << endl;
    cout << "Your new balance is " << NB4 << endl;
}
//What if the new Balance (NB1/NB2/NB3/NB4/LNB1/LNB2/LNB3/LNB4 is negative or less than zero)
 if (NB1,NB2,NB3,NB4,LNB1,LNB2,LNB3,LNB4 < 0) {
    cout << "After the deduction of your commercial banking charges your account is overwithdrawn" << endl;
}
return 0;
}
