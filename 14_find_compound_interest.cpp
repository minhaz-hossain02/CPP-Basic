#include<iostream>
#include<cmath>
using namespace std;
int main (){
double A, P, R, T, CI;

cout<<"Enter principle:";
cin>>P;
cout<<"Enter Rate of Interest:";
cin>>R;
cout<<"Enter time (In years):";
cin>>T;

A = P * pow(1 + R/100, T);

CI = A - P;

cout<<"Total Amount (A) = " << A << endl;
cout<<"Compound Interest (CI) = " << CI << endl;

return 0;

}
