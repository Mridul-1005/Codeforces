#include<bits/stdc++.h>
using namespace std;
void sieve(int n){
bool isPrime[n/2];
memset(isPrime,true,sizeof(isPrime));
for(int i=3;i*i<=n;i+=2){
    if(isPrime[i/2]==true){
        for(int j=i*i;j<=n;j+=i*2){
            isPrime[j/2]=false;
        }
    }
}
cout<<"2"<<" ";
for(int i=3;i<=n;i+=2){
    if(isPrime[i/2])
        cout<<i<<" ";
}
cout<<endl;
}
int main(){
int n;
cin>>n;
sieve(n);
return 0;
}
