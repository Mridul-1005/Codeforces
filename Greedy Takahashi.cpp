#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    if (k <= a) {
        // Takahashi eats only his own cookies
        a = a - k;
    } 
    else if (k <= a + b) {
        // Takahashi eats all of his cookies, then eats from Aoki
        k = k - a;
        a = 0;
        b = b - k;
    } 
    else {
        // Takahashi eats all cookies from both
        a = 0;
        b = 0;
    }

    cout << a << " " << b << endl;
    return 0;
}
