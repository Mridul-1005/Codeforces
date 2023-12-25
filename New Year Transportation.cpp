#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n-1;i++)
    cin>>a[i];
int cur=1;
do{
    cur=cur+a[cur-1];
    if(cur==k){
        cout<<"YES"<<endl;
        return 0;
    }
}while(cur<n);
cout<<"NO"<<endl;
}

