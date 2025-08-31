#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++) cin >> cards[i];

    int sereja = 0, dima = 0;
    int l = 0, r = n - 1;
    bool turn = true; // true = Sereja's turn, false = Dima's turn

    while (l <= r) {
        int choice;
        if (cards[l] > cards[r]) {
            choice = cards[l];
            l++;
        } else {
            choice = cards[r];
            r--;
        }

        if (turn) sereja += choice;
        else dima += choice;

        turn = !turn; // switch turns
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
