#include<bits/stdc++.h>
using namespace std;
#define mod 998244353
typedef long long int ll;
ll solve(ll x){
ll ans=1;
for(int i=2;i<=x;i++)
{
    ans = (ans*i)%mod;
}
return ans;
}
int main()
{

    int t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       if(n%2==1)cout<<"0"<<endl;
       else{
        ll ans;
        ans=solve(n/2);
        ll ans2=solve(n/2);
        ans=(ans*ans2)%mod;
        cout<<ans<<endl;
       }
    }
}
