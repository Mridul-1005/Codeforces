#include <bits/stdc++.h>
using namespace std;

bool ifnotPrime(vector<int>& prime, int x) {
    return (prime[x / 64] & (1LL << ((x >> 1) & 31)));
}

void makeComposite(vector<int>& prime, int x) {
    prime[x / 64] |= (1LL << ((x >> 1) & 31));
}

void bitWiseSieve(int n) {
    vector<int> prime((n / 64) + 1, 0);
    for (int i = 3; i * i <= n; i += 2) {
        if (!ifnotPrime(prime, i))
            for (int j = i * i, k = i << 1; j <= n; j += k)
                makeComposite(prime, j);
    }

    cout << "2\n";
    for (int i = 3, count = 1; i <= n; i += 2) {
        if (!ifnotPrime(prime, i)) {
            if (count % 100 == 0) {
                cout << i << endl;
            }
            count++;
        }
    }
}

int main() {
    int n = 100000000;
    bitWiseSieve(n);
    return 0;
}
