
#include<iostream>
using namespace std;
int main(){
double fahrenheit, celsius;

cout<<"Enter temperature in fahrenheit: ";
cin>>fahrenheit;

//cout<<"Enter temperature in celsius:";
//cin>>celsius;

celsius= (fahrenheit-32)*5/9.0;

cout<<"Temperature in celcius:"<< celsius <<endl;
return 0;
}


