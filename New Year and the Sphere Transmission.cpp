#include "bits/stdc++.h"
using namespace std;
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
typedef long long ll;
const ll mod = 1000000007;
	vector<ll> getdivs(ll n) {
    vector<ll> divs;
    for (ll i = 1; i * i <= n; i++) {
      if (n % i == 0) {
        divs.push_back(i);
        divs.push_back(n / i);
      }
    }

    getunique(divs);
    return divs;
  }

void solve(int tc = 0) {
    ll n;
	cin >> n;

	vector<ll> d = getdivs(n);

	vector<ll> ans;

	for (ll g: d) {
		ll len = n / g;
		ans.push_back(g * (len * (len - 1) / 2) + len);
	}

	getunique(ans);

	for (ll x: ans) cout << x << " ";
}
int main() {
	cout << setprecision(15) << fixed;

	int tc = 1;
	for (int t = 0; t < tc; t++) {
		solve(t);
	}

}
