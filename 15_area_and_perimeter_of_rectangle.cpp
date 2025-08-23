#include<iostream>
using namespace std;
int main (){
float length, width, area, perimeter;

cout<<"Enter the length of rectangle:";
cin>>length;
cout<<"Enter the width of rectangle:";
cin>>width;

area = length * width;
perimeter = 2*(length + width);

cout << "area of Rectangle = " << area << endl;
cout << "perimeter of Rectangle = " << perimeter << endl;

return 0;

}
