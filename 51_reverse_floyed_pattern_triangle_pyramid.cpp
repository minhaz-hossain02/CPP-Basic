#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int total = rows * (rows + 1) / 2;
    int num = total;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }

    return 0;
}

