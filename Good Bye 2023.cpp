#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll b[n],p=1;
        for(ll i=0;i<n;i++){
            cin>>b[i];
            p*=b[i];
        }
        if(2023%p!=0)
        cout<<"NO"<<endl;
        else{
        cout<<"YES"<<endl;
        cout<<2023/p;
        while(k>1){
            cout<<" 1";
            k--;
        }
        cout<<endl;
        }
    }
}
