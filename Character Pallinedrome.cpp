#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ar[26] = {0};

    // Count frequencies
    for (char c : s) {
        ar[c - 'a']++;
    }

    // Print frequencies
    for (int i = 0; i < 26; i++) {
        if (ar[i] > 0) {
            cout << char('a' + i) << " : " << ar[i] << endl;
        }
    }

    return 0;
}
