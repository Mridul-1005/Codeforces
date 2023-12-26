#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
         cin >> n >> k;
        k--;

        if(n % 2){
            int intersect = k / ((n-1)/2);
            cout << 1 + ((intersect + k) % n) << endl;
        }
        else
            cout << 1 + k % n << endl;
    }
}
