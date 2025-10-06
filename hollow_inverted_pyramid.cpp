#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows you want the pyramid to have: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        // Print stars and inner spaces
        for (int k = 1; k <= 2*(n - i + 1) - 1; k++) {
            if (i == 1 || k == 1 || k == 2*(n - i + 1) - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
