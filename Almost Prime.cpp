#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005],ans;
int main(){
ll n;
cin>>n;
for(ll i=2;i<=n;i++){
    if(a[i]==0)
    for(ll j=i;j<=n;j+=i)
        a[j]++;
    if(a[i]==2)
        ans++;
}
cout<<ans;
}
