#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=1e5;
int d[100005],dp[100005];
int32_t main(){

   int n; cin>>n;
   int ans=0;
   for(int i=1;i<=n;i++){
      int x; cin>>x;
      for(int j=1;j*j<=x;j++){
         if(x%j==0){
            dp[i]=max(dp[i],dp[d[x/j]]+1);
            if(j>1) dp[i]=max(dp[i],dp[d[j]]+1);
            ans=max(ans,dp[i]);
            d[j]=d[x/j]=i;
         }
      }
   }
   cout<<ans;

   return 0;
}
