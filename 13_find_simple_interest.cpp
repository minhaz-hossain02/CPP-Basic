#include<iostream>
using namespace std;
int main(){
int P, R, T, SI;
cout<<"Enter principle:";
cin>>P;
cout<<"Enter Rate of Interest:";
cin>>R;
cout<<"Enter Time (In year)";
cin>>T;

SI = (P * R * T)/100;

cout<<"Simple Interest = " <<SI<<endl;
return 0;

}
