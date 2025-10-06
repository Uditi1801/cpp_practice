#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the row size of the pattern that you want: ";
    cin >> n;

    for (int i = 0; i < n; i++) {           // loop for rows
        for (int j = 0; j <= i; j++) {      // loop for stars
            cout << "*";
        }
        cout << endl;                       // move to next line
    }

    return 0;
}
