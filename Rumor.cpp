#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,x,y;
vector<vector<ll>>graph(100005);
vector<bool>visited(100005);
vector<ll>attribute(100005);
ll dfs(ll node){
    visited[node]=true;
    ll mini=attribute[node];
    for(ll x:graph[node]){
        if(!visited[x]){
            mini=min(mini,dfs(x));
        }
    }
    return mini;
}
void solve(){
    cin>>n>>m;
    for(ll i=0;i<n;i++){
        cin>>attribute[i];
    }
    for(ll i=0;i<m;i++){
        cin>>x>>y;
        --x;--y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    ll answer=0;
    for(ll i=0;i<n;i++){
        if(!visited[i]){
            answer+=dfs(i);
        }
    }
    cout<<answer<<endl;
}
int main(){
    ll t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}
