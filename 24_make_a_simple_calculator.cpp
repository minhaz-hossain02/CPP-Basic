#include<iostream>
using namespace std;
int main(){
double a, b, result;
char op;

cout<<"Enter two number: ";
cin>>a>>b;
cout<<"Enter operator (+, -, *, / ): ";
cin>>op;

if (op == '+'){
    result = a + b;
    cout<<"Result = " <<result;
}
else if (op == '-'){
    result = a - b;
    cout<<"Result = " <<result;
}
else if (op == '*'){
    result = a * b;
    cout<<"Result = " <<result;
}
else if (op == '/'){
        if(b != 0){
    result = a / b;
    cout<<"Result = " <<result;
}
else {
    cout<<"Error: Division by zero!";
  }
}
else {
        cout << "Invalid operator!";
    }

    return 0;
}
