#include<iostream>
using namespace std;
int main(){
int N;

cout<<"Enter a number:";
cin>>N;
cout<<"Prime numbers from 1 to " << N << " are: ";

for(int i=2; i<=N; i++) {
    bool isPrime = true;
    for(int j=2; j*j <=i; j++)
    {
        if (i%j ==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<i << "";
    }
}
return 0;
}
