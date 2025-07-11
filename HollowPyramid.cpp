#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int k = 1; k <= n - i; k++) {
            cout << " ";
        }

        // Print stars and hollow spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            // Print star at the beginning, end, or in the last row
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
