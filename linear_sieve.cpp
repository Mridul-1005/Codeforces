#include<bits/stdc++.h>
using namespace std;
const int N=10000000;
vector<int>lp(N+1);
vector<int>pr;
int main(){
for(int i=2;i<=N;i++){
    if(lp[i]==0) lp[i]=i;
    pr.push_back(i);
    for(int j=0;i*pr[j]<=N;j++){
        lp[i*pr[j]]=pr[j];
        if(lp[i]==pr[j])
            break;
    }

}
}
