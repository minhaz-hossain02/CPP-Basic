#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, square, remainder;

    cout << "Enter a number: ";
    cin >> num;

    square = num * num;

    while (square != 0) {
        remainder = square % 10;
        sum += remainder;
        square /= 10;
    }

    if (sum == num)
        cout << num << " is a Neon Number.";
    else
        cout << num << " is not a Neon Number.";

    return 0;
}

