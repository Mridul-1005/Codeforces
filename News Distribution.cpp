#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
        int n,m;
        cin>>n>>m;

        vector<int> adj[n];
        for(int i=0;i<m;i++)
        {
            int k;
            cin>>k;
            if(k==0)
            {
                continue;
            }
            vector<int> temp;
            for(int j=0;j<k;j++)
            {
                int t1;
                cin>>t1;
                --t1;
                temp.push_back(t1);
            }
            for(int j=0;j<k-1;j++)
            {
                adj[temp[j]].push_back(temp[j+1]);
                adj[temp[j+1]].push_back(temp[j]);
            }
        }

        int ans[n];
        vector<int> vis(n,0);
        for(int i=0;i<n;i++)
        {

            if(!vis[i])
            {
                vector<int> comp;
                queue<int> q;
                q.push(i);
                while(!q.empty())
                {
                    int node=q.front();
                    q.pop();
                    if(vis[node]==1) continue;
                    vis[node]=1;
                    comp.push_back(node);
                    for(int it:adj[node])
                    {
                        if(vis[it]==0)
                        {
                            q.push(it);
                        }
                    }
                }
                for(auto it:comp){
                ans[it]=comp.size();
            }

            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
}
