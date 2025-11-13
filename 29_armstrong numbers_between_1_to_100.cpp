#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, n, result;

    cout << "Armstrong numbers between 1 and 100 are: ";

    for (num = 1; num <= 100; num++) {
        originalNum = num;
        result = 0;

        n = 0;
        int temp = num;
        while (temp != 0) {
            temp /= 10;
            ++n;
        }

        temp = num;

        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        if (result == num)
            cout << num << " ";
    }

    return 0;
}

