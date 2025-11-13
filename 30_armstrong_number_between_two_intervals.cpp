#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are: ";

    for (int num = start; num <= end; num++) {
        int temp = num, n = 0, remainder;
        double result = 0;

        while (temp != 0) {
            temp /= 10;
            n++;
        }

        temp = num;

        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        if ((int)result == num)
            cout << num << " ";
    }

    return 0;
}

