#include<iostream>
using namespace std;
int main(){
int n;
long long fact = 1;

cout<<"Enter a number: ";
cin>>n;

if (n<0){
        cout<<"Factorial of a negative number does not exist. ";
}
else{
    for (int i=1; i<=n; i++) {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is: " << fact;
}
return 0;
}
