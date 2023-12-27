#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
const int MAXD=1e17;
int n,m;
vector<vector<pair<int,int>>>g;
vector<int>dist;
void dijkstra(){
for(int i=0;i<=n;i++){
    dist[i]=MAXD;
}

priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
dist[1]=0;
pq.push({0,1});

while(!pq.empty()){
    int u=pq.top().second;
    int d=pq.top().first;
    pq.pop();
    if(dist[u]<d)continue;
    for(auto e:g[u]){
        int v=e.first;
        int c=e.second;
        if(dist[v]<=c+d)continue;
        else{
            dist[v]=c+d;
            pq.push({dist[v],v});

        }
    }
}

}

int32_t main(){
cin>>n>>m;
g.resize(n+1);
dist.resize(n+1);
for(auto i=0;i<m;i++){
    int u,v,c;
    cin>>u>>v>>c;
    g[u].push_back({v,c});

}
dijkstra();
for(int i=1;i<=n;i++){
    cout<<dist[i]<<" ";
}
}

