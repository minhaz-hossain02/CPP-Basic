#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversed = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversed)
        cout << "The number is a Palindrome.";
    else
        cout << "The number is not a Palindrome.";

    return 0;
}

