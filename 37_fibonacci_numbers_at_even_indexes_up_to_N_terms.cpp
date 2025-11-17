#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int first = 0, second = 1, next;
    int sum = 0;

    for (int i = 0; i < n; i++) {

    if (i % 2 == 0)  // even index
    sum += first;

    next = first + second;
    first = second;
    second = next;
    }

    cout << "Sum of Fibonacci numbers at even indexes: " << sum;

    return 0;
}

