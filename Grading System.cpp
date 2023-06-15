#include <iostream>
using namespace std;
#include <cmath>
#include <string>
int main() {
    // Grading System for a Semester
    string Sname;
    cout << "Student's Name : ";
    cin >>Sname;
    
    int TM = 100;
    int TCM = 400;
    string GS1 , GS2 , GS3 , GS4, CG;
    //Subject Names and their Marks Distribution.
    //SUBJECT 1
    string S1;
    cout << "Enter the name of Subject 1 : ";
    cin >> S1;
    // Marks Distribution is such that Mid[M] Carries 20 marks, Quiz [Q]carries 10 marks, Project [P] carries 20 marks and Final Exam [FE] carries 50 marks.
int M1 , Q1 , P1 , FE1 ;
cout << "Obtained Marks in Quiz = ";
cin >> Q1;
cout << "Obtained Marks in Mids = ";
cin >> M1;
cout << "Obtained Marks in Project = ";
cin >> P1;
cout << "Obtained Marks in Final Exams = ";
cin >> FE1;
//Total Obtained Marks in Subject 1 [TOBS1]
int TOBS1 = Q1 + M1 + P1 + FE1;
cout << "Total Obtained Marks in " << S1 << " = " << TOBS1 << endl;
if (TOBS1 > TM) {

    cout << "Invalid Iput. The sum of obtained marks you entered are more than total marks of the subject. Please revisit your input. ";
    return 0;
}

if (TOBS1 >= 90 & TOBS1 <= 100) {
    string GS1 = "A+";
    cout << "Grade = " << GS1 << endl; 
}
if (TOBS1 >= 80 & TOBS1 < 90 ) {
    string GS1 = "A";
    cout << "Grade = " << GS1 << endl; 
}
if (TOBS1 >= 70 & TOBS1 < 80) {
    string GS1 = "B+";
    cout << "Grade = " << GS1 << endl;
}
if (TOBS1 >= 60 & TOBS1 < 70) {
    string GS1 = "B";
    cout << "Grade = " << GS1 << endl;
}
if (TOBS1 >= 50 & TOBS1 < 60) {
    string GS1 = "C";
    cout << "Grade = " << GS1 << endl;
}
if (TOBS1 <50) {
    string GS1 = "F";
    cout << "Grade = " << GS1 << endl;
}
//Subject 2

string S2;
    cout << "Enter the name of Subject 2: ";
    cin >> S2;
    
int M2, Q2, P2, FE2;
cout << "Obtained Marks in Quiz = ";
cin >> Q2;
cout << "Obtained Marks in Mids = ";
cin >> M2;
cout << "Obtained Marks in Project = ";
cin >> P2;
cout << "Obtained Marks in Final Exams = ";
cin >> FE2;
//Total Obtained Marks in Subject 1 [TOBS1]
int TOBS2= Q2+ M2+ P2+ FE2;
cout << "Total Obtained Marks in " << S2 << " = " << TOBS2 << endl;

if (TOBS2 > TM) {

    cout << "Invalid Iput. The sum of obtained marks you entered are more than total marks of the subject. Please revisit your input. ";
    return 0;
}

if (TOBS2 >= 90 & TOBS2 <= 100) {
    string GS2 = "A";
    cout << "Grade = " << GS2 << endl; 
}
if (TOBS2 >= 80 & TOBS2 < 90 ) {
    string GS2 = "A+";
    cout << "Grade = " << GS2 << endl; 
}
if (TOBS2 >= 70 & TOBS2 < 80) {
    string GS2 = "B";
    cout << "Grade = " << GS2 << endl;
}
if (TOBS2 >= 60 & TOBS2 < 70) {
    string GS2 = "B+";
    cout << "Grade = " << GS2 << endl;
}
if (TOBS2 >= 50 & TOBS2 < 60) {
    string GS2 = "C";
    cout << "Grade = " << GS2 << endl;
}
if (TOBS2 <50) {
    string GS2 = "F";
    cout << "Grade = " << GS2 << endl;
}

// Subject 3

string S3;
    cout << "Enter the name of Subject 3: ";
    cin >> S3;
    
int M3, Q3, P3, FE3;
cout << "Obtained Marks in Quiz = ";
cin >> Q3;
cout << "Obtained Marks in Mids = ";
cin >> M3;
cout << "Obtained Marks in Project = ";
cin >> P3;
cout << "Obtained Marks in Final Exams = ";
cin >> FE3;
//Total Obtained Marks in Subject 1 [TOBS1]
int TOBS3 = Q3+ M3+ P3+ FE3;
cout << "Total Obtained Marks in " << S3 << " = " << TOBS3 << endl;;

if (TOBS3 > TM) {

    cout << "Invalid Iput. The sum of obtained marks you entered are more than total marks of the subject. Please revisit your input. ";
    return 0;
}

if (TOBS3 >= 90 & TOBS3 <= 100) {
    string GS3 = "A";
    cout << "Grade = " << GS3 << endl; 
}
if (TOBS3 >= 80 & TOBS3 < 90 ) {
    string GS3 = "A+";
    cout << "Grade = " << GS3 << endl; 
}
if (TOBS3 >= 70 & TOBS3 < 80) {
    string GS3 = "B";
    cout << "Grade = " << GS3 << endl;
}
if (TOBS3 >= 60 & TOBS3 < 70) {
    string GS3 = "B+";
    cout << "Grade = " << GS3 << endl;
}
if (TOBS3 >= 50 & TOBS3 < 60) {
    string GS3 = "C";
    cout << "Grade = " << GS3 << endl;
}
if (TOBS3 <50) {
    string GS3 = "F";
    cout << "Grade = " << GS3 << endl;
}

// Subject 4

string S4;
    cout << "Enter the name of Subject 4: ";
    cin >> S4;
    
int M4, Q4, P4, FE4;
cout << "Obtained Marks in Quiz = ";
cin >> Q4;
cout << "Obtained Marks in Mids = ";
cin >> M4;
cout << "Obtained Marks in Project = ";
cin >> P4;
cout << "Obtained Marks in Final Exams = ";
cin >> FE4;
//Total Obtained Marks in Subject 1 [TOBS1]
int TOBS4 = Q4+ M4+ P4+ FE4;
cout << "Total Obtained Marks in " << S4 << " = " << TOBS4 << endl;

if (TOBS4 > TM) {

    cout << "Invalid Iput. The sum of obtained marks you entered are more than total marks of the subject. Please revisit your input. ";
    return 0;
}

if (TOBS4 >= 90 & TOBS4 <= 100) {
    string GS4 = "A";
    cout << "Grade = " << GS4 << endl; 
}
if (TOBS4 >= 80 & TOBS4 < 90 ) {
    string GS4 = "A+";
    cout << "Grade = " << GS4 << endl; 
}
if (TOBS4 >= 70 & TOBS4 < 80) {
    string GS4 = "B";
    cout << "Grade = " << GS4 << endl;
}
if (TOBS4 >= 60 & TOBS4 < 70) {
    string GS4 = "B+";
    cout << "Grade = " << GS4 << endl;
}
if (TOBS4 >= 50 & TOBS4 < 60) {
    string GS4 = "C";
    cout << "Grade = " << GS4 << endl;
}
if (TOBS4 <50) {
    string GS4 = "F";
    cout << "Grade = " << GS4 << endl;
}

// Cummulative Grade 
int CM = TOBS1 + TOBS2 + TOBS3 + TOBS4;
if (CM > TCM) {

    cout << "Invalid Iput. The sum of obtained cummulative marks you entered are more than total cummulative  marks. Please revisit your input. ";
    return 0;
}


if (TOBS1 < 50 || TOBS2 < 50 || TOBS3 < 50 || TOBS4 < 50) {
    cout << "The student have failed in one subject thus his cummulative grade can not be calculated at the time. It would be calculated once student repeat the failed subject and passes it. ";
    return 0;
}
if (CM >= 300 & CM <= 400 ) {
    string CG = "A";
    cout << "Cummulative Grade = " << CG << endl; 
}
if (CM >= 200 & CM < 300) {
    string CG = "B";
    cout << "Cummulative Grade = " << CG << endl;
}
if (CM >= 100 & CM < 200) {
    string CG = "C";
    cout << "Cummulative Grade = " << CG << endl;
}

if (CM <100) {
    string CG = "F";
    cout << "Cummulative Grade = " << CG << endl;
}





    return 0;
}
