#include<iostream>
using namespace std;
int main() {
int real1, real2, imag1, imag2;

cout<<"Enter the real and imaginary parts of the first complex number:";
cin>>real1>>imag1;

cout<<"Enter the real and imaginary parts of the second complex number:";
cin>>real2>>imag2;

cout<<"The sum of the two complex numbers is:" << real1+real2 <<" + "<< imag1 + imag2 << "i";

return 0;

}
